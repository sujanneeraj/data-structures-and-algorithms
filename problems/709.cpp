#include <string>
#include <iostream>

using namespace std;

 string toLowerCase(string s) {
       for(int i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            int offset =   c - 'A';
            s[i] = char('a' + offset);
        }
        
      
        
    }
        return s;
    }

int main() {
    
    std::string test = "HeLLo";
    auto result = toLowerCase(test);
    
    std::cout << result;
}