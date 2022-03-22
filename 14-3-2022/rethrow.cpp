#include<iostream>
using namespace std;

void Demo()throw(int,double)
{
    double a=1.5;
    if(a==1)
       throw a;
    else if(a==2)
       throw'A';
    else if(a==1.5)
       throw 4.5;
}
int main()
{
  try
 {
    Demo();
  }
  catch(double n)
  {
     cout<<"Exception caught.";
  }
     cout<<"\n End of the program";
}

