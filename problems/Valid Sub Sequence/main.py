def isValidSubsequence(array, sequence):
    # Write your code here.
    i = 0
    j = 0
    for number in array:
        if number == sequence[j]:
            j += 1
            if j == len(sequence):
    	        return True
    return False
        
        
array = [5, 1, 22, 25, 6, -1, 8, 10]
sequence = [22, 25, 6]


print(isValidSubsequence(array, sequence))