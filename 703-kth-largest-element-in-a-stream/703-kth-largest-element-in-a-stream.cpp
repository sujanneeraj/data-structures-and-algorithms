class KthLargest {
    vector<int> container;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        container = nums;
        sort(container.begin(), container.end());
        this->k = k;
    }
    
    int add(int val) {
        container.push_back(val);
        int idx = container.size() - 1;
        while(idx > 0 && container[idx-1] > val) {
            container[idx] = container[idx-1];
            --idx;
        }
        container[idx] = val;
        return container[container.size() -k];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */