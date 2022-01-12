#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

int longestConsecutive(vector<int> &nums)
{

    if (nums.size() == 0)
    {
        return 0;
    }

    unordered_set<int> visited;

    for (auto &num : nums)
    {
        visited.insert(num);
    }

    int ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {

        if (visited.find(nums[i] - 1) == visited.end())
        {

            int nextElement = nums[i];
            int count = 1;
            while (visited.find(nextElement) != visited.end())
            {

                nextElement += 1;
            }

            ans = max(ans, nextElement - nums[i]);
        }
        else
        {
            continue;
        }
    }

    return ans;
}


int main()  {
    
    std::vector<int> nums {100,4,200,1,3,2};
    
    int result = longestConsecutive(nums);
    
    std::cout << result;
}