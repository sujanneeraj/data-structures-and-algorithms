class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        
        rows, columns = len(accounts), len(accounts[0])
        max_wealth = -1
        for i in range(rows):
            current_wealth = 0
            for j in range(columns):
                current_wealth += accounts[i][j]
            if(current_wealth > max_wealth):
                max_wealth = current_wealth
        return max_wealth