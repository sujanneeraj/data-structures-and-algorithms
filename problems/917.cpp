#include <string>
#include <iostream>

using namespace std;

string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.length() - 1;
        
        while(i < j) {
            if(isalpha(s[i]) && isalpha(s[j])) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
            
            else if(isalpha(s[i]) && !isalpha(s[j])) {
                j--;
            }
            
            else if(!isalpha(s[i]) && isalpha(s[j])) {
                i++;
            }
            else {
                i++;
                j--;
            }
        }
        return s;
    }
    
int main() {
    std::string s = "ab-cd";
    auto result = reverseOnlyLetters(s);
    
    std::cout << result;
}