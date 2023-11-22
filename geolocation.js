var reqcount=0
fetch("https://api.ipify.org/?format=json").then(res=>res.json()).then(res=>console.log(res))
fetch("https://ipapi.co/json/").then(res=>res.json()).then(res=>console.log(res))
// navigator.geolocation.getCurrentPosition(successCallback)
navigator.geolocation.watchPosition(successCallback)
function successCallback(position){
    const{accuracy,altitude,altitudeAccuracy,heading,latitude,longitude,speed}=position.coords
    const{timestamp}=position
    reqcount++ 
    console.log(accuracy)
    console.log(altitude)
    console.log(altitudeAccuracy)
    console.log(heading)
    console.log(latitude)
    console.log(longitude)
    console.log(speed)
    console.log(timestamp)
    console.log(reqcount)
}