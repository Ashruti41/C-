// Friend function
#include<iostream>
using namespace std;

class XYZ;

class ABC
{
  int a;
  public:
      void setData()
      {
         a=10;
      }
      friend int sum(ABC,XYZ);
};

class XYZ
{
  int b;
  public:
    void setData()
    {
      b=20;
    }
    friend int sum(ABC,XYZ);
};

int sum(ABC o1,XYZ o2)
{
  return (o1.a+o2.b);
}

int main()
{
  ABC obj1;
  XYZ obj2;
  obj1.setData();
  obj2.setData();
  cout<<"Answer:"<<sum(obj1,obj2);
  return 0;
}
