#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
// operator and overloading
// make program more clearer and easier to use

// this->n is the instance variable
// n is the local variable



class MyVector
{
  private:
    int n; //n dims
    double* m; //m dynamic array;
  public: //constructor ，建立初始化。
    MyVector(); //default constructors
    MyVector(int n, double v[]); //input constructors
    MyVector(const MyVector& v); //copy constructor
    ~MyVector();
    void print();
    bool isEqual(const MyVector& v);
};

//default constructors
MyVector::MyVector()
{
  n = 0;
  m = nullptr;

}
//input constructors
MyVector::MyVector(int dim,double v[])
{
  n = dim;
  m = new double[dim];

  for(int i = 0; i < dim; i++) {
    m[i] = v[i];
  }
}

MyVector::~MyVector()
{
  delete [] m; //delete new double[dim]
}
//deep copy constructor，prevent shallow copy
MyVector::MyVector(const MyVector& v)
{
  n = v.n;
  m = new double[n];
 for(int i = 0; i< n; i++){
   m[i] = v.m[i];
 }
}

void MyVector::print(){
  cout << "(";
  for(int i = 0; i<n-1; i++){
    cout << m[i] << ", ";
  }
  cout << m[n-1] << ")\n";
}

bool MyVector::isEqual(const MyVector& v)
//const MmyVector& v，指向原始的物件，且保持原物件的狀態 (const)
{
  if(n != v.n)
    return false;
  else
  {
    for(int i = 0; i < n; i++)
    {
      if(m[i] != v.m[i])
        return false;
    }
  }
  return true;
}


int main(){
  double d1[5] = {1,2,3,4,5};
  //MyVector a1(5, d1) -> {1,2,3,4,5}
  MyVector a1(5, d1);

  double d2[4] = {1,2,3,4};
  //MyVector a1(4, d2) -> {1,2,3,4}
  MyVector a2(4, d2);
  //複製與 MyVector a1(5, d1) 相同的Member function。
  MyVector a3(a1);

  cout << (a1.isEqual(a2) ? "Y" : "N");
  cout << "\n";
  cout << (a1.isEqual(a3) ? "Y" : "N");
  cout << "\n";

  return 0;
}
