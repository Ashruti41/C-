//new[] and delete[],new,and delete overloading
#include<iostream>
using namespace std;

class point{
     int x,y;
     public:
     point() //default const
    {
      x=y=0;
     }

     point(int px,int py)  //para constructure
    {
      x=px;
      y=py;
    }

    void display(){
      cout<<x<<" "<<y <<"\n";
   }

   void * operator new(size_t byte);
   void operator delete(void *);
   
   void * operator new[](size_t byte);
   void operator delete[](void *);
};

  void *point::operator new(size_t byte)
  {
    void *p;
    cout<<"inside the overloaded new.\n";
    p = malloc(byte);
    if(p==NULL){
     cout<<"could not allocate the memory";
    }
    return p;
  }

   void point::operator delete(void *p){
    cout<<"in overloaded delete\n";
    free(p);
   }

  void *point::operator new[](size_t byte)
  {
    void *p;
    cout<<"inside the ovdrloaded new[].\n";
    p = malloc(byte);
    if(p==NULL){
     cout<<"could not allocate the memory";
    }
    return p;
  }

  void point::operator delete[](void *p){
     cout<<"in overloaded delete[]\n";
    free(p);
   }

 int main(){
    point *p1,*p2;
    int i;

    p1 = new point(10,20);
    p1->display();

   p2 = new point[10];
    
   for(i=0;i<10;i++)
   p2[i].display();

   delete p1;
   delete [] p2;

return 0;
}
  
