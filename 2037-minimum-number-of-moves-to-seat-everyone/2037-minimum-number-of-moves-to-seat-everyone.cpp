class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        
        int n = seats.size();
        int result = 0;
        for(int i = 0; i < n; i++) {
            int seatPosition = seats[i];
            int studentPosition = students[i];
            
            int offset = abs(studentPosition - seatPosition);
            result += offset;
            
        }
        
        return result;
        
    }
};