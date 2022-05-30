#include <iostream>
using namespace std;

//在陣列中
//透過 ++、--，指標具有 "移動" 的能力
void insertionSort(int array[], const int n);

int main()
{
  double a[3] = {10.5, 11.5, 12.5};
  double* b = &a[0];
  cout << *b << " " << b << endl;
  b = b + 2;
  cout << *b << " " << b << endl;
  b--;
  cout << *b << " " << b << endl;


  int x[3] = {1, 2, 3};

  for(int i = 0;i < 3; i++){
    cout << x[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < 3; i++){
    cout << *(x + i) << " ";
  }


  cout << "add + 3 to any array's variable " << endl;

  int c[5] = {0};
  for(int i = 0; i < 5; i++)
    cin >> c[i];

  int* p = c;
  for(int i = 0; i < 5; i++){
    *p += 3;
    p++;
  }

  for(int i = 0; i < 5; i++){
    cout << c[i] << " ";
  }

  cout << " Insertion Sort  " << endl;


  return 0;
}

//insertionSort 會用到指標
void insertionSort(int array[], const int n) {
  if(n > 1) {
    //array + 1，指向下一層。
    insertionSort(array + 1, n - 1);
    int num1 = array[0];
    int i = 1;
    for(; i<n; i++) {
      if(array[i] < num1)
        array[i - 1] = array[i];
      else
        break;
    }
    array[i - 1] = num1;
  }
}
