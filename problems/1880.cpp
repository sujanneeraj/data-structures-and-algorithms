
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


 string addStrings(string num1, string num2) {
        
        int carry = 0;
        int output;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        
        std::string final_result = "";
        while(i >=0 || j >= 0) {
            
            
            int number1 = i > -1 ? num1[i] - '0' : 0;
            int number2 = j > -1 ? num2[j] - '0' : 0;
            
            int result = carry + number1+number2;
            carry = result/10;
            output = result%10;
            
            final_result += output + '0';
            
            i--;
            j--;
        }
        
        if(carry > 0) {
            final_result += carry +'0';
        }
        
        reverse(final_result.begin(), final_result.end());
        return final_result;
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        
        std::string a = "";
        std::string b = "";
        std::string c = "";
        
        for(int i = 0; i < firstWord.length(); i++) {
            auto temp = firstWord[i] -'a';
            a += temp +'0';
        }
        
        
        for(int i = 0; i < secondWord.length(); i++) {
            auto temp = secondWord[i] -'a';
            b += temp + '0';
        }
        
        for(int i = 0; i < targetWord.length(); i++) {
            auto temp = targetWord[i] -'a';
            c += temp + '0';
        }
        
        auto result = addStrings(a,b);
        
        
        int val1 = stoi(result);
        int val2 = stoi(c);
        
        if(val1 == val2) {
            return true;
        }
        
        return false;
        
        
        
        
        
    }
    
    int main() {
        std::string a = "acb";
        std::string b = "cba";
        std::string target = "cdb";
        
        auto result = isSumEqual(a,b,target);
        
        std::cout << result;
    }