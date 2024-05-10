#include "stack.h"

#include <iostream>

Stack::Stack(const int& stackSize)
    : stackSize(stackSize)
{
    int* stackValue = new int[stackSize];
    stack = stackValue;
}

Stack::~Stack() { }

void Stack::push(const int& number) {
    if (stackPointer >= stackSize) {
        std::cout << "Stack is full.\n";
        return;
    }

    stack[stackPointer] = number;
    stackPointer++;
}

void Stack::pop() {
    // std::cout << "Popped value: " << stack[stackPointer] << '\n';
    stackPointer--;
}

int Stack::peek() {
    return stack[stackPointer-1];
}
