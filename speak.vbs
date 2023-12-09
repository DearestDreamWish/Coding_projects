Dim message, sapi
  message=InputBox("Enter text:","Enter Text")
  Set sapi=CreateObject("sapi.spvoice")
  sapi.Speak message
