script "revSplashStackBehavior"
setProp statusMessage pMessage
   put pMessage into field "status" of me
end statusMessage


on PreOpenStack
   set the location of this stack to (the screenLoc)
end PreOpenStack
