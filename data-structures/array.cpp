#include <iostream>
#include <initializer_list>


template<typename T, size_t S>
class MyArray{
    public:
        MyArray(int size) {
           
        }
        
        int Size() const {
            return S;
        }
        
    private:
    T m_Data[S];
};


int main() {
    std::cout << "ARRAY DEMONSTRATION";
    
    int size = 10;
    MyArray<int, 10> data;
    
}