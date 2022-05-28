#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

class CWin
{
public:
    char id;
    int width;
    int height;
    int area(void);
    int perimeter(void);
};

int CWin::area(void)
{
  return width*height;
}

int CWin::perimeter()
{
  return 2*(width + height);
}

int main()
{
  CWin win1,win2;

  win1.id='A';
  win1.width=50;
  win1.height=40;
  cout << "win1 " << endl;
  cout << "id " << win1.id << endl;
  cout << "width " << win1.width << endl;
  cout << "height " << win1.height << endl;
  cout << "Area " << win1.area() << endl;
  cout << "Perimeter " << win1.perimeter() << endl;

  cout << endl;
  win2.id='B';
  win2.width=60;
  win2.height=70;
  cout << "win2 " << endl;
  cout << "id " << win2.id << endl;
  cout << "width " << win2.width << endl;
  cout << "height " << win2.height << endl;
  cout << "Area " << win2.area() << endl;
  cout << "Perimeter " << win2.perimeter() << endl;


  cout << endl;
  cout << "sizeof() " << sizeof(win1) << endl;
  cout << "sizeof() " << sizeof(CWin) << endl;



  return 0;
}
