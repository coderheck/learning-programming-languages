# idk
integer = 420
floatNum1 = 69.0
floatNum2 = float(69)
print(integer, floatNum1, floatNum2)

# strings
testString1 = "rayhanning"
testString2 = 'the'
print(testString2, testString1)

# nums
num1, num2 = 1, 2
print(num1 + num2 * num2)

# string concat
stringToConcat1 = "string"
stringToConcat2 = "concatenation"
stringToConcat3 = "is like this"
stringAfterConcat = stringToConcat1 + " " + stringToConcat2 + " " + stringToConcat3
print(stringAfterConcat)
print(stringToConcat1 + " " + stringToConcat2 + " " + stringToConcat3)

# so this is how you make comments
# final section
if stringAfterConcat == stringToConcat1 + " " + stringToConcat2 + " " + stringToConcat3:
    print("string concatenation in python is weird")
if isinstance(floatNum1, float) and isinstance(floatNum2, float):
    print("%f" % floatNum1, "and %f are floating point numbers" % floatNum2)
print("you did good, gg!", "🔥")
