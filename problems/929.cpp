#include <string>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int numUniqueEmails(vector<string>& emails) {
        
        set<string> counter;
        std::string finalValue;
        for(int i = 0; i < emails.size(); i++) {
            string currentEmail = emails[i];
            
            int j = 0;
            finalValue = "";
            while(currentEmail[j] != '@') {
                
                if(currentEmail[j] == '+') {
                    
                    while(currentEmail[j] != '@'){
                        j++;
                    }
                    continue;
                }
                
                if(currentEmail[j] != '.') {
                    finalValue += currentEmail[j];
                    j++;    
                }
                else{
                    j++;
                }
                
                
                
                
                
            }
            
            while(j < currentEmail.length()){
                finalValue += currentEmail[j];
                j++;
            }
            
            if(counter.find(finalValue) == counter.end()) {
                counter.insert(finalValue);
            }
        }
        return counter.size();
        
    }




int main() {
    std::vector<std::string> emails {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    
    auto result = numUniqueEmails(emails);
    
    std::cout << result;
    
}