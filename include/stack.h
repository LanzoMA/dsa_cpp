class Stack
{
public:
    Stack(const int& stackSize);
    ~Stack();

    void push(const int& number);
    void pop();
    int peek();

private:
    const int stackSize;
    int* stack;
    int stackPointer = 0;
};
