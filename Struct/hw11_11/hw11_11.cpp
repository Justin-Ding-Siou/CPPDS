// hw11_11,
#include <iostream>
#include <cstdlib>
using namespace std;
enum week
{   Monday,Tuesday,Wednesday,Thuresday,
    Friday,Saturday,Sunday  }seven;
int main(void)
{
   int i;
   string a[7]={"Monday","Tuesday","Wednesday",
                  "Thuresday","Friday","Saturday","Sunday"};
   cout << "請輸入1~7以顯示星期:";
   cin >> i;
   seven=static_cast<week>(i);
      cout << "星期" << seven << "=" << a[seven-1] << endl;

   system("pause");
   return 0;
}

/* output---------------------------
請輸入1~7以顯示星期:5
星期5=Friday
----------------------------------*/
