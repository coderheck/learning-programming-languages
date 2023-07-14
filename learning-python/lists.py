# remember: this isnt luau, python list/array first index is numbered 0
list1 = []
list1.append("this should be printed first")
list1.append(45)
list1.append(82.1)
print(list1[0], list1[1], list1[2])
print("first thing to print: %s" % list1[0], ";", "second thing to print: %i" % list1[1], ";", "final thing to print: %f" % list1[2])
# end