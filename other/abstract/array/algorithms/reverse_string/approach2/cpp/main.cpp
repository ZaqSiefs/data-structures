#include <iostream>
#include <string>

/*
Time Complexity:    O(n)
Space Complexity:   O(1)
*/

class Solution
{
    public:
    std::string reverseWord(std::string str) {

        std::string rev = "";                           // Init reversed string
        for(int i = str.size() - 1; i >= 0; i--) {    // Iterate over str
            rev += str[i];                           // set reversed string to index i of str
        }
        return rev;                                     // return reversed string
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