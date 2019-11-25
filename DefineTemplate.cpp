// 2019, 11/25, 19:30, by Queenie
// Template Func
// Template Class
// this file extension shall be .h

#include <stdio.h>
#include <stdlib.h>
#include <list>

// template <typename TypeVar>;
// 從以往的值變成型態作為值
// typename 為型別名稱
// 上述的 Type 為通用型態的指示元，是變數容器的名稱

#ifdefine STACK_H_
#define STACK_H_
template<typename TypeVar>
class Stack{

    private:
        enum {MAX=10}; // constant: Class
        TypeVar items[MAX] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // item holder
        int top; // index

    public:
        Stack();
        bool isFull() const;
        bool isEmpty() const;
        bool pop(int& item);

};

// 加入關鍵字
template <typename TypeVar>
bool Stack::isEmpty(){
    
    return top == 0;
    
};

// 加入關鍵字
template <typename TypeVar>
bool Stack::isFull(){
    
    return top == MAX;
    
};

// 加入關鍵字
template <typename TypeVar>
bool Stack::pop(const TypeVar& item){
    
    if(top > 0) 
    {
        item = items[--top];
        return true;
    }
    else
        return false;
    
};

    Stack st;

int main() {

    st.isEmpty();
    st.isFull();
    st.pop();
    return 0;

}

#endif
