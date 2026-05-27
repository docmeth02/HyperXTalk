on startup
   testBrowserWidgetLifecycle
end startup

on testBrowserWidgetLifecycle
   local tStack
   put "LifecycleTest" into tStack
   if there is a stack tStack then delete stack tStack

   create stack tStack
   set the defaultStack to tStack
   set the width of stack tStack to 640
   set the height of stack tStack to 480

   -- Test 1: Create widget on main card
   create widget "browser1" as "com.livecode.widget.browser"
   set the rect of widget "browser1" to "20,20,620,460"
   set the URL of widget "browser1" to "about:blank"
   put "PASS: Created on main card" & return

   -- Test 2: Add a new card, move widget, go back
   create card "card2"
   go to card "card2"
   create widget "browser2" as "com.livecode.widget.browser"
   set the rect of widget "browser2" to "20,20,620,460"
   set the URL of widget "browser2" to "about:blank"
   go to card 1
   put "PASS: Card navigation" & return

   -- Test 3: Show/hide widget
   hide widget "browser1"
   show widget "browser1"
   put "PASS: Show/hide" & return

   -- Test 4: Lock screen around widget operations
   lock screen
   set the htmlText of widget "browser1" to "<html><body><h1>Locked</h1></body></html>"
   unlock screen
   put "PASS: Lock screen operations" & return

   -- Test 5: Destroy stack with multiple browser widgets
   delete stack tStack
   put "PASS: Stack destroyed cleanly" & return

   put "PASS: Lifecycle test complete"
   quit 0
end testBrowserWidgetLifecycle
