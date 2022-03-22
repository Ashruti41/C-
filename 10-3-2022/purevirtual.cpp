//pure virtual
#include<iostream>
using namespace std;

class Shape{
     protected:
     float x;
     public:
     void getdata()
     {
       cin>>x;
     }
     virtual float calculateArea()=0;
};

class square:public Shape{
     public:
     float calculateArea()
     {
       return x*x;
      }
};
int main()
{
 square s1;
 s1.getdata();
 cout<<s1.calculateArea();
 return 0;
}
