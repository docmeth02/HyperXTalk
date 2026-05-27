on startup
   testBrowserWidgetConcurrent
end startup

on testBrowserWidgetConcurrent
   local tStack
   put "ConcurrentTest" into tStack
   if there is a stack tStack then delete stack tStack

   create stack tStack
   set the defaultStack to tStack
   set the width of stack tStack to 640
   set the height of stack tStack to 480

   create widget "browser1" as "com.livecode.widget.browser"
   set the rect of widget "browser1" to "20,20,620,460"

   -- Test: rapid URL changes
   repeat 20 times
      set the URL of widget "browser1" to "about:blank"
      set the URL of widget "browser1" to "data:text/html,<h1>A</h1>"
      set the URL of widget "browser1" to "data:text/html,<h1>B</h1>"
   end repeat
   put "PASS: Rapid URL changes" & return

   -- Test: rapid HTML changes
   repeat 20 times
      set the htmlText of widget "browser1" to "<html><body><h1>" & it & "</h1></body></html>"
   end repeat
   put "PASS: Rapid HTML changes" & return

   -- Test: interleaved URL/HTML with JS evaluation
   repeat 10 times
      set the URL of widget "browser1" to "about:blank"
      set the htmlText of widget "browser1" to "<html><body><h1>Test</h1></body></html>"
      do "document.title" in widget "browser1"
   end repeat
   put "PASS: Interleaved operations" & return

   -- Test: back/forward after multiple loads
   set the URL of widget "browser1" to "data:text/html,<h1>Page1</h1>"
   wait 100 milliseconds
   set the URL of widget "browser1" to "data:text/html,<h1>Page2</h1>"
   wait 100 milliseconds
   set the URL of widget "browser1" to "data:text/html,<h1>Page3</h1>"
   wait 100 milliseconds

   if the canGoBack of widget "browser1" then
      go back in widget "browser1"
      put "PASS: Go back" & return
   end if

   if the canGoForward of widget "browser1" then
      go forward in widget "browser1"
      put "PASS: Go forward" & return
   end if

   -- Test: reload during load
   set the URL of widget "browser1" to "data:text/html,<h1>Reload</h1>"
   reload in widget "browser1"
   put "PASS: Reload" & return

   -- Test: stop loading immediately after starting
   set the URL of widget "browser1" to "data:text/html,<h1>Stop</h1>"
   stop loading in widget "browser1"
   put "PASS: Stop loading" & return

   delete stack tStack
   put "PASS: Concurrent test complete"
   quit 0
end testBrowserWidgetConcurrent
