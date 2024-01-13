'''
Time Complexity: O(n2)
Space Complexity: O(n)
'''

def reverseString(str):
    revStr = ''
    for c in str:
        revStr = c + revStr
    return revStr


print(reverseString(input("enter string to be reversed: ")))