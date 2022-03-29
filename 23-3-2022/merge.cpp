#include<iostream>
#include<list>
using namespace std;
int main()
{

   list<int> lst1{3,6,17,15,13};
list<int>lst2{15,6,12,9,1};
    int i;
list<int>::iterator p =lst1.begin();
cout<<"Sorting: "<<endl;
   lst1.sort();
   p = lst1.begin();
   while(p!= lst1.end()){
      cout<<*p<<" ";
        p++;
      }
cout<<endl;
lst2.sort();
   p = lst2.begin();
   while(p!= lst2.end()){
      cout<<*p<<" ";
        p++;
      }
cout<<"\nmerge:"<<endl;

lst1.merge(lst2);

for(auto it=lst1.begin(); it!=lst1.end(); ++it)
  cout<<*it<<" ";
return 0;
}
