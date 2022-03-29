#include<iostream>
#include<map>
using namespace std;

int main()
{
       map<char, int>m;
       int i;

//put pairs into map
      for(i=0; i<26; i++){
         m.insert(pair<char,int>(('A'|'a')+i,(65|97)+i));
         }

      int c;
      char ch;
      cout<<"Enter key(an uppercase letter): ";
      cin>>ch;
      cin>>c;
      map<char,int>::iterator p,q;

       p = m.find(ch);
       q = m.find(c);
       if(p!=m.end()){
              
            
            cout<<"Its ASCII value is "<<q->second;
             cout<<"\nIts ASCII value is "<<p->first;
      }
      else{
            cout<<"Key not in map.\n";
     }
      
return 0;
}
 
