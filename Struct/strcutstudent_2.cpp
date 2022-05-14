#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct mydata //結構的定義
{
  string name;
  int math;
} student; //結構的宣告

int main(void)
{

    //計算記憶體的空間
    cout << "sizeof(student)=" << sizeof(student) << endl;

    system("pause");
    return 0;
}
