class SeatManager1 {
    vector<bool> unreserved;
public:
    SeatManager1(int n) {
        unreserved.resize(n, true);
    }
    
    int reserve() {
        for(int i =0; i < unreserved.size();++i){
            if(unreserved[i]) {
                unreserved[i] = false;
                return i+1;
            }
        }
        
        return -1;
    }
    
    void unreserve(int seatNumber) {
        unreserved[seatNumber-1] = true;
    }
};


class SeatManager {
    priority_queue<int, vector<int>, greater<int>> unreserved;
public:
    SeatManager(int n) {
        for(int i = 1; i <=n; ++i) {
            unreserved.push(i);
        }
    }
    
    int reserve() {
        assert(!unreserved.empty());
       int result = unreserved.top();
        unreserved.pop();
        
        return result;
    }
    
    void unreserve(int seatNumber) {
        unreserved.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */