#include <iostream>
using namespace std;
//二維動態陣列

//int** array = new int*[r];
//讓每個陣列的值具有指標的特性。
//第一個指標指向 array
//而 array 每個值又指向動態記憶體生成的陣列數
// 如圖
//  array
//    |
//    V
//   [] -> [  ]
//   [] -> [     ]
//   [] -> [       ]



void print1D(int* arr, int n)
{
  for(int i = 0; i < n; i++)
  {
      cout << arr[i] << " ";
  }
  cout << endl;
}

void print(int** arr, int r)
{
  for(int i = 0; i < r; i++)
  {
    print1D(arr[i], i + 1);
  }
}


int main()
{
  int r = 3;
  int** array = new int*[r];
  for(int i = 0; i < r; i++)
  {
    array[i] = new int[i + 1];
    for(int j = 0; j <= i; j++) {
      array[i][j] = j+1;
    }
  }
  print(array, r);
  delete [] array;
  return 0;
}
