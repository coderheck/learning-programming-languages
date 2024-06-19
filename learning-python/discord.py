import os, shutil, sys

rootDir = "C:\\Users\\datmobile\\AppData\\Local\\Discord"

for subdir, dirs, files in os.walk(rootDir):
  for file in files:
    filename = os.fsdecode(file)
    if filename == "Discord.exe":
      os.system(subdir+"\\Discord.exe")
      sys.exit(0)