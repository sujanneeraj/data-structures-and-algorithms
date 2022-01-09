#include <iostream>
#include <string>

using namespace std;

 bool isVowel(char &c) {
        
    bool isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    bool isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    return isLowercaseVowel || isUppercaseVowel;
    }
    
    string reverseVowels(string s) {
     
        int i = 0;
        int j = s.length() - 1;
        
        while(i < j) {
            if(isVowel(s[i])  && isVowel(s[j])) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
           else if(isVowel(s[i]) && !isVowel(s[j])) {
               j--;
           }
            
          else if(!isVowel(s[i]) && isVowel(s[j])) {
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
        std::string s = "leetcode";
        
        auto result = reverseVowels(s);
        
        std::cout << result;
    }