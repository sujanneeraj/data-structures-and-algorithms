#include <string>
#include <iostream>

using namespace std;


string defangIPaddr(string address) {
        string result = "";
        char dummy = '.';
        for(char &c:address) {
            if (c == dummy) {
                result += "[.]";
            }
            else {
                result += c;
            }
        }
        return result;
    }


int main() {
    
    string address = "1.1.1.1";
    
    auto result = defangIPaddr(address);
    
    std::cout << address << " " << result;
}