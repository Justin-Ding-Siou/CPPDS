//struct 中，typedef的應用
// typedef 的 lifecycle 與 一般變數相同。
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
typedef struct
{
   int hour;
   int minite;
   float second;
} mytime;

void subs(mytime t[]);

int main(void)
{
   int i;
   mytime t[3]={{6,24,45.58},{3,40,17.43}};

   cout << setfill('0');
   subs(t);
   for(i=0;i<3;i++)
   {
      cout << "t[" << i << "]=" << setw(2) << t[i].hour << ":";
      cout << setw(2) << t[i].minite << ":";
      cout << setw(5) << t[i].second << endl;
   }

   system("pause");
   return 0;
}

void subs(mytime t[])
{
   int count2=0,count3=0; //存放分數、秒數的近位值
   t[2].second=t[0].second+t[1].second;
   while(t[2].second>=60)  //超過60秒時，進位
   {
      t[2].second-=60; //清空
      count3++; //進位加一
   }

   t[2].minite=t[0].minite+t[1].minite+count3;
   while(t[2].minite>=60) //超過60分時，進位
   {
      t[2].minite-=60; //清空
      count2++;  //進位加一
   }

   t[2].hour=t[0].hour+t[1].hour+count2;
   return;
}
