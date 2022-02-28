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
       void *ptr;
       cout<<"inside the overloaded new";
       ptr = malloc(byte);
       if(ptr==NULL){
          cout<< "Could not allocate the memory\n";
       }
     return ptr;
     } 

     void operator delete[](void *ptr)
     {
       cout<<" freeing array using overloaded delete[]\n";
       free(ptr);
     }

};

int main(){
   
   location l1,l2(20,3);
   l2.display();
   location *p1;
   int i;

   p1 = new location [2];
   
   for(i=0; i<2; i++)
   p1[i].display();

   delete [] p1;

return 0;
}

   

   
