#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int> v{10,20,30,40,50};
  auto it = v.insert(v.begin(),3);
   

     v.insert(it,2);          //add 2 at the begin before 3
   

    int i = 5;        //i for position where you adding

    it = v.insert(v.begin()+ i, 7);           

   cout<<"the vector elements are: "<<endl;
        v.erase(it);            //last enter iteration will  erase
  
   
   for(it = v.begin(); it != v.end(); ++it)
{
   cout<<*it<<endl;
}
return 0;
}
