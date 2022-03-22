//pointer to derived class
#include<iostream>
using namespace std;

class base
{
  int i;
   public:
  void showbase(){
     cout<<"base\n";
  }
};
   
class derived: public base
{
  int j;
   public:
   void disp(){
    cout<<"hello";
    }
};

int main()
{
  base *ptr;
  base b;
  derived d;
  ptr = &b;
  ptr = &d;
  ptr->showbase();
  //ptr->disp();
  ((derived *)ptr)->disp();
return 0;
}
