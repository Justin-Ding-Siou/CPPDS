
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void func(struct mydata a);
struct mydata
{
   string id;
   string name;
   int score1;
   int score2;
   int score3;
   float score4;
} student[3]; // 一次輸入三個學生的成績


int main(void)
{
   int i,flag=0;
   string number;

   for(i=0;i<3;i++)  // Input data by array
   {
      cout << "number:";
      getline(cin,student[i].id);
      cout << "name:";
      getline(cin,student[i].name);
      cout << "midtern: ";
      cin >> student[i].score1;
      cout << "final:";
      cin >> student[i].score2 ;
      cout << "averge:";
      cin >> student[i].score3;
      cin.get();
      cout << endl;
   }

   cout << "Input:";
   getline(cin,number);
   for(i=0;i<3;i++) {
     if(number==student[i].id)
     {
        func(student[i]);
        flag=1;
     }
   }
   if(flag==0)
      cout << "Search !!" << endl;

   system("pause");
   return 0;
}
void func(struct mydata a)
{
   a.score4=a.score1*0.3+a.score2*0.3+a.score3*0.4;
   cout << "ID= " << a.id << "\t" << "name= " << a.name << "\t";
   cout << "Final score= " << a.score4 << endl << endl;
   return;
}

/* output----------------------------------------------
�п��J5�Ӧ��ƾ��ƪ��Ǹ�:95001
�ǥͩm�W:Tippi Hong
�������Z:89
�������Z:92
���ɦ��Z:84

�п��J5�Ӧ��ƾ��ƪ��Ǹ�:95003
�ǥͩm�W:Amy Wu
�������Z:95
�������Z:88
���ɦ��Z:87

�п��J5�Ӧ��ƾ��ƪ��Ǹ�:95002
�ǥͩm�W:Alice Wang
�������Z:75
�������Z:68
���ɦ��Z:79

���J���d�ߪ��Ǹ�:95003
�Ǹ�= 95003     �m�W= Amy Wu    �Ǵ����Z= 89.7
-----------------------------------------------------*/
