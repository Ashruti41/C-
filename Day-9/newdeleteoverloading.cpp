//new and delete operator overload

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

     void * operator new(size_t byte){
       void *ptr;
       cout<<" inside the overload new" <<endl;
       ptr = malloc (byte);
       if(ptr==NULL){
          cout<< "Could not allocate the memory\n";
         // return 1;
        }
      return ptr;
     }

     void operator delete (void *ptr){
       cout<<" inside the overload delete" <<endl;
       free(ptr);
     }
  };

 class demo{
    int a,b;
    public:

   demo() {
    cout<< "inside demo's const\n";
  }

  void display(){
   cout<<"Demo object's values are:"<<a<< " "<<b<< endl;
  }
};

int main(){
     location l1,l2(20,5);
     l2.display();
 
     location *loc = new location (2,2);
     loc->display();
    
     delete loc;
     int *pt = new int;
     demo *ptr = new demo;
     
  return 0;
}
