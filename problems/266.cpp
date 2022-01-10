#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;


bool canPermutePalindrome(string s) {
     
        unordered_map<char, int> counter;
        int evenOccurences = 0;
        int oddOccurences = 0;
        
        for(int i = 0; i< s.length(); i++) {
            
            
            if(counter.find(s[i]) != counter.end()) {
                counter[s[i]] +=1;
            }
            else {
                counter[s[i]] = 1;
            }
        }
        
        
        
        for(auto &val: counter) {
           if(val.second %2 ==0) {
               evenOccurences +=1;
           }
            else {
                oddOccurences +=1;
                if(oddOccurences > 1){
                    return false;
                }
            }
        }
        return true;
    }
    
int main() {
    std::string a = "code";
    
    auto result = canPermutePalindrome(a);
    
    std::cout << result;
    
}