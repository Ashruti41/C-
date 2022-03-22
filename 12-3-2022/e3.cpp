#include<iostream>
using namespace std;

int main()
{
    int a=1;

  try{
     try{
    
       throw a;
     }
  catch(int x)
    {
    cout<<"integer value"<<endl;
    throw x;
    }
 
}
  catch(int st)
   {
   cout<<"Char value"<<endl;
   }

  }
