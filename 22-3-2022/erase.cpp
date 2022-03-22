#include<iostream>
#include<vector>
using namespace std;

int main()
{

   vector<int>v{10,20,30,40};
   vector<int>::iterator it1,it2;

   it1 = v.begin();
   it2 = v.end();

   it2--;
   it2--;

   v.erase(it1,it2);

   for(auto it=v.begin(); it!=v.end(); ++it)
   {
       cout<<" "<<*it<<endl;
   }
}
