

def twoNumberSumNaive(numbers, targetSum):
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
             if(numbers[i] + numbers[j] == targetSum):
                 return([numbers[i], numbers[j]])
    return  []
    
    
def twoNumberSumOptimized(numbers, targetSum):
    result = []
    alreadySeen = {}
    for number in numbers:
        if (targetSum - number) in alreadySeen:
            return [number, targetSum - number]
        else:
            alreadySeen[number] = 1
    return []



result = twoNumberSumNaive([3,5,-4, 8,11,1,-1,6], 10)
print(result)

result = twoNumberSumOptimized([3,5,-4, 8,11,1,-1,6], 10)
print(result)