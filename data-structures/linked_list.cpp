#include <iostream>



struct node {
    int val;
    node *next;
};

class MyLinkedList {
    public:
        MyLinkedList() {
            head = nullptr;
        }
        
        int get(int index) {
            
            node *current = head;
            int currentIndex = 0;
            while(currentIndex != index) {
                current = current->next;
                currentIndex +=1;
            }
            return current->val;
            
        }
        
        void addAtHead(int val) {
            node *tmp = new node;
            tmp->val = val;
            
            if (head == nullptr) {
                tmp->next = nullptr;
                head = tmp;
            }else{
                tmp->next = head;
                head = tmp;
            }
            
        }
        
        void addAtTail(int val) {
            
            if(head==nullptr) {
                addAtHead(val);
            }else {
                node *current = head;
                while(current->next != nullptr) {
                    current = current->next;
                }
                node *tmp = new node;
                tmp->val = val;
                current->next = tmp;
                tmp->next = nullptr;
            
            }
            
        }
        
        void addAtIndex(int index, int val) {
            int currentIndex = -1;
            if(currentIndex == index-1 && (head == nullptr)) {
                addAtHead(val);
            }
            
            node *currentNode = head;
            while(currentIndex != index-1 && currentNode->next != nullptr)
            {
               
                currentIndex += 1;
                if(currentIndex != index-1) {
                     currentNode = currentNode->next;
                }
            }
            
            if(currentIndex == index-1) {
                 node *tmp = new node;
            tmp->val = val;
            tmp->next = currentNode->next;
            currentNode->next = tmp;
            }
            else {
                std::cout << "Wrong index";
            }
           
            
        }
        
        void deleteAtIndex(int index) {
            int currentIndex = -1;
            
            
            if(head == nullptr) {
                std::cout << "nothing to delete";
                return;
            }
            
            node *currentNode = head;
            while(currentIndex != index-1 && currentNode->next != nullptr) {
                currentIndex += 1;
                
                if(currentIndex != index-1) {
                     currentNode = currentNode->next;
                }
            }
            
            
            if (currentIndex == -1) {
                head = nullptr;
                return;
            }
            
            if(currentIndex == index-1) {
               
                
                if(currentNode->next != nullptr){
                   
                     node *tmp = new node;
                    tmp = currentNode->next;
                    currentNode->next = tmp->next;
                    delete tmp;
                } else {
                    
                    currentNode = currentNode->next;
                }
                
                
                
            
                
            }
            else {
                std::cout << "Wrong index";
            }
            
            
        }
        
        void Display() {
            node *current = head;
            while(current != nullptr) {
                if(current->next != nullptr) {
                    std::cout << current->val << "->";
                } else {
                    std::cout << current->val;
                }
                
                current = current->next; 
            }
            
            std::cout << "\n";
            
        }
        
    private:
        node *head;
        
};

int main() {
    
    
    MyLinkedList *myLinkedList = new MyLinkedList();
    myLinkedList->addAtHead(1);
    myLinkedList->Display();
    
    
    
    myLinkedList->addAtTail(3);
    myLinkedList->Display();
    
    myLinkedList->addAtIndex(1, 2);    // linked list becomes 1->2->3
    myLinkedList->Display();
    
    int result =  myLinkedList->get(1);              // return 2
    std::cout << result << "\n";
    
    myLinkedList->deleteAtIndex(1);    // now the linked list is 1->3
    myLinkedList->Display();
    
    int result2 =  myLinkedList->get(1);              // return 3
    std::cout << result2 << "\n";
    
    
    return 0;
}