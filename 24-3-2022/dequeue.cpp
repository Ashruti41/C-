#include<iostream>
#include<deque>
using namespace std;




int main()
{
   deque<int> dq{3,2,5,7,23,7,1};
   

  for(auto it = dq.begin(); it!=dq.end(); ++it)
     cout<<'\t'<<*it;
int chunckArray(my_array,chunk_size)
{
  int index =0;
  int arraylength=my_array.length;
  int temparray =[];

  for(index=0; index<7; index+=chunk_size){
    mychunk = my_array.slice(index,index+chunk_size);
   temparray.push(mychunk);
}
return temparray;
}
 
  int result = chunkArray([3,2,5,7,23,7,1],3);
  
return 0;
}
