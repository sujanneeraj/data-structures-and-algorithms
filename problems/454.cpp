#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int,int> a;
        int result = 0;
        for(int i=0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                int current_sum = nums1[i] + nums2[j];
                
                if(a.find(current_sum) == a.end()) {
                    a[current_sum] = 1;
                }
                else {
                    a[current_sum] +=1;
                }
            }
        }
        
        for(int i=0; i < nums3.size(); i++) {
            for(int j=0; j < nums4.size(); j++) {
                int current_sum = nums3[i] + nums4[j];
                
                if(current_sum == 0) {
                    if(a.find(0) != a.end()) {
                        result+=a[0];
                        
                    }
                }else{
                    if(a.find(-current_sum) != a.end()) {
                        result+=a[-current_sum];
                        
                    }
                }
            }
        }
        
        return result;
        
        
        
        
    }
    
    int main() {
        std::vector<int> v1{1,2};
        std::vector<int> v2{-2,-1};
        std::vector<int> v3{-1,2};
        std::vector<int> v4{0,2};
        
        auto result = fourSumCount(v1,v2,v3,v4);
        
        std::cout << result;
    }