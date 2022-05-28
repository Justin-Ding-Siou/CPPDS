// 氣溫轉換器
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
      cout << "(1)C -> F" << endl;
      cout << "(2)F -> C" << endl;
      cout << "Chose (1) or (2):";
      cin.get(tem);
      cin.get();
   }while((tem>50)||(tem<49));

   if(tem=='1')
   {
      cout << "F temperature: ";
      cin  >> temperature.f;
   }
   else
   {
      cout << "C temperature: ";
      cin  >> temperature.c;
   }
   cout << endl << "**** output ****" << endl;

   if(tem=='1')
   {
      temperature.c=(temperature.f*5.0/9)-(160/9.0);
      cout << "F " << temperature.f << " =  ";
      cout << temperature.c << "  " << endl;
   }
   else
   {
      temperature.f=(temperature.c*9/5.0)+32;
      cout << "C" << temperature.c << " =  ";
      cout << temperature.f << " " << endl;
   }
   system("pause");
   return 0;
}
