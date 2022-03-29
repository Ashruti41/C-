#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
      char str[] = "I love c++ programming";
      vector<char> v,v2(30);

      int i;
      for(i=0; str[i]; i++)
          v.push_back(str[i]);
      cout<<"Input sequence: "<<endl;

      for(i=0; i<v.size(); i++)
          cout<<v[i];

      remove_copy(v.begin(),v.end(),v2.begin(),' ');

      cout<<"\nResult after removing spaces: "<<endl;

      for(i=0; i<v2.size(); i++)
           cout<<v2[i];

   cout<<endl;

      cout<<"Input Sequence: "<<endl;
             for(i=0; i<v.size(); i++)
               cout<<v[i];

      replace_copy(v.begin(),v.end(),v2.begin(),' ',':');
      cout<<"\nResult after removing spaces: "<<endl;

      for(i=0; i<v2.size(); i++)
           cout<<v2[i];
return 0;
}
