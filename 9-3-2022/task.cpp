#include<iostream>
#include<string.h>
using namespace std;

class student
{
  int mark;
  char name[5]={"Ash"};
  
   
   public:
   int rollno;
 

   int getdata(int i,int k)
  {
    mark = i;
    //name = j;
    rollno = k;
   }
 
   void printdata()
  {
   cout<<"Name= "<<name<<endl;
   cout<<"Roll No.= "<<rollno<<endl;
   cout<<"Mark= "<<mark<<endl;
  }
};

int main()
{
   student s[3],*ptr;
   ptr = &s[0];
   ptr->getdata(60,1);
   ptr->printdata();
   
   ptr = &s[1];
   ptr->getdata(70,2);
   ptr->printdata();

   ptr = &s[2];
   ptr->getdata(80,3);
   ptr->printdata();
return 0;
}
  

