#include "queue.h"

#include <iostream>

Queue::Queue(const int& queueSize) : queueSize(queueSize) { queue = new int[queueSize]; }
Queue::~Queue() { }

int Queue::getQueueSize() { return queueSize; }
int Queue::getQueueLength() { return queueLength; }
int Queue::getQueueFrontPointer() { return queueFrontPointer; }
int Queue::getQueueBackPointer() { return queueBackPointer; }

void Queue::show() {
    std::cout << "Queue: ";

    for (int index = queueFrontPointer; index < queueBackPointer; index++) {
        std::cout << queue[index] << ' ';
    }

    std::cout << '\n';
}

void Queue::enqueue(const int& number) {
    std::cout << "Enqueuing number: " << number << '\n';

    if (queueBackPointer >= queueSize) {
        std::cout << "Queue is full.\n";
        return;
    }

    queue[queueBackPointer] = number;
    queueBackPointer++;
    queueLength++;
}

void Queue::dequeue() {
    // std::cout << "Dequeuing number: " << queue[queueBackPointer] << '\n';

    if (queueFrontPointer == queueBackPointer) {
        std::cout << "Queue is empty.\n";
        return;
    }
    
    queueFrontPointer++;
    queueLength--;
}

int Queue::peek() {
    return queue[queueFrontPointer];
}

