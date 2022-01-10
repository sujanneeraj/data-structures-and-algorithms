#include <iostream>
#include <string>
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



int main() {
    std::string a = "11";
    std::string b = "123";
    
    auto result = addStrings(a,b);
    
    std::cout << result;
}