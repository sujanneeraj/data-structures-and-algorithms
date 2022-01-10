#include <iostream>
#include <vector>
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
    
    
    string multiply(string num1, string num2) {
        
        std::string a;
        std::string b;
        
        if(num1.length() >= num2.length()) {
            a = num1;
            b = num2;
        }
        else {
            a = num2;
            b = num1;
        }
        
        if(b.length()==1 && b=="0"){
            return "0";
        }
        
        std::string prev;
        std::string final_output;
        int current_position = 0;
        for(int i = b.length()-1; i >=0; i--) {
            int multiplier = b[i] - '0';
            
            int carry = 0;
            int j = a.length() - 1;
            string temp_result = "";
            if(current_position >0){
                for(int k=0; k < current_position;k++) {
                    temp_result += '0';
                }
            }
            while(j >=0){
                int current_value = a[j] - '0';
                int result = (multiplier * current_value) + carry;
                
                carry = result/10;
                int output = result%10;
                temp_result += output +'0';
                j--;
                
            }
            if(carry > 0) {
                temp_result += carry + '0';
            }
            reverse(temp_result.begin(), temp_result.end());
            if(current_position >=1) {
                final_output = addStrings(prev, temp_result);
                prev = final_output;
            } else{
                prev = temp_result;
                final_output = temp_result;
            }
            
            current_position +=1;
        }
        
        return final_output;
    }
    
int main(){
    std::string a ="99";
    std::string b = "9";
    
    auto result = multiply(a,b);
    
    std::cout << result;
}