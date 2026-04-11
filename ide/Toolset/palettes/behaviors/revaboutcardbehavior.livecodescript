script "revAboutCardBehavior"
on preOpenStack
   lock screen
   put the version && "| Build" && the buildNumber into field "version"
   set the loc of this stack to the screenLoc
   unlock screen
end preOpenStack


on CommandKeyDown pKey
   if (pKey = "w") then
      close this stack
   else
      pass CommandKeyDown
   end if
end CommandKeyDown
