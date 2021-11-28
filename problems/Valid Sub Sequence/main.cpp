#include <iostream>
#include <vector>

using namespace std;

bool isValidSubsequence(const vector<int> &array, const vector<int> &sequence) {
  // Write your code here.
	
	int j = 0;
	for (auto & num: array){
		if(num == sequence[j]) {
			j++;
			if (j == sequence.size()) {
				return true;
			}
		}
	}
  return false;
}


int main() {
    
    std::vector<int> array {5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence {22, 25, 6};
    
    bool result = isValidSubsequence(array, sequence);
    if (result == true) {
        std::cout << "TRUE";
    } else {
        std::cout << "FALSE";
    }
}