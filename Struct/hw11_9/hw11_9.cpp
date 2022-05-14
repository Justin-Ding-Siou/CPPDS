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
   cout << "Date (12~1):";

   cin >> i;
   th=static_cast<month>(i);
   cout << th << "=" << a[th-1] << endl;

   system("pause");
   return 0;
}
