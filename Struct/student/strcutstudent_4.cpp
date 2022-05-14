#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct mydata //結構的定義
{
  string name;
  int math;
} student={"Steve",74}; //結構的宣告

int main(void)
{
    
    cout << student.name << "'s math score is: " << student.math << endl;

    system("pause");
    return 0;
}
