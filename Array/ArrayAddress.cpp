#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;
void func(int); //傳值

void funcaddress(int []); //複製陣列 b[4] 的位置

int main(void)
{
  int a=13;
  cout << "In main(),a = " << a << ",address = " << &a << endl;
  func(a); //將 main()的 a 複製到 func() 中。

  cout << endl;
  cout << "in main() " << endl;
  int b[4] = {20,8,3,6};
  for(int i = 0; i < 4; i++) {
    cout << "b [ " << i << "]= " << setw(2) << b[i];
    cout << ", address=" << &b[i] << endl;
  }
  funcaddress(b);



  return 0;
}

void func(int a)
{
  cout << "In func(),a= " << a << ",address=" << &a << endl;
}

void funcaddress(int c[]){

  cout << "In func(), " << endl;
  for(int i = 0; i < 4; i++) {
    cout << "b [ " << i << "]= " << setw(2) << c[i];
    cout << ", address=" << &c[i] << endl;
  }
}
