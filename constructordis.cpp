//Constructor and Distructor
#include<iostream>
using namespace std;

class Distance{
    int feet,inch;
   public:
  
     Distance()
     {
     cout<<"Default"<<endl;
     }

     Distance(int x,int y){
       feet = x;
       inch = y;
       cout<<feet<<endl<<inch<<endl;
     }
     ~Distance(){
      cout<<"Destructor called"<<endl;
       }

 };

int main(){
 Distance d1(5,3);


 return 0;
}
