#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <iostream>


using namespace std;

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> a;
        set<int> b;
        
        for(int i = 0; i < nums1.size(); i++) {
            a.insert(nums1[i]);
        }
        
        for(int j = 0; j < nums2.size(); j++) {
            b.insert(nums2[j]);
        }
        
         std::vector<int> v_intersection;
 
        std::set_intersection(a.begin(), a.end(),
                          b.begin(), b.end(),
                          std::back_inserter(v_intersection));
        
        return v_intersection;
    }
    
int main() {
    std::vector<int> nums1 {1,2,2,1};
    std::vector<int> nums2 {2,2};
    
    auto result = intersection(nums1, nums2);
    
    for(auto &val: result) {
        std::cout << val << std::endl;
    }
}