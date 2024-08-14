import os, shutil, winreg

robloxPath = None

robloxShellKey = r'HKEY_CLASSES_ROOT\\roblox-player\\shell\\open\\command'
hkcr = winreg.HKEY_CLASSES_ROOT
robloxRegistry = winreg.OpenKeyEx(hkcr, r'roblox-player\shell\\open\\command')
if robloxRegistry:
	robloxPath = winreg.QueryValueEx(robloxRegistry, "")[0]
robloxPath = robloxPath.replace("\"","")
robloxPath = robloxPath.replace("%1","")
robloxPath = os.path.split(robloxPath)[0]

if not os.path.exists("./ClientAppSettings.json"):
	print("ClientAppSettings.json was not found at current working directory.")
	exit(1)
else:
	if not os.path.exists(robloxPath + "\\ClientSettings"):
		os.mkdir(robloxPath + "\\ClientSettings")
		shutil.copy2('./ClientAppSettings.json', robloxPath + "\\ClientSettings")
	else:
		if os.path.exists(robloxPath + "\\ClientSettings"):
			shutil.copy2('./ClientAppSettings.json', robloxPath + "\\ClientSettings")
		else:
			if os.path.exists(robloxPath + "\\ClientSettings" + "ClientAppSettings.json"):
				os.remove(robloxPath + "\\ClientSettings" + "ClientAppSettings.json")
				shutil.copy2('./ClientAppSettings.json', robloxPath + "\\ClientSettings")