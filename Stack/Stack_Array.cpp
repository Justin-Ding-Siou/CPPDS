#include<iostream>
#include<cstdlib>
using namespace std;

class StackArray {
private:
  int top;
  int capacity;
  int *stack;
  void DoubleCapacity();
public:
  StackArray():top(-1),capacity(1) {
    stack = new int[capacity];
  }
  void Push(int item);
  void Pop(); //void Pop(int item);

  bool IsEmpty();
  bool IsFull();

  int Top();
  int getSize();
};


void StackArray::DoubleCapacity() {
  capacity *= 2;
  int *newStack = new int[capacity];

  for(int i = 0; i < capacity/2; i++) {
    newStack[i] = stack[i];
  }

  delete [] stack;
  stack = newStack;
}


void StackArray::Push(int item) {
  if(IsFull()) {
    DoubleCapacity();
  }
  stack[++top] = item;
  // or
  // top  = top + 1;
  // stack[top] = item;
}

//void Pop(int item);
void StackArray::Pop() {
  if(IsEmpty()) {
    cout << "Stack is empty";
    return;
  }
  top--;
  
  //void Pop(int item); 時
  // top--;
  // item = stack[top];，丟給外部的 item。
  // or
  //stack[--top] = item;
}

bool StackArray::IsEmpty() {
  return (top== -1);
}

bool StackArray::IsFull() {

  return (top == capacity - 1);
}

int StackArray::Top() {
  if (IsEmpty()) {
      cout << "Stack is empty.\n";
      return -1;
    }
  return stack[top];
}

int StackArray::getSize() {
  return (top+1);
}

int main() {

  StackArray s;
  s.Pop();
  s.Push(14);
  s.Push(9);
  cout << "\ntop: " << s.Top() << "\nsize: " << s.getSize() << std::endl;

  s.Push(7);
  cout << "\ntop: " << s.Top() << "\nsize: " << s.getSize() << std::endl;

  s.Pop();
  s.Pop();
  cout << "\ntop: " << s.Top() << "\nsize: " << s.getSize() << std::endl;

  s.Pop();
  cout << "\ntop: " << s.Top() << "\nsize: " << s.getSize() << std::endl;

  return 0;

}
