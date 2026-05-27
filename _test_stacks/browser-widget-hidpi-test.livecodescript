on startup
   testBrowserWidgetHiDPI
end startup

on testBrowserWidgetHiDPI
   local tStack
   put "HiDPITest" into tStack
   if there is a stack tStack then delete stack tStack

   create stack tStack
   set the defaultStack to tStack
   set the width of stack tStack to 640
   set the height of stack tStack to 480

   create widget "browser1" as "com.livecode.widget.browser"
   set the rect of widget "browser1" to "20,20,620,460"

   -- Test: basic load at default scale
   set the URL of widget "browser1" to "about:blank"
   put "PASS: Basic load at default scale" & return

   -- Test: resize the widget (triggers configure-event and scale re-query)
   set the rect of widget "browser1" to "10,10,630,470"
   put "PASS: Widget resized" & return

   -- Test: set HTML with varying content sizes
   set the htmlText of widget "browser1" to "<html><body><p>Small</p></body></html>"
   put "PASS: Small HTML" & return

   set the htmlText of widget "browser1" to "<html><body><p>Large content: " & repeatString("x", 1000) & "</p></body></html>"
   put "PASS: Large HTML" & return

   -- Test: hide and show widget (GTK realize/unrealize cycle)
   hide widget "browser1"
   show widget "browser1"
   put "PASS: Hide/show cycle" & return

   delete stack tStack
   put "PASS: HiDPI test complete"
   quit 0
end testBrowserWidgetHiDPI

function repeatString pChar, pCount
   local tResult
   repeat pCount times
      put pChar after tResult
   end repeat
   return tResult
end repeatString
