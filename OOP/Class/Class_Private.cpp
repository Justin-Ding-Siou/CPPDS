#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

class CWin
{
private:
  char id;
  int width;
  int height;
public:
  int area(void) {
      return width*height;
  }

  void show_area(void)
  {
    cout << "Window" << id << ", area=" << area() << endl;
  }

  int perimeter(void){
      return 2*(width + height);
  }

  void show_perimeter(void)
  {
    cout << "Window" << id << ", perimeter=" << perimeter() << endl;
  }

  void set_data(char i,int w,int h)
  {
    id=i;
    if(w > 0 && h > 0)
    {
      width=w;
      height=h;
    }
    else
      cout << "input error" << '\n';

  }

};


int main()
{
  CWin win1;

  win1.set_data('A',50,40);
  win1.show_area();
  win1.show_perimeter();


  return 0;
}
