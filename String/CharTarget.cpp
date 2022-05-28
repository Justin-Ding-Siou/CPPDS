#include <iostream>
using namespace std;

int main()
{
  char c = 0;
  while(cin >> c)
  {
    if(65 <= c && c <= 90)
      cout << (char)(c + 32) << " " << (int)(c + 32);
    else
      cout << c;
    cout << "\n";
  }

  return 0;
}
