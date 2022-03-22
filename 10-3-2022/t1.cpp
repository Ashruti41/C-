#include<iostream>
using namespace std;

class base{
   public:
   virtual void function()
   {
     cout<<"base virtual"<<endl;
   }
};

class der1: public base
{
   public:
   void function()
   {
    cout<<"derived virtual"<<endl;
   }
};

class der2: public base
{
   public:
   void display(){
//cout<<"hi";
   }
};

int main()
{
   der1 d1;
   der2 d2;
   d2.function();
return 0;
}
