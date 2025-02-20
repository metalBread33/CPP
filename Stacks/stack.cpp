#include <iostream>
#include<string>

class stack
{
private:
    /* data */
    int top;
    int array[5];

public:
    stack(/* args */);
    ~stack();
    bool isEmpty();
    bool isFull();
    void push(int number);
    int pop();
    void printStack();
    void peak(int slot);
    void change(int slot, int newNumber);
    int count();
};

stack::stack(/* args */)
{
    top=-1;
    for (int i = 0; i < 5 ;i++ )
    {
        array[i] = 0;
    }
}

stack::~stack()
{
}


bool stack::isEmpty() {
    return (this.top==-1);
}

bool stack::isFull() {
    return (this.top==4);
}

void stack::push(int number) {
    if (this.isFull()){
        std::cout << "Stack is full, please pop" << std::endl;
        return;
    }
    this.array[this.top] = number;
    ++this.top;
}

int stack::pop() {
    if (this.isEmpty()) {
        std::cout << "Stack is empty, please add a value" << std::endl;
        return;
    }
    int value = this->array[this->top]
    this.top--;
    return value;
}

void stack::printStack() {
    if(this->isEmpty()){
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    for (int i = 0; i < 5; i++){
        std::cout << "Item at " << i+1 << " slot is: " << this->array[i] << std::endl;
    }
}

void stack::peak(int slot) {
    std::cout << "The number at slot " << slot << " is: " << this->array[slot-1] << std::endl;
}

void stack::change(int slot, int newNumber) {
    int oldNumber = this->array[slot-1];
    this->array[slot-1] = newNumber;
    std::cout << "Changed number in slot " << slot << " from " << oldNumber << " to " << newNumber << std::endl;
}

int stack::count() {
    return this->top+1;
}