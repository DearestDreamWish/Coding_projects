import requests

def shorten_links(full_link,link_name):
    API_KEY="9cdbc14bae98de83019c437fdf651a30"
    BASE_URL="https://cutt.ly/api/api.php"
    
    payload={"key":API_KEY,"short":full_link,"name":link_name}
    request=requests.get(BASE_URL,params=payload)
    data=request.json()
    print("Response:",data)
    
    try:
        title=data["url"]["title"]
        short_link=data["url"]["shortLink"]
        print('Title:',title)
        print("\nShortened link:",short_link)
    except:
        print("[!] Error shortening link:",data["url"])


input_link=input("Enter the link to shorten: ")
input_name=input("Enter the name of the link: ")

shorten_links(input_link,input_name)