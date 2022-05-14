// hw11_3,
#include <iostream>
#include <cstdlib>
using namespace std;
struct mydata
{
   float f;
   float c;
}temperature;
int main(void)
{
   char tem;
   do{
      cout << "(1)華氏->攝氏" << endl;
      cout << "(2)攝氏->華氏" << endl;
      cout << "請選擇(1)或(2):";
      cin.get(tem);
      cin.get();
   }while((tem>50)||(tem<49));

   if(tem=='1')
   {
      cout << "請輸入華氏溫度: ";
      cin  >> temperature.f;
   }
   else
   {
      cout << "請輸入攝氏溫度: ";
      cin  >> temperature.c;
   }
   cout << endl << "**** 輸出 ****" << endl;

   if(tem=='1')
   {
      temperature.c=(temperature.f*5.0/9)-(160/9.0);
      cout << "華氏 " << temperature.f << " 度=攝氏 ";
      cout << temperature.c << " 度" << endl;
   }
   else
   {
      temperature.f=(temperature.c*9/5.0)+32;
      cout << "攝氏 " << temperature.c << " 度=華氏 ";
      cout << temperature.f << " 度" << endl;
   }
   system("pause");
   return 0;
}

/* output-------------------------------
(1)華氏->攝氏
(2)攝氏->華氏
請選擇(1)或(2):2
請輸入攝氏溫度: 32

**** 輸出 ****
攝氏 32 度=華氏 89.6 度
--------------------------------------*/
