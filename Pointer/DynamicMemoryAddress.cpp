#include <iostream>
using namespace std;

double fib(int n)
{
  if(n==1)
    return 1;
  else if(n==2)
    return 1;

  double* fib = new double[n];
  fib[0] = 1;
  fib[1] = 1;
  for(int i = 2; i < n; i++)
    fib[i] = fib[i - 1] + fib[i - 2];
  double result = fib[n - 1];
  delete[] fib;
  cout << result  << endl;
  return result;
}

int main()
{
  fib(10);
  return 0;
}
