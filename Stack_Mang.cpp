#include <iostream>
#include <iterator>

using namespace std;

class Stack{
private:
    int sp;
    int *st;
    int MaxSize;
public:
    Stack();
    void Create(int);
    bool isFull();
    bool isEmpty();
    int Push(int);
    int Pop();
    int getTop();
    void toString();
};

Stack:: Stack(){
    sp = -1;
    st = NULL;
}

void Stack::Create(int n){
    st = new int[n];
    MaxSize = n;
}

int Stack::getTop(){
    return sp;
}

bool Stack::isEmpty(){
    if(sp == -1)
        return true;

    return false;
}

bool Stack::isFull(){
    if (sp == MaxSize - 1)
        return true;

    return false;
}

int Stack::Push(int data){
    if(!isFull()){
        sp++;
        st[sp] = data;
        return 1;
    }
    return 0;
}

int Stack::Pop(){
    if(!isEmpty()){
        int value = st[sp];
        sp--;
        return value;
    }
    return -1;
}

void Stack::toString(){
    for(int i = 0; i <= sp; i++){
        cout<<st[i];
    }
    cout<<"\n";
}

int main(){
    Stack mystack;
    mystack.Create(4);
    mystack.Push(5);
    mystack.Push(2);
    mystack.Push(1);

    mystack.toString();
    mystack.Pop();

    return 0;
}
