#include <vector>
#include <iostream>
using namespace std;


void reverseString(vector<char>& s) {
     
        int i = 0;
        int j = s.size() - 1;
        
        while(i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    
int main(){
    vector<char> val {'h', 'e', 'l', 'l', 'o'};
    
    reverseString(val);
    for(auto &c : val) {
        std::cout << c;
    }
}