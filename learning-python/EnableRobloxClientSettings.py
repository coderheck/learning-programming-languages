import os, shutil, winreg

robloxPath = None

robloxShellKey = r'HKEY_CLASSES_ROOT\\roblox-player\\shell\\open\\command'
hkcr = winreg.HKEY_CLASSES_ROOT
robloxRegistry = winreg.OpenKeyEx(hkcr, r'roblox-player\shell\\open\\command')
if robloxRegistry:
	robloxPath = winreg.QueryValueEx(robloxRegistry, "")[0]
else: 
	print("cannot found roblox directory registry, are you sure you have installed roblox (or even played it before)?")
robloxPath = robloxPath.replace("\"","")
robloxPath = robloxPath.replace("%1","")
robloxPath = os.path.split(robloxPath)[0]

userprofile = os.environ["USERPROFILE"]
casPath = userprofile + "/Documents/progs/ClientAppSettings.json"

if not os.path.exists(casPath):
	print("ClientAppSettings.json was not found.")
else:
	if not os.path.exists(robloxPath + "\\ClientSettings"):
		print("did not found ClientSettings, making the directory and copying the settings")
		os.mkdir(robloxPath + "\\ClientSettings")
		shutil.copy2(casPath, robloxPath + "\\ClientSettings")
	else:
		if os.path.exists(robloxPath + "\\ClientSettings\\" + "ClientAppSettings.json"):
			print("found ClientSettings and ClientAppSettings.json, removing the current settings and copying new one")
			os.remove(robloxPath + "\\ClientSettings\\" + "ClientAppSettings.json")
			shutil.copy2(casPath, robloxPath + "\\ClientSettings")
		else:
			print("found ClientSettings but not ClientAppSettings.json, copying over")
			shutil.copy2(casPath, robloxPath + "\\ClientSettings")