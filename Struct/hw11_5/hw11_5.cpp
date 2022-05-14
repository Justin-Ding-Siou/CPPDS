// hw11_5,
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void func(struct mydata a);
struct mydata
{
   string id;
   string name;
   int score1;
   int score2;
   int score3;
   float score4;
} student[3];
int main(void)
{
   int i,flag=0;
   string number;

   for(i=0;i<3;i++)  // Input data by array
   {
      cout << "請輸入5個位數整數的學號:";
      getline(cin,student[i].id);
      cout << "學生姓名:";
      getline(cin,student[i].name);
      cout << "期中成績:";
      cin >> student[i].score1;
      cout << "期末成績:";
      cin >> student[i].score2 ;
      cout << "平時成績:";
      cin >> student[i].score3;
      cin.get();
      cout << endl;
   }

   cout << "輸入欲查詢的學號:";
   getline(cin,number);
   for(i=0;i<3;i++)
      if(number==student[i].id)
      {
         func(student[i]);
         flag=1;
      }
   if(flag==0)
      cout << "無此資料!!" << endl;

   system("pause");
   return 0;
}
void func(struct mydata a)
{
   a.score4=a.score1*0.3+a.score2*0.3+a.score3*0.4;
   cout << "學號= " << a.id << "\t" << "姓名= " << a.name << "\t";
   cout << "學期成績= " << a.score4 << endl << endl;
   return;
}

/* output----------------------------------------------
請輸入5個位數整數的學號:95001
學生姓名:Tippi Hong
期中成績:89
期末成績:92
平時成績:84

請輸入5個位數整數的學號:95003
學生姓名:Amy Wu
期中成績:95
期末成績:88
平時成績:87

請輸入5個位數整數的學號:95002
學生姓名:Alice Wang
期中成績:75
期末成績:68
平時成績:79

輸入欲查詢的學號:95003
學號= 95003     姓名= Amy Wu    學期成績= 89.7
-----------------------------------------------------*/
