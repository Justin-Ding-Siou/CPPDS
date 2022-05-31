#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
  int A[]={48,75,30,17,62};

  int i,min=A[0],max=A[0];

  int length = sizeof(A)/sizeof(int);
  cout << "element in array A are";

  for(int i=0; i<length; i++) {
    cout << A[i] << " ";

    if(A[i] >  max)
      max = A[i];

    if(A[i] < min)
      min = A[i];
  }
  cout << "Max is " << max << endl;
  cout << "min is " << min << endl;

  return 0;

}
