script "revIDEExtensionManagerBehavior" with behavior "revPaletteBehavior"
on preOpenStack
   lock screen
   dispatch "setAsBehavior" to revIDEFrameBehavior() with the long id of this me
   
   --   set the behavior of card "search" of me to the long id of stack "revIDEExtensionManagerStoreBehavior"
   set the behavior of card "list" of me to the long id of stack "revIDEExtensionManagerListBehavior"
   set the zoomBox of this stack to false
   
   set the backgroundColor of this stack to (the systemWindowColor)
   set the foregroundColor of this stack to (the systemTextColor)
   
   clearFrameData
   
   # Navigation
   addFrameItem "widget","header", "navigation", "Widgets", "", "","showList", the long id of me,"widget"
   addFrameItem "library","header", "navigation", "Libraries", "", "","showList", the long id of me,"library"
   --   addFrameItem "sample","header", "navigation", "Sample Stacks", "", "","showList", the long id of me,"sample"
   --   addFrameItem "snippet","header", "navigation", "Snippets", "", "","showList", the long id of me,"snippet"
   --   addFrameItem "store","header", "navigation", "Store", "", "","showExtensionStore", the long id of me,"store"
   addFrameItem "install", "header", "action", "Install extension", "plus", "","installNew", the long id of me
   
   set the hilitedTabColor of me to "255,255,255"
   set the navigationDisplayStyle of me to "names"
   unlock screen
end preOpenStack

on SystemAppearanceChanged pMode, pWindowColor, pTextColor
   set the backgroundColor of this stack to pWindowColor
   set the foregroundColor of this stack to pTextColor
   -- Update the extension list row colours. viewProp["row color"] alone is
   -- not sufficient: the baked row template widgets paint their own Background
   -- graphic directly, so we must set backgroundColor on the group and the
   -- internal dvBackground graphic too (same pattern as the Project Browser).
   if there is a card "list" of me then
      local tRowColor, tList
      put revIDEColor("dataView_rowColor") into tRowColor
      put group "extensionList" of card "list" of me into tList
      if there is a tList then
         set the backgroundColor of tList to tRowColor
         try
            set the backgroundColor of graphic "dvBackground" of tList to tRowColor
         end try
         set the viewProp["row color"] of tList to tRowColor
         set the viewProp["alternate row color"] of tList to revIDEColor("dataView_rowAlternateColor")
         set the viewProp["hilite color"] of tList to ideColorGet("pb_line_selected")
         send "renderView" to tList
      end if
   end if
   pass SystemAppearanceChanged
end SystemAppearanceChanged

on showList pSection
   lock screen
   send "showList pSection" to card "list" of this stack
   unlock screen
end showList

command refreshList
   lock screen
   send "refreshList" to card "list" of this stack
   unlock screen
end refreshList
   
on showExtensionStore
   lock screen
   go to card "search" of this stack
   unlock screen
end showExtensionStore

on preferenceChanged pPreference, pValue
   revIDESetPreference pPreference, pValue
end preferenceChanged

on installNew
   answer file "Choose an extension to install:" with type "LiveCode Extension|lce|"
   if it is not empty then
      installExtension it, "", "widget"
   end if
end installNew

on installExtension pExtensionURL, pTypeID, pType
   lock screen  
   showList pType
   if pExtensionURL begins with "http" then
      // get from extensions store
      revIDEExtensionDownloadAndInstall pExtensionURL
   else
      // get from local .lce file
      revIDEExtensionInstall pExtensionURL, pType
   end if
   unlock screen
end installExtension
