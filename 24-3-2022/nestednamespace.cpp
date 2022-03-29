#include<iostream>
using namespace std;
namespace NS1{
 int i;
   namespace NS2{
    int j;
  }
}

int main(){
 NS1::i =19;
NS1::NS2::j = 10;
cout<<NS1::i<<" "<<NS1::NS2::j<<endl;

using namespace NS1;
using namespace NS2;
cout<<i* NS2::j;
return 0;
}

