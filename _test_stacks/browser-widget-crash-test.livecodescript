on startup
   testBrowserWidgetCrash
end startup

on testBrowserWidgetCrash
   local tStack
   put "CrashTest" into tStack
   if there is a stack tStack then delete stack tStack

   create stack tStack
   set the defaultStack to tStack
   set the width of stack tStack to 640
   set the height of stack tStack to 480

   create widget "browser1" as "com.livecode.widget.browser"
   set the rect of widget "browser1" to "20,20,620,460"

   -- Load a page so the web process is active
   set the URL of widget "browser1" to "about:blank"
   wait 500 milliseconds

   -- Test: rapid create/destroy of multiple widgets
   repeat 10 times
      create widget "browser2" as "com.livecode.widget.browser"
      set the rect of widget "browser2" to "20,20,620,460"
      set the htmlText of widget "browser2" to "<html><body><h1>Crash Test</h1></body></html>"
      delete widget "browser2"
   end repeat

   -- Verify original widget still works after stress
   set the htmlText of widget "browser1" to "<html><body><h1>Still Alive</h1></body></html>"
   local tHtml
   put the htmlText of widget "browser1" into tHtml
   if tHtml contains "Still Alive" then
      put "PASS: Widget survived stress test" & return
   else
      put "FAIL: Widget broken after stress test" & return
      quit 1
   end if

   delete stack tStack
   put "PASS: Crash recovery test complete"
   quit 0
end testBrowserWidgetCrash
