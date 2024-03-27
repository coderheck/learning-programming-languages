import os
from pathlib import Path
rootdir = "C:/Users/datmobile/learning-programming-languages"
for subdir,dirs,files in os.walk(rootdir):
  for file in files:
    filename, fileext = os.path.splitext(file)
    if fileext == ".exe" or fileext == ".o":
      os.remove(subdir+"/"+file)