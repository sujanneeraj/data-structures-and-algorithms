#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;




vector<vector<string>> groupAnagrams(vector<string>& strs) {
     
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mapper;
        
        
        for(int i = 0; i < strs.size(); i++) {
           
            string temp = strs[i];
            string tmp;
            sort(temp.begin(), temp.end());
            
            if(mapper.find(temp) != mapper.end()) {
                mapper[temp].push_back(strs[i]);
            }
            else {
                vector<string> t{strs[i]};
                mapper[temp] = t;
                
            }
            
        }
        
        for(auto &val: mapper) {
            vector<string> inner;
            for(auto &res: val.second) {
                inner.push_back(res);
            }
            result.push_back(inner);
        }
        
        return result;
    }
    
int main() {
    vector<string> strs {"eat","tea","tan","ate","nat","bat"};
    auto result = groupAnagrams(strs);
    
    for(auto &res:result) {
        for(auto& r: res) {
            std::cout << r << " ";
        }
        std::cout << "\n";
    }
}