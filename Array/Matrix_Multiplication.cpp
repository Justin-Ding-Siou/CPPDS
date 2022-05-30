// prog8_8, �ǻ��G���}�C
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
  //3*3 矩陣相乘
  int a[3][3] = {{3,2,1},{5,6,7},{2,4,6}};
  int b[3][2] = {{2,3},{3,4},{6,2}};
  int c[3][2] = {0};
  /*
    3 2 1   2 3
    5 6 7 * 3 4
    2 4 6   6 2
  */
  for(int i=0; i<3; i++) {
    for(int j=0; j<2; j++) {

      c[j][i] = a[i][j] * b[j][i];
      cout << c[j][i] << " ";
    }
  }

   system("pause");
   return 0;
}
