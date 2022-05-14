#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct mydata //結構的定義
{
  string name;
  int math;
} x; //結構的宣告

int main(void)
{
  struct mydata y={"Lily",18};
  x=y;
  cout << x.name << "'s math score is: " << x.math << endl;
  cout << y.name << "'s math score is: " << y.math << endl;


    system("pause");
    return 0;
}
