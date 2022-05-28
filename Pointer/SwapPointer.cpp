#include <iostream>
using namespace std;

void swapbyvalue(int x,int y);
void swapbyreference(int& x,int& y);
void swapbypoiter(int* x,int* y);


int main()
{

  int a = 10,b = 20;

  cout << "call by value" << endl;
  cout << a << " " << b << endl;
  swapbyvalue(a, b);
  cout << a << " " << b << endl;
  cout << endl;


  cout << a << " " << b << endl;
  cout << &a << endl;
  cout << "call by reference" << endl;
  swapbyreference(a,b);
  cout << a << " " << b << endl;
  cout << endl;

  cout << "call by pointer" << endl;
  int c = 25,d = 30;
  cout << c << " " << d << endl;
  swapbypoiter(&d, &e);
  cout << c << " " << d << endl;



  return 0;
}

// call by value，a = 10, b = 20
void swapbyvalue(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
}

// call by reference，a = 20, b = 10
// int& x = a，x = a 的別名
// int& y = b，y = b 的別名
void swapbyreference(int& x, int& y)
{
  cout << &x << endl;
  int temp = x;
  x = y;
  y = temp;
}

// call by pointer，d = 25, e = 30
// int* x = &d;
// int* y = &e;
void swapbypoiter(int* x, int* y)
{

  int temp = *x; //int *temp = x; same
  *x = *y; //x = y; same
  *y = temp; //y = temp; same

}
