//exception thown from outside the try block
#include<iostream>
using namespace std;

void Xtest(int test){
      cout<<"inside Xtest,test is: "<<test<<endl;
      if(test) 
           throw test;
      }

int main(){
        cout<<"start"<<endl;
  try{
      cout<<"inside try block"<<endl;
      Xtest(0);
      Xtest(1);
      Xtest(2);    
    }
  catch(int i){
     cout<<"Caught an exception --value is: ";
     cout<<i<<endl;
    }
     cout<<"end";
return 0;
}
