#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> v(10);      //create a vector of lenght 10
    int i;
    
    cout<<"Size = "<<v.size()<<endl;        //display original size of v
    
    for(i=0; i<10; i++)                    //assign the element of the vector some values
        v[i] = i+ 'a';

    cout<<"Current Contents: "<<endl;       //display contents of vector
  
    for(i=0; i<v.size(); i++)
      cout<<v[i]<<" "<<endl;

    cout<<"Expanding vector"<<endl;

    for(i=0; i<10; i++)
     v.push_back(i +10 +'a');

    cout<<"Size now = "<<v.size()<<endl;

    for(i=0; i<v.size(); i++)
      cout<<v[i]<<" "<<endl;

    for(i=0; i<v.size(); i++)
        v[i] = toupper(v[i]);

     cout<<"Modified Contents: "<<endl;
        for(i=0; i<v.size(); i++)
       cout<<v[i]<<" "<<endl;

      
   return 0;
}


