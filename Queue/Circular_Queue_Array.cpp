#include<iostream>
#include<cstdlib>
using namespace std;

class CircularQueueArray {
private:
  int capacity, front, rear;
  int *queue;
  void DoubleCapacity();
public:
  CircularQueueArray():capacity(5),front(-1) {
    queue = new int[capacity];
  };
  void Push(int item);
  //void Pop(int item); 時
  void Pop();

  bool IsFull();
  bool IsEmpty();

  int getFront();
  int getRear();

  int getSize();

};

void QueueArrayCircular::DoubleCapacity(){

    int *newQueue = new int[capacity*2];

    int j = front, size = getSize();
    for (int i = 1; i <= size; i++) {
        newQueue[i] = queue[++j % capacity];    // j 要先加一, 因為 front 沒有東西
    }

    rear = getSize();   // 要在更改 capacity 之前抓住 back
    front = 0;          // 改變 front 要在 getSize() 之後
    capacity *= 2;

    delete [] queue;
    queue = newQueue;
}

void QueueArrayCircular::Push(int item) {

}

void QueueArrayCircular::Pop() {

}

bool QueueArrayCircular::IsFull() {

}

bool QueueArrayCircular::IsEmpty() {

}

int QueueArrayCircular::getFront() {

}

int QueueArrayCircular::getRear() {

}

int QueueArrayCircular::getSize() {

}
