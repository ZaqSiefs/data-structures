#include <iostream>
#include <string>

/*
Time Complexity:    O(n)
Space Complexity:   O(1)
*/

class Solution{
    public:
    std::string reverseWord(std::string str){
        size_t minIndex = 0;                // Set minimum index of the string to 0
        size_t maxIndex = str.length() - 1; // Set maximum index of the string to length of string - 1
        while(minIndex < maxIndex) {        // Iterate over string, ignoring the center value of odd numbers
            char temp = str[minIndex];      // Set temporary char to minimum index of string
            str[minIndex] = str[maxIndex];  // Set minimum string index to maximum string index
            str[maxIndex] = temp;           // Set maximum string index to temp copy of minimum string index
            ++minIndex;                     // Increment minimum string index
            --maxIndex;                     // Decrement maximum string index
        }
        return str;                         // Return reversed string
    }
};

int main() {
    int t;
    std::cout << "Enter the number of strings you wish to reverse: ";
    std::cin >> t;
    while(t--)
    {
        std::string s;
        std::cout << "Enter String: ";
        std::cin >> s;
        Solution ob;
        std::cout << ob.reverseWord(s) << '\n';
    }
    return 0;
}
