Dim message, sapi
Set sapi=CreateObject("sapi.spvoice")
Do
	message=InputBox("Enter text to speak or cancel to exit:")
	sapi.Speak message
	If IsEmpty(message) Then 
		WScript.Quit 
	End If
Loop Until message=NOT(IsEmpty(message))