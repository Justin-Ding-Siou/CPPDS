#include <iostream>
using namespace std;


int main()
{
  int a = 10;
  int* ptr = &a;
  cout << "value of a " << a << endl;
  cout << "value of ptr " << ptr << endl;
  cout << "address of a  " << &a << endl;
  cout << "address of ptr " << &ptr << endl;
  cout << "value of the variable pointed by p = " << *ptr << endl;

  cout << endl;
  int b = 20;
  int* ptr2 = &b;
  cout << "value of the variable pointed by p2 = "<<* ptr2 << endl; //20
  *ptr2 = 5; //透過 ptr2，將改為 b = 5。
  cout << b << endl;
  b = 18; //將 b = 18
  cout << *ptr2 << endl;

  cout << endl;
  int c = 100;
  int* ptr3;
  int* ptr4;
  ptr3 = ptr4 = &c;
  cout << *ptr3 << endl; //100
  *ptr4 = 25;
  cout << *ptr3 << endl; //25
  (*ptr3)++; //26
  cout << c << endl;

  cout << endl;
  int* ptr10 = nullptr;//init  0、NULL、nullptr
  cout << "value of ptr10 = " << ptr10 << endl;
  cout << "address of ptr10 = " << &ptr10 << endl;
  cout << "the variable pointed by ptr10 = " << *ptr10 << endl; // run-time error

  cout << endl;



  return 0;
}
