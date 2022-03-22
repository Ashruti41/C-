//derived class constructor
#include<iostream>
using namespace std;

class base1
{
 protected:
 int i;
 public:
 base1(int x)
{
  i=x;
  cout<<"Base default constructor";
}
  ~base1()
{
  cout<<"destructing\n";
}
};

class base2{
   protected:
   int k;
   public:
   base2(int x)
  {
    k=x;
    cout<<"\nderived paramerized constructor";
  }
   ~base2()
    {
     cout<<"destructing base1\n";
    }
};

class derived : public base1,public base2
{
    int j;
    public:
    derived(int x,int y,int z):base1(y),base2(z)
    {
     j=x;
     cout<<"\nconstructing derived\n";
    }

   ~derived()
   {
     cout<<"\ndestructing\n";
   }
void show()
  {
   cout<<i<<" "<<j<<" "<<k;
  }
};
int main()
{
  derived d2(3,4,5);
  d2.show();
return 0;
}
