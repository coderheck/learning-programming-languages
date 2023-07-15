str1 = "hello"
str2 = "python"
float1 = 8.21234352342781926
pi = 3.14159

print("from loxzy: %s %s!" % (str1, str2))
print("the first 6 digits of pi: %f" % pi)
print("the first 7 digits of \"float1\": %.6f" % float1)

lotsOfData = ("guy named loxzy", 90812, 1.28767289)
stringToPrint = "data: %s, %d, %f"
print(stringToPrint % lotsOfData)

print("the length of string \"stringToPrint\": %d" % len(stringToPrint)) # len() counts special characters, including spaces
print("number of elements in list \"lotsOfData\": %d" % len(lotsOfData)) # len() in this case counts the number of elements in the list (which is 3 for this list)

# end