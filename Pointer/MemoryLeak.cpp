#include <iostream>
using namespace std;

//Dynamic Memeory需要 手動 清掉。
//電腦無法辨識 Identfier = 0。


int main()
{
  int a = 10;
  int* b = new int[a];

  delete [] b;
  
  return 0;
}
