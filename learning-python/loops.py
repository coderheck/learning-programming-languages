for evenNum in [2, 4, 6, 8, 10]:
    print(evenNum)
print("end 1st loop")
for num in range(8):
    print(num)
print("end 2nd loop")
# prints out 0 1 2 3 4 5 6 7
# wow i love indices
countnum = 0
while countnum < 5:
    print(countnum)
    countnum += 1 # same as countnum = countnum + 1
print("end 3rd loop")
numcount = 0
while True:
    print(numcount)
    numcount += 1
    if numcount >= 5:
        print("end")
        break
print("end 4th loop")
for x in range(12):
    # check if x is even or not
    if x % 2 == 0:
        continue 
        # "continue" skip the current block if x is even and continue to check for another number
    print(x)
print("end 5th loop")

numbers = [
    951, 402, 984, 651, 360, 69, 408, 319, 601, 485, 980, 507, 725, 547, 544,
    615, 83, 165, 141, 501, 263, 617, 865, 575, 219, 390, 984, 592, 236, 105, 942, 941,
    386, 462, 47, 418, 907, 344, 236, 375, 823, 566, 597, 978, 328, 615, 953, 345,
    399, 162, 758, 219, 918, 237, 412, 566, 826, 248, 866, 950, 626, 949, 687, 217,
    815, 67, 104, 58, 512, 24, 892, 894, 767, 553, 81, 379, 843, 831, 445, 742, 717,
    958, 609, 842, 451, 688, 753, 854, 685, 93, 857, 440, 380, 126, 721, 328, 753, 470,
    743, 527
]
for num in numbers:
    if num == 390:
        break
    print(num)
# above code block prints out numbers from the given number list, if it reaches the number 390 then end the code block
print("end")