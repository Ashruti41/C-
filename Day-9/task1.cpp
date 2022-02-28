//basic type to class type conversion using costructure

#include<iostream>
using namespace std;

class Time{

        float hour, min;
     
        public:
        Time(){
           cout<<"Default\n"<<endl;
         }
        Time(int x){
           cout<< "inside the Time param\n";
           hour = x;
           min = (x-0.73)*100;
          
         }
        void display(){
         cout<<"Hour: "<<hour <<"min: "<<min<<endl;
       }
         void operator=(int x){
           cout<< "inside the Time param\n";
           hour = x;
           min = (x-0.73)*100;
         }
  };

int main(){
 
   float x;
   Time T1(1.27);

   //T1 = x;
   T1.display();
return 0;
}
