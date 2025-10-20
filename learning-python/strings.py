str1 = "hello"
str2 = "python strings"
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

print("the letter \"l\" first appeared as the %dth character in string \"str1\" (%s)" % (str1.index("l") + 1, str1)) 
# str1.index("l") returns the index of the first
# character appeared in the list of characters, 
# python list indices starts at 0 so we need to 
# add 1 to represent the actual index
print(str1[2+1:4+1])
# prints out "lo" instead of "ll"
# again it looks kinda weird to me
print(str1[0])
# prints out first index of the character list, which is "h"
print(str1[::-1])
# this reverses the string "hello"
allUppercaseString = "HEY YOU"
allLowercaseString = "make me some coffee"
print(allUppercaseString.lower(), allLowercaseString.upper())
# lowercase and uppercase, you know it
print(allUppercaseString.startswith("hey"), allLowercaseString.endswith("coffee"))
# returns "False" and "True" (why are they capitalized :fearful:) because startswith() and endswith() is case sensitive
print(allUppercaseString.split(" "))
# returns a list containing the splitted words from the string "allUppercaseString"
# since the split happens at a space, it returns ["HEY", "YOU"]
print("endzon".split("d"))
# oh and it also remove the character with the split occurs, which returns ["en", "zon"]

# wooo the end of this file