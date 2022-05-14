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
    cout << "student's name: ";
    getline(cin, student.name);
    cout<< "math's score: ";
    cin >> student.math;
    cout << "output: " << endl;
    cout << student.name << "'s math score is: " << student.math << endl;

    system("pause");
    return 0;
}
