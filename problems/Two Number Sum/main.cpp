#include <iostream>
#include <vector>
#include <map>

std::vector<int> twoNumberSum(const std::vector<int> &numbers, int targetSum) {
    
    std::map<int, int> alreadySeen;
    std::vector<int> result;
    
    for(const auto &num: numbers) {
        int secondNumber = targetSum - num;
        if (alreadySeen.count(secondNumber) == 1) {
            result.push_back(num);
            result.push_back(secondNumber);
            return result;
        }
        else {
            alreadySeen.insert(std::make_pair(num,1));
        }
    }
    
    return result;
    
}


int main() {
    
    std::vector<int> numbers {3,5,-4, 8,11,1,-1,6};
    int targetSum = 10;
    
    std::vector<int> result = twoNumberSum(numbers, targetSum);
    
    for(auto &num : result) {
        std::cout << num << "\t";
    }
    
    
    
}