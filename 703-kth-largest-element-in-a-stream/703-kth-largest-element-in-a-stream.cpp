class KthLargest {
    // keep only k largest elements in descending order
    vector<int> container;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int &val: nums) {
             if(container.size() < k || container.empty() || val > container.back())
                insert(val);
        }
        
    }
    
    int add(int val) {
        if(container.size() < k  || container.empty() || val > container.back()) {
            insert(val);
        }
        
        return container.back();
    }
private:
    /*
    int approachOne(int val){
        container.push_back(val);
        int idx = container.size() - 1;
        while(idx > 0 && container[idx-1] > val) {
            container[idx] = container[idx-1];
            --idx;
        }
        container[idx] = val;
        return container[container.size() -k];
    }
    */
    void insert(int val) {
        if(container.size() == k) {
            
            
            container.pop_back();
            
        }
        container.push_back(val);
        int idx = container.size() - 1;
        while(idx > 0 && container[idx-1] < val) {
            container[idx] = container[idx-1];
            --idx;
        }
        container[idx] = val;
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */