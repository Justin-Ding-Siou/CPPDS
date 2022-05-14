// hw11_1,
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
int main(void)
{
   cout << "Student's ID:";
   getline(cin,student.id);
   cout << "Student's name:";
   getline(cin,student.name);
   cout << "期中成績:";
   cin  >> student.score1;
   cout << "期末成績:";
   cin  >> student.score2 ;
   cout << "平時成績:";
   cin  >> student.score3;
   cout << "*****Output******" << endl;
   cout << student.id << endl;
   cout << student.name << endl;
   cout << "期中成績為 " << student.score1 << endl;
   cout << "期末成績為 " << student.score2 << endl;
   cout << "平時成績為 " << student.score3 << endl;
   cout << "學期成績為 " << student.score1*0.3+
                            student.score2*0.3+
                            student.score3*0.4 << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
Student's ID:95001
Student's name:Tippi Hong
期中成績:89
期末成績:87
平時成績:96
*****Output******
95001
Tippi Hong
期中成績為 89
期末成績為 87
平時成績為 96
學期成績為 91.2
--------------------------------------*/
