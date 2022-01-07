#include <iostream>
#include <vector>
#include <string>


using namespace std;


bool isPalindrome(string s) {
       
        std::string temp;
        
        if(s.length() == 0) {
            return true;
        }
        
       
        
        for(int k=0; k < s.length();k++){
            if(isalnum(s[k])){
                temp += tolower(s[k]);
            }
        }
        
        if(temp.length()==0) {
            return true;
        }
        
         int i = 0;
        int j = temp.length() - 1;
        
        while(i < j) {
            
            if(temp[i] != temp[j]) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
        
    }
    
    int main() {
        std::string testString = "A man, a plan, a canal: Panama";
        
        auto result = isPalindrome(testString);
        
        std::cout << result;
    }
