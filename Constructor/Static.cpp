#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
//靜態函式強調唯一性。
//靜態函式 -- 可用來記錄建立和刪除物件幾次。

class A
{
private:
  static int count;
public:
  A() {A::count++; }
  ~A() {A::count--; }
  static int getCount()
  {
    return A::count;
  }
};

int A::count = 0;

int main()
{
  if (true) {
    A a1,a2,a3;
  } // 紀錄存活的物件。
  // A a1,a2,a3;，建立多少個物件。

  cout<< A::getCount() << "\n";
  return 0;
}
