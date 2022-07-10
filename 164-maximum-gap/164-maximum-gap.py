class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        nums = sorted(nums)
        if(len(nums) < 2):
            return 0
        max_difference = -1
        for i in range(1, len(nums)):
            difference = nums[i] - nums[i-1]
            if difference > max_difference:
                max_difference = difference
        return max_difference
        
        
        