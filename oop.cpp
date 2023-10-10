#include<iostream>
using namespace std;

class Rectangle
{
private: 
    int length;
    int width;

    Rectangle(){

    }
public:
   int area(){
    return length * width;
   }
   void setValues(int l, int w){
    width = w;
    length = l;
   }
};

class Rectangle2
{
private: 
    int length;
    int width;
public:
   int area(){
    return length * width;
   }
   void setValues(int l, int w){

   }
};

void Rectangle2::setValues(int w,int l){
    width = w;
    length = l;
};

int main(){

     Rectangle rect;
     rect.setValues(12,32);
    cout << "THe area is :"<< rect.area() << endl;

    return 0; 
}
