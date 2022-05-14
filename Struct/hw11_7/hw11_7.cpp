//hw11_7,
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
union data
{
   char grade;
   int score;
}a;
struct mydata
{
   string name;
   string id;
   char sex;
}employee;
int main(void)
{
   cout << "姓名:";
   getline(cin,employee.name);
   cout << "人事代號:";
   getline(cin,employee.id);   
   cout <<"性別 (1)男 (2)女:";
   cin.get(employee.sex);
   cin.get();
   if(employee.sex=='1')
   {
      cout << "服完兵役(y/n):";
      cin.get(a.grade);
   }
   else
   {
      cout <<"每分鐘中打速度:";
      cin >> a.score;
      cin.get();
   }

   cout << "**** Output ****" << endl;
   cout << "姓名 =" << employee.name << endl;
   cout << "人事代號:" << employee.id << endl;

   if(employee.sex=='1')
      cout << "兵役狀況:" << a.grade << endl;
   else
      cout << "中打速度:" << a.score << endl;

   system("pause");
   return 0;
}

/* output---------------------------
Input name:Tippi Hong
Input birthday(yy):72
Input birthday(mm):08
Input birthday(dd):24
Input major:Reading, Programing
Your sex is (1)Male (2)Female:2
每分鐘中打速度:85
**** Output ****
name=Tippi Hong
birthday:72/8/24
major=:Reading, Programing
中打速度:85
----------------------------------*/
