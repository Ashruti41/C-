#include<iostream>
using namespace std;

int main()
{
int n1,n2,result;
cout<<"enter two numers:" <<endl;
cin>>n1>>n2;

try{
if(n2==0)
  throw n2;
else
{
result = n1/n2;
cout<<"\n the result is: "<<result;
}
}
catch(int x)
{
cout<<"\nCan't divided by: "<<x;
}

cout<<"\n End of program";
}

