'''
Time Complexity: O(n)
Space Complexity: O(1)
'''

class Solution:
    def reverseWord(str: str) -> str:
        rev = ""
        for i in range(len(str)-1, -1, -1):
            rev += str[i]
        return rev
    
s = Solution
print(s.reverseWord(input("Enter string to be reversed: ")))