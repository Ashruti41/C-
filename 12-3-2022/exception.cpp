#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"\nEnter 2nd number: ";
    cin>>n2;

 try{
     if(n2!=n1){
     float div=(float)n1/n2;
     if(div<0)
     throw 'e';
     cout<<"n1/n2= "<<div;
    }

 else
    throw n2;
   }

 catch(int e)
   {
     cout<<"Division by zero"<<endl;
   }
 catch(char st)
 {
   cout<<"Exception:Division is less than 1"<<endl;
  }
 catch(...)
 {
  cout<<"unknown"<<endl;
 }
}


