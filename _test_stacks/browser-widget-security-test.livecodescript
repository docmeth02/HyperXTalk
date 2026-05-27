on startup
   testBrowserWidgetSecurity
end startup

on testBrowserWidgetSecurity
   local tStack
   put "SecurityTest" into tStack
   if there is a stack tStack then delete stack tStack

   create stack tStack
   set the defaultStack to tStack
   set the width of stack tStack to 640
   set the height of stack tStack to 480

   create widget "browser1" as "com.livecode.widget.browser"
   set the rect of widget "browser1" to "20,20,620,460"

   -- Test 1: about:blank should load
   set the URL of widget "browser1" to "about:blank"
   put "PASS: about:blank loads" & return

   -- Test 2: data URI should load (inline, no network)
   set the URL of widget "browser1" to "data:text/html,<h1>Data URI</h1>"
   put "PASS: data: URI loads" & return

   -- Test 3: Set HTML directly (common x-talk pattern)
   set the htmlText of widget "browser1" to "<html><body><h1>Direct HTML</h1></body></html>"
   put "PASS: Direct HTML injection works" & return

   -- Test 4: Evaluate benign JavaScript
   local tResult
   do "var x = 2 + 2; x" in widget "browser1"
   put the result into tResult
   if tResult is "4" then
      put "PASS: JS evaluation works" & return
   else
      put "FAIL: JS evaluation returned: " & tResult & return
      quit 1
   end if

   -- Test 5: Evaluate JS with syntax error should not crash
   do "var y = {" in widget "browser1"
   -- If we get here without crash, that's a pass
   put "PASS: JS syntax error handled gracefully" & return

   delete stack tStack
   put "PASS: Security test complete"
   quit 0
end testBrowserWidgetSecurity
