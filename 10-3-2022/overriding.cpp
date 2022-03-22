//pointer to derived class function overriding
#include<iostream>
using namespace std;

class base
{
  
   public:
   int i;
  void show(){
     cout<<"\nbase= "<<i<<endl;
  }
};
   
class derived: public base
{
  
   public:
   int j;
   void show(){
    cout<<"\nhello= "<<j<<endl;
    }
};

int main()
{
  
  base b1;
  derived d1;
  base *ptr;
  ptr = &b1;
  cout<<"\nbase class pointer assign address of base class object";
  ptr->i=100;
  ptr->show();
  ptr=&d1;
  ptr->i=200;
  cout<<"\nbase class pointer assign address of derived class object";
  ptr->show();
  derived *dptr;
  dptr = &d1;
  cout<<"\nderived class pointer assign address of derived class object";
  dptr->j = 300;
  dptr->show();
return 0;
}
