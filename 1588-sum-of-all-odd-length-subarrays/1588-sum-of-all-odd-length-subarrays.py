class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        current_index = 0
        result = 0
        while(current_index < len(arr)):
            result += arr[current_index]
            
            next_index = current_index+2
            while(next_index < len(arr)):
                result += sum(arr[current_index: next_index+1])
                next_index+=2
            current_index+=1
        return result