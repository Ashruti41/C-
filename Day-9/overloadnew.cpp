// overload new[] amd delete[]

#include<iostream>
using namespace std;

class location{
     int lon, lat;
     public:
     location(){
      lon=0;
      lat=0;
      cout<<"Default\n";
      }

      location(int a, int b){
      lon = a;
      lat = b;
      cout<<"Para\n";
      }

     void display(){
        cout<< "Coordinates are, lon: " <<lon<< "lat: "<< lat <<endl;
       }
     void * operator new[](size_t byte){
       cout<<"inside the overloaded new";
       void *ptr;
       ptr = malloc(byte);
       if(ptr==NULL){
          cout<< "Could not allocate the memory\n";
       }
     return ptr;
     } 

};

int main(){
   
   location l1,l2(20,3);
   l1.display();

   location *ptr = new location[](2,2);
   ptr->display();
   //loc->display;
return 0;
}
   
