class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        result = []
        for i in range(left, right+1):
            if(self.selfDividing(i)):
                result.append(i)
        return result
    
    
    def selfDividing(self, num: int):
        no = str(num)
        
        status = True
        for x in no:
            
            if(int(x) == 0 or num%int(x) != 0):
                return False
            
        return status
            