// 了解內容
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
   cout << "�������Z:";
   cin  >> student.score1;
   cout << "�������Z:";
   cin  >> student.score2 ;
   cout << "���ɦ��Z:";
   cin  >> student.score3;
   cout << "*****Output******" << endl;
   cout << student.id << endl;
   cout << student.name << endl;
   cout << "�������Z�� " << student.score1 << endl;
   cout << "�������Z�� " << student.score2 << endl;
   cout << "���ɦ��Z�� " << student.score3 << endl;
   cout << "�Ǵ����Z�� " << student.score1*0.3+
                            student.score2*0.3+
                            student.score3*0.4 << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
Student's ID:95001
Student's name:Tippi Hong
�������Z:89
�������Z:87
���ɦ��Z:96
*****Output******
95001
Tippi Hong
�������Z�� 89
�������Z�� 87
���ɦ��Z�� 96
�Ǵ����Z�� 91.2
--------------------------------------*/
