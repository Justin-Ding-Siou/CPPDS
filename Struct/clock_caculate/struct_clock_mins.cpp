// hw11_13,
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
void mius(mytime t[]);
int main(void)
{
   int i;
   mytime t[3]={{6,24,17.43f},{3,40,45.58f}};
   cout << setfill('0');
   mius(t);
   for(i=0;i<3;i++)
   {
      cout << "t[" << i << "]=" << setw(2) << t[i].hour << ":";
      cout << setw(2) << t[i].minite << ":";
      cout << setw(5) << t[i].second << endl;
   }
   system("pause");
   return 0;
}

void mius(mytime t[])
{
   t[2].hour=t[0].hour-t[1].hour;
   t[2].minite=t[0].minite-t[1].minite;
   while(t[2].minite<0)
   {
      t[2].hour--;
      t[2].minite+=60;
   }
   t[2].second=t[0].second-t[1].second;
   while(t[2].second<0)
   {
      t[2].minite--;
      t[2].second+=60;
   }
   return;
}

/* output---------------------------
t[0]=06:24:17.43
t[1]=03:40:45.58
t[2]=02:43:31.85
----------------------------------*/
