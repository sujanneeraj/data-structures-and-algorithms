#include <iostream>

struct Matrix
{
    int A[10];
    int n;
};


void Set(struct Matrix *m, int i, int j, int x) {
    if(i==j) {
        m->A[i-1] = x;
    }
}

int Get(struct Matrix m, int i, int j) {
    if(i==j) {
        return m.A[i-1];
    }
    else {
        return 0;
    }
}

void Display(struct Matrix m)
{
    int i,j;
    for(i=1; i <= m.n; i++) {
        for(j=1; j <= m.n; j++) {
            if(i==j) {
                std::cout << m.A[i-1] << " ";
            }
            else{
                std::cout << "0 ";
            }
            
        }
        std::cout << "\n";
    }
}



class Diagonal
{
  private:
    int *A;  
    int n;
public:
    Diagonal()
    {
        n =2;
        A = new int[2];
    }
    
    Diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }
    
    ~Diagonal()
    {
        delete []A;
    }
    
    void Set(int i, int j, int x){
        if(i==j) {
            this->A[i-1] = x;
        }
    }
    
    int Get(int i, int j){
        if(i==j) {
            return this->A[i-1];
        }
        return 0;
    }
    
    void Display() {
        for(int i=0; i<n; i++) {
            for(int j = 0; j < n; j++) {
                if(i==j) {
                    std::cout << A[i] << " "; 
                }
                else {
                    std::cout << "0 ";
                }
            }
            std::cout << "\n";
        }
    }
};

int main()
{
    
    struct Matrix m;
    m.n = 4;
    
    Set(&m, 1,1,5);
    Set(&m, 2,2,8);
    Set(&m, 3,3,9);
    Set(&m, 4,4,12);
    
    Display(m);
    
    
    Diagonal d(4);
    
    d.Set(1,1,5);
    d.Set(2,2,8);
    d.Set(3,3,9);
    d.Set(4,4,12);
    
    d.Display();
    return 0;
}