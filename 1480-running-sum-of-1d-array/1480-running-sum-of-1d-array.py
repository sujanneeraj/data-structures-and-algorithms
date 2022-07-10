class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        result = [nums[0]]
        
        for i in range(1, len(nums)):
            current_sum = nums[i] + result[i-1]
            result.append(current_sum)
        return result
        
        