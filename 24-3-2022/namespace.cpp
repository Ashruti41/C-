#include<iostream>
using namespace std;
namespace CounterNameSpace{
        
             int upperbound;
             int lowerbound;
      
      class counter{
         int count;
            public:
              counter(int n){
                 if(n<=upperbound) 
                          count = n;
                 else
                      count = upperbound;
                }
         void reset(int n){
            if(n<=upperbound)
              count = n;
         }

        int run(){
           if(count>lowerbound)
             return count--;
           else
             return lowerbound;
         }
      };
}
using namespace CounterNameSpace;
int main()
{
   upperbound = 100;
   lowerbound = 0;
   counter obj1(10);
   int i;
  do{
     i= obj1.run();
     cout<<i<<" ";
   }while(i >lowerbound);

   cout<<endl;

   counter obj2(20);
  
   do{
     i= obj2.run();
     cout<<i<<" ";
   }while(i >lowerbound);
    cout<<endl;

   obj2.reset(100);
   lowerbound = 90;
    do{
     i= obj2.run();
     cout<<i<<" ";
   }while(i >lowerbound);
    cout<<endl;
return 0;
}
