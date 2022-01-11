#include <iostream>
#include <vector>
#include <map>

using namespace std;


int majorityElement(vector<int>& nums) {
        
        
         std::map<int, int> dictionary;
    std::map<int,int>::iterator it;
    int n = nums.size();

    for(auto &num: nums) {
        
        it = dictionary.find(num);
        if (it!= dictionary.end()) {
            dictionary[num] += 1;
        } else {
            dictionary[num] = 1;
            
        } 


    }


   
    for  (auto &val: dictionary) {
       
        if (val.second > n/2) {
            return val.first;

        }
    }

    return -1;
        
        
    }
    
int main() {
    
    vector<int> nums {3,2,3};
    
    auto result = majorityElement(nums);
    
    std::cout << result;
    
    return 0;
}