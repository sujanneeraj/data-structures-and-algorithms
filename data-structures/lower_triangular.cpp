#include <iostream>

class LowerTriangular
{
  private:
    int *A;  
    int n;
public:
    LowerTriangular()
    {
        n =2;
        A = new int[2*(2+1)/2];
    }
    
    LowerTriangular(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    
    ~LowerTriangular()
    {
        delete []A;
    }
    
    void Set(int i, int j, int x){
        if(i>=j) {
            this->A[i * (i-1)/2 + j -1] = x;
        }
    }
    
    int Get(int i, int j){
        if(i>=j) {
            return this->A[i*(i-1)/2 + j -1];
        }
        return 0;
    }
    
    void Display() {
        for(int i=1; i<n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i==j) {
                    std::cout << A[i*(i-1)/2 + j -1] << " "; 
                }
                else {
                    std::cout << "0 ";
                }
            }
            std::cout << "\n";
        }
    }
    
    int GetDimensions()
    {
        return n;
    }
};


int main() {
    
    int d;
    std::cout << "Enter Dimensions";
    
    std::cin >> d;
    
    LowerTriangular lm(d);
    
    int x;
    std::cout << "Enter All Elements";
    for(int i=1; i<=d;i++)
    {
        for(int j=1; j<=d;j++)
        {
            std::cin>> x;
            lm.Set(i,j,x);
        }
    }
    
    lm.Display();
    
}