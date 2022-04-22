class Solution {
public:
    double myPow(double x, int n1) {
        
        long long int n = n1;
        
        if(n<0){
            x=1/x;
            n = -n;
        }
        if(n==0) {
            return 1;
        }
        
        if(n==1){
            return x;
        }
        
        if(n%2==0){
            auto res =  myPow(x, n/2);
            return res * res;
        }
        else{
            return x * myPow(x,n-1);
        }
    }
};