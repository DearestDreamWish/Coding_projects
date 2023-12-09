import requests as rq

base_url="http://www.boredapi.com/api/activity/"
payload={"participants":1,"price":0}#How many should it be
request=rq.get(base_url,params=payload)
data=request.json()
print("Response:", data)
print("\n Activity:", data["activity"])#specify a section to output