#include<iostream>
#include<map>
using namespace std;

int main()
{
       map<int, char>m;
       int i;

//put pairs into map
      for(i=0; i<26; i++){
         m.insert(pair<int,char>((65|97)+i,('A'|'a')+i));
         }

      int ch;
      cout<<"Enter key(an uppercase letter): ";
      cin>>ch;
      map<int,char>::iterator p;

       p = m.find(ch);
       if(p!=m.end())
            cout<<"Its ASCII value is "<<p->second;
      else
            cout<<"Key not in map.\n";
return 0;
}
 
