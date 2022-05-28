#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

class MyVector
{
  private:
    int n;
    int* m;
  public: //constructor ，建立初始化。
    MyVector(); //default constructors
    MyVector(int dim, int value=0); //constructors
    void print();
};


MyVector::MyVector()
{
  n = 0;
  m = nullptr;

}

MyVector::MyVector(int dim,int value)
{
  n = dim;
  m = new int[n];
  for(int i = 0; i<n; i++) {
    m[i] = value;
  }

}

void MyVector::print(){
  cout << "(";
  for(int i = 0; i<n-1; i++){
    cout << m[i] << ", ";
  }
  cout << m[n-1] << ")\n";
}


int main(){
  MyVector v1(1);
  MyVector v2(3,8);
  v1.print();
  v2.print();

  return 0;
}
