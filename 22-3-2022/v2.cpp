//iterator v.begin() and v.end()

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(10);
    int i=0,p;

    p = v.begin();
    
  
    for(i=0; i<v.end(); i++){
       
    cout<<p<<endl;
}

  
  return 0;
}
