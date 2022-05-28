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

  friend void show_member(CWin);

};

void show_member(CWin w)
{
  cout << "Window " << w.id << endl;
  cout << "Width " << w.width << endl;
  cout << "Height " << w.height << endl;
}


int main()
{
  CWin win1,win2;

  win1.set_data('A',50,40);
  win1.show_area();
  win1.show_perimeter();
  show_member(win1);
  cout << endl;

  win2.set_data('B',100,60);
  win2.show_area();
  win2.show_perimeter();
  show_member(win2);



  return 0;
}
