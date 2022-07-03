#include<iostream>
#include<cstdlib>
using namespace std;

class LinearQueueArray {
private:
  int capacity, front, rear;
  int *queue;
  void DoubleCapacity();
public:
  LinearQueueArray():capacity(5),front(-1) {
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

  int getCapacity();
};

void LinearQueueArray::DoubleCapacity() {
  capacity *= 2;
  int *newQueue = new int[capacity];

  int j = -1;
  for(int i = front+1; i <= rear; i++) {
    j++;
    newQueue[j] = queue[i];
  }
  front = -1;
  rear = j;
  delete [] queue;
  queue = newQueue;
}

void LinearQueueArray::Push(int item) {
  if (IsFull()) {
    DoubleCapacity();
  }
  queue[++rear] = item;
  // or
  // rear = rear + 1;
  // queue[rear] = item;
}

//void Pop(int item); 時
void LinearQueueArray::Pop(){

    if (IsEmpty()) {
        std::cout << "Queue is empty.\n";
        return;
    }
    front++;
    // void Pop(int item); 時
    // front = front + 1;
    // item = queue[front];
}


bool LinearQueueArray::IsFull() {

  return (rear+1 == capacity);
}

bool LinearQueueArray::IsEmpty() {
  return (front == rear);
}


int LinearQueueArray::getFront() {
  if (IsEmpty()) {
    cout << "Queue is empty.\n";
    return -1;
  }

  return queue[front+1];
}

int LinearQueueArray::getRear() {
  if (IsEmpty()) {
    cout << "Queue is empty.\n";
    return -1;
  }

  return queue[rear];
}

int LinearQueueArray::getSize() {
  return (rear - front);
}

int LinearQueueArray::getCapacity(){

    return capacity;
}

void printSequentialQueue (LinearQueueArray queue){
    cout << "front: " << queue.getFront()
    << "    rear: " << queue.getRear() << "\n"
    << "capacity: " << queue.getCapacity()
    << "  number of elements: " << queue.getSize() << "\n\n";
}

int main(){

    LinearQueueArray q;
    if (q.IsEmpty()) {
        cout << "Queue is empty.\n\n";
    }
    q.Push(24);
    cout << "After push 24: \n";
    printSequentialQueue(q);
    q.Push(8);
    q.Push(23);
    cout << "After push 8, 23: \n";
    printSequentialQueue(q);
    q.Pop();
    cout << "After pop 24: \n";
    printSequentialQueue(q);
    q.Push(13);
    cout << "After push 13: \n";
    printSequentialQueue(q);
    q.Pop();
    cout << "After pop 8: \n";
    printSequentialQueue(q);
    q.Push(35);
    cout << "After push 35: \n";
    printSequentialQueue(q);
    q.Push(9);
    cout << "After push 9: \n";
    printSequentialQueue(q);

    return 0;
}
