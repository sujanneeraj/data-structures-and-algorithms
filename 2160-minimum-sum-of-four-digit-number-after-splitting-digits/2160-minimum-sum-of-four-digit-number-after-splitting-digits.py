class Solution:
    def minimumSum(self, num: int) -> int:
        
        num = sorted(str(num))
        
        a = num[0] + num[2]
        b = num[1] + num[3]
        
        return int(a) + int(b)
        
                
        