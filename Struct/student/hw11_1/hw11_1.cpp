// 學生結算成績系統
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct mydata
{
  string id;
  string name;
  int score1;
  int score2;
  int score3;
}student;
// struct 的好處在於，可讓不同的型別儲存在同一個類型中。
int main(void)
{
   cout << "Student's ID:";
   getline(cin,student.id);
   cout << "Student's name:";
   getline(cin,student.name);
   cout << "midtern:";
   cin  >> student.score1;
   cout << "final:";
   cin  >> student.score2 ;
   cout << "normal class:";
   cin  >> student.score3;
   cout << "*****Output******" << endl;
   cout << student.id << endl;
   cout << student.name << endl;
   cout << "midtern:" << student.score1 << endl;
   cout << "final:" << student.score2 << endl;
   cout <<  "averge:" << student.score3 << endl;
   cout << "final score:" << student.score1*0.3+
                            student.score2*0.3+
                            student.score3*0.4 << endl;

   system("pause");
   return 0;
}
