class Queue
{
public:
    Queue(const int& queueSize);
    ~Queue();

    int getQueueSize();
    int getQueueLength();
    int getQueueFrontPointer();
    int getQueueBackPointer();

    void show();

    void enqueue(const int& number);
    void dequeue();
    int peek();

private:
    const int queueSize;
    int queueLength = 0;
    int* queue; 
    int queueFrontPointer = 0;
    int queueBackPointer = 0;
};
