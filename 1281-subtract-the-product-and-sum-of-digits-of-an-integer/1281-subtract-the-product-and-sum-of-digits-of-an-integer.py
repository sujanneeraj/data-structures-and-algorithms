class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        
        product = 1
        sum_numbers = 0;
        
        num = str(n)
        
        for x in num:
            product *= int(x)
            sum_numbers += int(x)
            
        return product - sum_numbers