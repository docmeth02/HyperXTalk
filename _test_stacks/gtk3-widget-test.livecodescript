script "GTK3WidgetTest"
/*
GTK3 Widget Test Stack Generator

Creates a stack with all widget types that exercise GTK3 theme drawing
code paths (lnxgtkthemedrawing.cpp, lnxgtktheme.cpp). Open in the
HyperXTalk IDE to visually verify native theme rendering.

Run: open stack "tests/gtk3-widget-test.livecodescript" or execute
     from the message box with: start using stack "..."
     then: GTK3WidgetTestBuild
*/

on GTK3WidgetTestBuild
   local tStack
   put "GTK3 Widget Test" into tStack

   create invisible stack tStack
   set the defaultStack to tStack
   set the width of stack tStack to 900
   set the height of stack tStack to 750
   set the title of stack tStack to "GTK3 Theme Drawing Test"

   -- Card 1: Buttons, checkboxes, radio buttons, entries
   set the name of this card to "Controls"
   buildControlsCard

   -- Card 2: Scrollbars, sliders, progress bars
   create card "Scrollbars"
   buildScrollbarsCard

   -- Card 3: Tabs, option menus, combo boxes, list boxes
   create card "Menus"
   buildMenusCard

   -- Card 4: Graphics, frames, tooltips
   create card "Frames"
   buildFramesCard

   -- Card 5: Fields with various properties
   create card "Fields"
   buildFieldsCard

   go card "Controls" of stack tStack
   set the visible of stack tStack to true

   answer "GTK3 widget test stack created. Check each card for" & \
      " correct native theme rendering."
end GTK3WidgetTestBuild


-- Card 1: MOZ_GTK_BUTTON, MOZ_GTK_CHECKBUTTON, MOZ_GTK_RADIOBUTTON,
--         MOZ_GTK_ENTRY, MOZ_GTK_LABEL
on buildControlsCard
   local tY
   put 20 into tY

   -- Section label
   create field "lblControls"
   set the text of field "lblControls" to "Buttons & Controls"
   set the textStyle of field "lblControls" to "bold"
   set the textSize of field "lblControls" to 16
   set the opaque of field "lblControls" to false
   set the showBorder of field "lblControls" to false
   set the lockText of field "lblControls" to true
   set the rect of field "lblControls" to (20, tY, 300, tY + 30)
   add 35 to tY

   -- Standard push buttons (MOZ_GTK_BUTTON)
   create button "Normal Button"
   set the style of button "Normal Button" to "standard"
   set the rect of button "Normal Button" to (20, tY, 170, tY + 30)

   create button "Disabled Button"
   set the style of button "Disabled Button" to "standard"
   set the enabled of button "Disabled Button" to false
   set the rect of button "Disabled Button" to (180, tY, 340, tY + 30)

   create button "Default Button"
   set the style of button "Default Button" to "standard"
   set the default of button "Default Button" to true
   set the rect of button "Default Button" to (350, tY, 520, tY + 30)
   add 45 to tY

   -- Checkboxes (MOZ_GTK_CHECKBUTTON, MOZ_GTK_CHECKBUTTON_CONTAINER)
   create field "lblCheck"
   set the text of field "lblCheck" to "Checkboxes"
   set the textStyle of field "lblCheck" to "bold"
   set the opaque of field "lblCheck" to false
   set the showBorder of field "lblCheck" to false
   set the lockText of field "lblCheck" to true
   set the rect of field "lblCheck" to (20, tY, 200, tY + 25)
   add 28 to tY

   create button "Check Unchecked"
   set the style of button "Check Unchecked" to "checkbox"
   set the hilite of button "Check Unchecked" to false
   set the rect of button "Check Unchecked" to (20, tY, 200, tY + 25)

   create button "Check Checked"
   set the style of button "Check Checked" to "checkbox"
   set the hilite of button "Check Checked" to true
   set the rect of button "Check Checked" to (210, tY, 390, tY + 25)

   create button "Check Disabled"
   set the style of button "Check Disabled" to "checkbox"
   set the enabled of button "Check Disabled" to false
   set the rect of button "Check Disabled" to (400, tY, 580, tY + 25)
   add 35 to tY

   -- Radio buttons (MOZ_GTK_RADIOBUTTON, MOZ_GTK_RADIOBUTTON_CONTAINER)
   create field "lblRadio"
   set the text of field "lblRadio" to "Radio Buttons"
   set the textStyle of field "lblRadio" to "bold"
   set the opaque of field "lblRadio" to false
   set the showBorder of field "lblRadio" to false
   set the lockText of field "lblRadio" to true
   set the rect of field "lblRadio" to (20, tY, 200, tY + 25)
   add 28 to tY

   create button "Radio A"
   set the style of button "Radio A" to "radioButton"
   set the hilite of button "Radio A" to true
   set the rect of button "Radio A" to (20, tY, 180, tY + 25)

   create button "Radio B"
   set the style of button "Radio B" to "radioButton"
   set the hilite of button "Radio B" to false
   set the rect of button "Radio B" to (190, tY, 350, tY + 25)

   create button "Radio Disabled"
   set the style of button "Radio Disabled" to "radioButton"
   set the enabled of button "Radio Disabled" to false
   set the rect of button "Radio Disabled" to (360, tY, 540, tY + 25)
   add 45 to tY

   -- Text entry fields (MOZ_GTK_ENTRY, MOZ_GTK_ENTRY_FRAME)
   create field "lblEntry"
   set the text of field "lblEntry" to "Text Entry (MOZ_GTK_ENTRY)"
   set the textStyle of field "lblEntry" to "bold"
   set the opaque of field "lblEntry" to false
   set the showBorder of field "lblEntry" to false
   set the lockText of field "lblEntry" to true
   set the rect of field "lblEntry" to (20, tY, 350, tY + 25)
   add 28 to tY

   create field "Entry Normal"
   set the text of field "Entry Normal" to "Normal text entry"
   set the rect of field "Entry Normal" to (20, tY, 280, tY + 28)

   create field "Entry Disabled"
   set the text of field "Entry Disabled" to "Disabled entry"
   set the enabled of field "Entry Disabled" to false
   set the rect of field "Entry Disabled" to (290, tY, 550, tY + 28)

   create field "Entry Focused"
   set the text of field "Entry Focused" to "Click to focus"
   set the rect of field "Entry Focused" to (560, tY, 820, tY + 28)
   add 45 to tY

   -- Group with border (MOZ_GTK_FRAME)
   create field "lblGroup"
   set the text of field "lblGroup" to "Grouped Controls (MOZ_GTK_FRAME)"
   set the textStyle of field "lblGroup" to "bold"
   set the opaque of field "lblGroup" to false
   set the showBorder of field "lblGroup" to false
   set the lockText of field "lblGroup" to true
   set the rect of field "lblGroup" to (20, tY, 400, tY + 25)
   add 28 to tY

   create group "TestGroup"
   set the showBorder of group "TestGroup" to true
   set the showName of group "TestGroup" to true
   set the label of group "TestGroup" to "Grouped Items"
   set the rect of group "TestGroup" to (20, tY, 400, tY + 100)

   create button "GroupBtn1" in group "TestGroup"
   set the rect of button "GroupBtn1" of group "TestGroup" to (30, tY + 20, 190, tY + 50)

   create button "GroupBtn2" in group "TestGroup"
   set the style of button "GroupBtn2" of group "TestGroup" to "checkbox"
   set the rect of button "GroupBtn2" of group "TestGroup" to (200, tY + 20, 390, tY + 50)

   create field "GroupField" in group "TestGroup"
   set the text of field "GroupField" of group "TestGroup" to "Field in group"
   set the rect of field "GroupField" of group "TestGroup" to (30, tY + 60, 390, tY + 88)
end buildControlsCard


-- Card 2: MOZ_GTK_SCROLLBAR_*, MOZ_GTK_PROGRESSBAR, MOZ_GTK_PROGRESS_CHUNK,
--         MOZ_GTK_SCALE_TRACK_*, MOZ_GTK_SPINBUTTON
on buildScrollbarsCard
   local tY
   put 20 into tY

   create field "lblScroll"
   set the text of field "lblScroll" to "Scrollbars & Progress"
   set the textStyle of field "lblScroll" to "bold"
   set the textSize of field "lblScroll" to 16
   set the opaque of field "lblScroll" to false
   set the showBorder of field "lblScroll" to false
   set the lockText of field "lblScroll" to true
   set the rect of field "lblScroll" to (20, tY, 350, tY + 30)
   add 35 to tY

   -- Horizontal scrollbar (MOZ_GTK_SCROLLBAR_TRACK_HORIZONTAL,
   --   MOZ_GTK_SCROLLBAR_THUMB_HORIZONTAL, MOZ_GTK_SCROLLBAR_BUTTON)
   create field "lblHScroll"
   set the text of field "lblHScroll" to "Horizontal Scrollbar"
   set the textStyle of field "lblHScroll" to "bold"
   set the opaque of field "lblHScroll" to false
   set the showBorder of field "lblHScroll" to false
   set the lockText of field "lblHScroll" to true
   set the rect of field "lblHScroll" to (20, tY, 250, tY + 25)
   add 28 to tY

   create scrollbar "HScroll"
   set the style of scrollbar "HScroll" to "scrollbar"
   set the orientation of scrollbar "HScroll" to "horizontal"
   set the rect of scrollbar "HScroll" to (20, tY, 500, tY + 20)
   set the thumbPosition of scrollbar "HScroll" to 33
   add 35 to tY

   -- Vertical scrollbar (MOZ_GTK_SCROLLBAR_TRACK_VERTICAL,
   --   MOZ_GTK_SCROLLBAR_THUMB_VERTICAL)
   create field "lblVScroll"
   set the text of field "lblVScroll" to "Vertical Scrollbar"
   set the textStyle of field "lblVScroll" to "bold"
   set the opaque of field "lblVScroll" to false
   set the showBorder of field "lblVScroll" to false
   set the lockText of field "lblVScroll" to true
   set the rect of field "lblVScroll" to (20, tY, 250, tY + 25)
   add 28 to tY

   create scrollbar "VScroll"
   set the style of scrollbar "VScroll" to "scrollbar"
   set the orientation of scrollbar "VScroll" to "vertical"
   set the rect of scrollbar "VScroll" to (20, tY, 40, tY + 150)
   set the thumbPosition of scrollbar "VScroll" to 50

   -- Scale / slider (MOZ_GTK_SCALE_TRACK_HORIZONTAL, _VERTICAL)
   create scrollbar "HSlider"
   set the style of scrollbar "HSlider" to "scale"
   set the orientation of scrollbar "HSlider" to "horizontal"
   set the rect of scrollbar "HSlider" to (60, tY, 400, tY + 30)
   set the thumbPosition of scrollbar "HSlider" to 66

   create scrollbar "VSlider"
   set the style of scrollbar "VSlider" to "scale"
   set the orientation of scrollbar "VSlider" to "vertical"
   set the rect of scrollbar "VSlider" to (420, tY, 450, tY + 150)
   set the thumbPosition of scrollbar "VSlider" to 25
   add 165 to tY

   -- Progress bar (MOZ_GTK_PROGRESSBAR, MOZ_GTK_PROGRESS_CHUNK)
   create field "lblProgress"
   set the text of field "lblProgress" to "Progress Bar"
   set the textStyle of field "lblProgress" to "bold"
   set the opaque of field "lblProgress" to false
   set the showBorder of field "lblProgress" to false
   set the lockText of field "lblProgress" to true
   set the rect of field "lblProgress" to (20, tY, 200, tY + 25)
   add 28 to tY

   create scrollbar "Progress25"
   set the style of scrollbar "Progress25" to "progress"
   set the rect of scrollbar "Progress25" to (20, tY, 400, tY + 22)
   set the thumbPosition of scrollbar "Progress25" to 25
   add 30 to tY

   create scrollbar "Progress75"
   set the style of scrollbar "Progress75" to "progress"
   set the rect of scrollbar "Progress75" to (20, tY, 400, tY + 22)
   set the thumbPosition of scrollbar "Progress75" to 75
   add 30 to tY

   create scrollbar "Progress100"
   set the style of scrollbar "Progress100" to "progress"
   set the rect of scrollbar "Progress100" to (20, tY, 400, tY + 22)
   set the thumbPosition of scrollbar "Progress100" to 100
   add 40 to tY

   -- Scrolling text field (exercises scrollbar within a field)
   create field "lblScrollField"
   set the text of field "lblScrollField" to "Scrolling Field"
   set the textStyle of field "lblScrollField" to "bold"
   set the opaque of field "lblScrollField" to false
   set the showBorder of field "lblScrollField" to false
   set the lockText of field "lblScrollField" to true
   set the rect of field "lblScrollField" to (20, tY, 250, tY + 25)
   add 28 to tY

   create field "ScrollField"
   set the vScrollbar of field "ScrollField" to true
   set the hScrollbar of field "ScrollField" to true
   set the rect of field "ScrollField" to (20, tY, 500, tY + 120)
   local tScrollText
   repeat with i = 1 to 30
      put "Line " & i & ": scrollbar test content - long text to test horizontal scroll as well" & return after tScrollText
   end repeat
   set the text of field "ScrollField" to tScrollText
end buildScrollbarsCard


-- Card 3: MOZ_GTK_TAB, MOZ_GTK_TABPANELS, MOZ_GTK_OPTIONBUTTON,
--         MOZ_GTK_DROPDOWN_ARROW, MOZ_GTK_LISTBOX, MOZ_GTK_MENUITEMHIGHLIGHT
on buildMenusCard
   local tY
   put 20 into tY

   create field "lblMenus"
   set the text of field "lblMenus" to "Menus, Tabs & Lists"
   set the textStyle of field "lblMenus" to "bold"
   set the textSize of field "lblMenus" to 16
   set the opaque of field "lblMenus" to false
   set the showBorder of field "lblMenus" to false
   set the lockText of field "lblMenus" to true
   set the rect of field "lblMenus" to (20, tY, 350, tY + 30)
   add 35 to tY

   -- Tab panel / option menu button (MOZ_GTK_TAB, MOZ_GTK_TABPANELS)
   create field "lblTabs"
   set the text of field "lblTabs" to "Tab Panel (MOZ_GTK_TAB)"
   set the textStyle of field "lblTabs" to "bold"
   set the opaque of field "lblTabs" to false
   set the showBorder of field "lblTabs" to false
   set the lockText of field "lblTabs" to true
   set the rect of field "lblTabs" to (20, tY, 300, tY + 25)
   add 28 to tY

   create button "TabBtn"
   set the style of button "TabBtn" to "menu"
   set the menuMode of button "TabBtn" to "tabbed"
   set the text of button "TabBtn" to "Tab One" & return & "Tab Two" & return & "Tab Three"
   set the rect of button "TabBtn" to (20, tY, 450, tY + 35)
   add 50 to tY

   -- Option menu (MOZ_GTK_OPTIONBUTTON, MOZ_GTK_DROPDOWN_ARROW)
   create field "lblOption"
   set the text of field "lblOption" to "Option Menu (MOZ_GTK_OPTIONBUTTON)"
   set the textStyle of field "lblOption" to "bold"
   set the opaque of field "lblOption" to false
   set the showBorder of field "lblOption" to false
   set the lockText of field "lblOption" to true
   set the rect of field "lblOption" to (20, tY, 400, tY + 25)
   add 28 to tY

   create button "OptionMenu"
   set the style of button "OptionMenu" to "menu"
   set the menuMode of button "OptionMenu" to "option"
   set the text of button "OptionMenu" to "Option A" & return & "Option B" & return & "Option C"
   set the rect of button "OptionMenu" to (20, tY, 250, tY + 28)

   -- Disabled option menu
   create button "OptionMenuDisabled"
   set the style of button "OptionMenuDisabled" to "menu"
   set the menuMode of button "OptionMenuDisabled" to "option"
   set the text of button "OptionMenuDisabled" to "Disabled A" & return & "Disabled B"
   set the enabled of button "OptionMenuDisabled" to false
   set the rect of button "OptionMenuDisabled" to (260, tY, 490, tY + 28)
   add 45 to tY

   -- Pulldown menu
   create field "lblPulldown"
   set the text of field "lblPulldown" to "Pulldown Menu"
   set the textStyle of field "lblPulldown" to "bold"
   set the opaque of field "lblPulldown" to false
   set the showBorder of field "lblPulldown" to false
   set the lockText of field "lblPulldown" to true
   set the rect of field "lblPulldown" to (20, tY, 250, tY + 25)
   add 28 to tY

   create button "PulldownMenu"
   set the style of button "PulldownMenu" to "menu"
   set the menuMode of button "PulldownMenu" to "pulldown"
   set the text of button "PulldownMenu" to "Item 1" & return & "Item 2" & return & "-" & return & "Item 3"
   set the rect of button "PulldownMenu" to (20, tY, 200, tY + 28)
   add 45 to tY

   -- Popup menu
   create field "lblPopup"
   set the text of field "lblPopup" to "Popup Menu (right-click button below)"
   set the textStyle of field "lblPopup" to "bold"
   set the opaque of field "lblPopup" to false
   set the showBorder of field "lblPopup" to false
   set the lockText of field "lblPopup" to true
   set the rect of field "lblPopup" to (20, tY, 400, tY + 25)
   add 28 to tY

   create button "PopupTarget"
   set the label of button "PopupTarget" to "Right-click me"
   set the rect of button "PopupTarget" to (20, tY, 200, tY + 30)

   create button "PopupMenu"
   set the style of button "PopupMenu" to "menu"
   set the menuMode of button "PopupMenu" to "popup"
   set the text of button "PopupMenu" to "Popup Item A" & return & "Popup Item B" & return & "Popup Item C"
   set the visible of button "PopupMenu" to false
   add 45 to tY

   -- Combo box (MOZ_GTK_DROPDOWN_ARROW)
   create field "lblCombo"
   set the text of field "lblCombo" to "Combo Box"
   set the textStyle of field "lblCombo" to "bold"
   set the opaque of field "lblCombo" to false
   set the showBorder of field "lblCombo" to false
   set the lockText of field "lblCombo" to true
   set the rect of field "lblCombo" to (20, tY, 200, tY + 25)
   add 28 to tY

   create button "ComboBox"
   set the style of button "ComboBox" to "menu"
   set the menuMode of button "ComboBox" to "comboBox"
   set the text of button "ComboBox" to "Combo 1" & return & "Combo 2" & return & "Combo 3"
   set the rect of button "ComboBox" to (20, tY, 300, tY + 28)
   add 45 to tY

   -- List field (MOZ_GTK_LISTBOX)
   create field "lblList"
   set the text of field "lblList" to "List Field (MOZ_GTK_LISTBOX)"
   set the textStyle of field "lblList" to "bold"
   set the opaque of field "lblList" to false
   set the showBorder of field "lblList" to false
   set the lockText of field "lblList" to true
   set the rect of field "lblList" to (20, tY, 350, tY + 25)
   add 28 to tY

   create field "ListField"
   set the listBehavior of field "ListField" to true
   set the vScrollbar of field "ListField" to true
   set the multipleHilites of field "ListField" to false
   set the rect of field "ListField" to (20, tY, 300, tY + 120)
   local tListItems
   repeat with i = 1 to 20
      put "List Item " & i & return after tListItems
   end repeat
   set the text of field "ListField" to tListItems
end buildMenusCard


-- Card 4: MOZ_GTK_FRAME, MOZ_GTK_TOOLBAR, MOZ_GTK_TOOLTIP, graphics
on buildFramesCard
   local tY
   put 20 into tY

   create field "lblFrames"
   set the text of field "lblFrames" to "Frames, Graphics & Shapes"
   set the textStyle of field "lblFrames" to "bold"
   set the textSize of field "lblFrames" to 16
   set the opaque of field "lblFrames" to false
   set the showBorder of field "lblFrames" to false
   set the lockText of field "lblFrames" to true
   set the rect of field "lblFrames" to (20, tY, 350, tY + 30)
   add 35 to tY

   -- Rectangle graphic
   create graphic "GrRect"
   set the style of graphic "GrRect" to "rectangle"
   set the rect of graphic "GrRect" to (20, tY, 180, tY + 80)
   set the foregroundColor of graphic "GrRect" to "blue"
   set the lineSize of graphic "GrRect" to 2

   -- Rounded rectangle
   create graphic "GrRoundRect"
   set the style of graphic "GrRoundRect" to "roundrect"
   set the rect of graphic "GrRoundRect" to (200, tY, 360, tY + 80)
   set the foregroundColor of graphic "GrRoundRect" to "red"
   set the lineSize of graphic "GrRoundRect" to 2

   -- Oval
   create graphic "GrOval"
   set the style of graphic "GrOval" to "oval"
   set the rect of graphic "GrOval" to (380, tY, 500, tY + 80)
   set the foregroundColor of graphic "GrOval" to "green"
   set the lineSize of graphic "GrOval" to 2
   set the opaque of graphic "GrOval" to true
   set the backColor of graphic "GrOval" to "230,255,230"
   add 95 to tY

   -- Line
   create graphic "GrLine"
   set the style of graphic "GrLine" to "line"
   set the rect of graphic "GrLine" to (20, tY, 250, tY + 3)
   set the foregroundColor of graphic "GrLine" to "128,0,128"
   set the lineSize of graphic "GrLine" to 3
   add 20 to tY

   -- Polygon
   create graphic "GrPolygon"
   set the style of graphic "GrPolygon" to "polygon"
   set the rect of graphic "GrPolygon" to (20, tY, 180, tY + 100)
   set the foregroundColor of graphic "GrPolygon" to "orange"
   set the lineSize of graphic "GrPolygon" to 2
   set the points of graphic "GrPolygon" to \
      "100," & tY & return & \
      "20," & (tY + 100) & return & \
      "180," & (tY + 100) & return & \
      "100," & tY

   -- Filled rectangle with transparency
   create graphic "GrFilled"
   set the style of graphic "GrFilled" to "rectangle"
   set the rect of graphic "GrFilled" to (200, tY, 400, tY + 100)
   set the opaque of graphic "GrFilled" to true
   set the backColor of graphic "GrFilled" to "100,150,255"
   set the foregroundColor of graphic "GrFilled" to "0,0,128"
   set the lineSize of graphic "GrFilled" to 3
   set the blendLevel of graphic "GrFilled" to 30
   add 115 to tY

   -- Nested groups (frame rendering)
   create field "lblNested"
   set the text of field "lblNested" to "Nested Groups"
   set the textStyle of field "lblNested" to "bold"
   set the opaque of field "lblNested" to false
   set the showBorder of field "lblNested" to false
   set the lockText of field "lblNested" to true
   set the rect of field "lblNested" to (20, tY, 200, tY + 25)
   add 28 to tY

   create group "OuterGroup"
   set the showBorder of group "OuterGroup" to true
   set the label of group "OuterGroup" to "Outer"
   set the showName of group "OuterGroup" to true
   set the rect of group "OuterGroup" to (20, tY, 450, tY + 130)

   create group "InnerGroup" in group "OuterGroup"
   set the showBorder of group "InnerGroup" of group "OuterGroup" to true
   set the label of group "InnerGroup" of group "OuterGroup" to "Inner"
   set the showName of group "InnerGroup" of group "OuterGroup" to true
   set the rect of group "InnerGroup" of group "OuterGroup" to (40, tY + 25, 430, tY + 120)

   create button "InnerBtn" in group "InnerGroup" of group "OuterGroup"
   set the label of button "InnerBtn" of group "InnerGroup" of group "OuterGroup" to "Nested Button"
   set the rect of button "InnerBtn" of group "InnerGroup" of group "OuterGroup" to (60, tY + 50, 220, tY + 80)

   create field "InnerField" in group "InnerGroup" of group "OuterGroup"
   set the text of field "InnerField" of group "InnerGroup" of group "OuterGroup" to "Nested field"
   set the rect of field "InnerField" of group "InnerGroup" of group "OuterGroup" to (230, tY + 50, 420, tY + 78)
end buildFramesCard


-- Card 5: Various field styles, text rendering (exercises Pango/FreeType)
on buildFieldsCard
   local tY
   put 20 into tY

   create field "lblFields"
   set the text of field "lblFields" to "Fields & Text Rendering"
   set the textStyle of field "lblFields" to "bold"
   set the textSize of field "lblFields" to 16
   set the opaque of field "lblFields" to false
   set the showBorder of field "lblFields" to false
   set the lockText of field "lblFields" to true
   set the rect of field "lblFields" to (20, tY, 350, tY + 30)
   add 35 to tY

   -- Plain text field
   create field "PlainField"
   set the text of field "PlainField" to "Plain text field with default font"
   set the rect of field "PlainField" to (20, tY, 450, tY + 28)
   add 38 to tY

   -- Bold text
   create field "BoldField"
   set the text of field "BoldField" to "Bold text field"
   set the textStyle of field "BoldField" to "bold"
   set the rect of field "BoldField" to (20, tY, 450, tY + 28)
   add 38 to tY

   -- Italic text
   create field "ItalicField"
   set the text of field "ItalicField" to "Italic text field"
   set the textStyle of field "ItalicField" to "italic"
   set the rect of field "ItalicField" to (20, tY, 450, tY + 28)
   add 38 to tY

   -- Large text
   create field "LargeField"
   set the text of field "LargeField" to "Large 24pt text"
   set the textSize of field "LargeField" to 24
   set the rect of field "LargeField" to (20, tY, 450, tY + 40)
   add 50 to tY

   -- Small text
   create field "SmallField"
   set the text of field "SmallField" to "Small 9pt text - check legibility"
   set the textSize of field "SmallField" to 9
   set the rect of field "SmallField" to (20, tY, 450, tY + 22)
   add 32 to tY

   -- Colored text
   create field "ColorField"
   set the text of field "ColorField" to "Red text on yellow background"
   set the foregroundColor of field "ColorField" to "200,0,0"
   set the backColor of field "ColorField" to "255,255,200"
   set the rect of field "ColorField" to (20, tY, 450, tY + 28)
   add 38 to tY

   -- Multi-line with mixed styles
   create field "MixedField"
   set the rect of field "MixedField" to (20, tY, 600, tY + 120)
   set the vScrollbar of field "MixedField" to true
   set the text of field "MixedField" to \
      "Mixed style text field:" & return & \
      "Line 2: This exercises Pango text layout" & return & \
      "Line 3: GTK3 uses Pango for all text rendering" & return & \
      "Line 4: FreeType provides glyph rasterization" & return & \
      "Line 5: Fontconfig handles font discovery" & return & \
      "Line 6: Cairo composites the final output" & return & \
      "Line 7: Check that scrollbar integrates correctly" & return & \
      "Line 8: Additional content for scrolling..." & return & \
      "Line 9: More text lines" & return & \
      "Line 10: End of test content"
   add 135 to tY

   -- Unicode / internationalization test
   create field "lblUnicode"
   set the text of field "lblUnicode" to "Unicode & i18n (Pango/FreeType)"
   set the textStyle of field "lblUnicode" to "bold"
   set the opaque of field "lblUnicode" to false
   set the showBorder of field "lblUnicode" to false
   set the lockText of field "lblUnicode" to true
   set the rect of field "lblUnicode" to (20, tY, 350, tY + 25)
   add 28 to tY

   create field "UnicodeField"
   set the rect of field "UnicodeField" to (20, tY, 600, tY + 100)
   set the text of field "UnicodeField" to \
      "Latin: The quick brown fox" & return & \
      "German: " & numToCodepoint(0xC4) & numToCodepoint(0xD6) & numToCodepoint(0xDC) & " " & numToCodepoint(0xE4) & numToCodepoint(0xF6) & numToCodepoint(0xFC) & numToCodepoint(0xDF) & return & \
      "Symbols: " & numToCodepoint(0x2603) & " " & numToCodepoint(0x2764) & " " & numToCodepoint(0x2605) & " " & numToCodepoint(0x266B) & return & \
      "Math: " & numToCodepoint(0x222B) & " " & numToCodepoint(0x2211) & " " & numToCodepoint(0x221E) & " " & numToCodepoint(0x2202)
end buildFieldsCard
