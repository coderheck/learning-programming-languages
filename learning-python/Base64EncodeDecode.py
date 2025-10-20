import base64
option = input("enter option (1 for encode, 2 for decode): ")
if option == "1":
    stringToEncode = input("enter string to encode: ")
    encodedString = base64.b64decode(stringToEncode)
    print("done! the encoded string has been copied to your clipboard.")
if option == "2":
    stringToDecode = input("enter string to decode: ")
    decodedString = base64.b64decode(stringToDecode)
    print("done! the decoded string has been copied to your clipboard.")