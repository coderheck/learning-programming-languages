def printAnythingToDiffLines(arg):
    if isinstance(arg, list):
        for thing in arg:
            print(thing)
    print(arg)

countnum = 0
while countnum < 2:
    if countnum == 0:
        printAnythingToDiffLines("count the bois")
        countnum += 1
    if countnum == 1:
        printAnythingToDiffLines([1, 4, 7])
        countnum += 1
    if countnum == 2:
        printAnythingToDiffLines(["thing idk", countnum, "now it ends"])
        break