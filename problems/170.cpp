
#include <map>
#include <iostream>

using namespace std;



class TwoSum {
public:
    TwoSum() {
       
        
    }
    
    void add(int number) {
        if(visited.find(number) != visited.end()) {
            visited[number] +=1;
        }
        else {
            visited[number] = 1;
        }
        
    }
    
    bool find(int value) {
        
        if(visited.empty()) {
            return false;
        }
        
         
        
       for (auto& it: visited) {
    // Do stuff
           long int x1 = it.first;
           int count = it.second;
           long int x2 = value - x1;
           
           if(x1 != x2) {
               if(visited.find(x2) != visited.end()) {
                   return true;
               }
           }
           else {
               if(count > 1) {
                   return true;
               }
           }
         
}
          return false;
        
        
        
    }
    
    private:
        
       std::map<long int, int> visited;
};

int main() {
    
    TwoSum* obj = new TwoSum();
    obj->add(1);
    obj->add(3);
    obj->add(4);
    bool param_2 = obj->find(4);
    std::cout << param_2;
    
    bool param_3 = obj->find(7);
    std::cout << param_3;
}