import os,requests
files = {
  'image': open("C:/Users/datmobile/Music/temp/cover.jpg",'rb'),
}
response = requests.post('https://api.imgur.com/3/upload', files=files)
print(response)