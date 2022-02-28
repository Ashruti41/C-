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
           hour = x / 60;
           min = x % 60;
          
         }
        void display(){
         cout<<"Hour: "<<hour <<"min: "<<min<<endl;
       }
  };

int main(){
 
   int x=90;
   Time T1;

   T1 = x;
   T1.display();
return 0;
}
  
