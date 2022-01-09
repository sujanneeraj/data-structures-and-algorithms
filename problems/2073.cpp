#include <iostream>
#include <vector>

using namespace std;

int bruteForce(vector<int> &tickets, int k) {
        int timeTaken = 0;
        while(tickets[k] != 0) {
            for(int i=0; i < tickets.size(); ++i) {
                if(tickets[i]!=0) {
                    tickets[i]-=1;
                    timeTaken += 1;
                    if(tickets[k] == 0) {
                        return timeTaken;
                    }
                    
                }
            }
        }
        return timeTaken;
    }
    
  int timeRequiredToBuy(vector<int>& tickets, int k) {
        return bruteForce(tickets, k);
        
    }    

int main() {
    std::vector<int> tickets {2,3,2};
    int k = 2;
    
    auto result = timeRequiredToBuy(tickets, k);
    
    std::cout << result;
    
}