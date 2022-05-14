#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;


int main(void)
{
  //type definition，定義資料型態
  typedef float temper;
  temper f,c;
  cout << "Input :";
  cin >> c;
  f = (float)(9.0/5.0)*c + 32;
  cout << c << "c is equal to ";
  cout << f << "f degrees" << endl;
   


    system("pause");
    return 0;
}
