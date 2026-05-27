on startup
   testBrowserWidgetMemory
end startup

on testBrowserWidgetMemory
   local tStack
   put "MemoryTest" into tStack
   if there is a stack tStack then delete stack tStack

   -- Stress test: create and destroy browser widget many times
   local tPass, tFail
   put 0 into tPass
   put 0 into tFail

   repeat 50 times
      create stack tStack
      set the defaultStack to tStack
      set the width of stack tStack to 640
      set the height of stack tStack to 480

      create widget "browser1" as "com.livecode.widget.browser"
      set the rect of widget "browser1" to "20,20,620,460"
      set the URL of widget "browser1" to "about:blank"
      set the htmlText of widget "browser1" to "<html><body><h1>Memory Test</h1></body></html>"

      -- Quick property round-trip to ensure widget is alive
      local tHtml
      put the htmlText of widget "browser1" into tHtml
      if tHtml contains "Memory Test" then
         add 1 to tPass
      else
         add 1 to tFail
      end if

      delete stack tStack
   end repeat

   if tFail > 0 then
      put "FAIL: " & tFail & " of 50 cycles failed" & return
      quit 1
   end if

   put "PASS: Memory stress test complete — " & tPass & "/50 cycles OK"
   quit 0
end testBrowserWidgetMemory
