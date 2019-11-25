// 2019, 11/25, 19:30, by Queenie
// Class

#include <stdio.h>
#include <stdlib.h>
#include <list>

class Stack{

    private:
        enum {MAX=10}; // constant: Class
        ClassName items[MAX] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // item holder
        int top; // index

    public:
        Stack();
        bool isFull() const;
        bool isEmpty() const;
        bool pop(int& item);

};

bool Stack::pop(const ClassName & item){
    //...
};

    Stack st;
    className ii = 9;

int main() {

    st.isEmpty();
    st.pop(ii);
    return 0;

}