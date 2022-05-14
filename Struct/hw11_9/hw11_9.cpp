//hw11_9,
#include <iostream>
#include <cstdlib>
using namespace std;
enum month
{   January,February,March,April,May,June,July,
    August,September,October,November,December  }th;

int main(void)
{
   int i;
   string a[12]={"January","February","March","April",
                 "May","June","July","August","September",
                 "October","November","December"};
   cout << "請輸入欲查詢的月份(1~12):";
   cin >> i;
   th=static_cast<month>(i);
   cout << th << "月=" << a[th-1] << endl;

   system("pause");
   return 0;
}

/* output---------------------------
請輸入欲查詢的月份(1~12):6
6月=June
----------------------------------*/
