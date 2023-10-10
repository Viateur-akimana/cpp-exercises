#include<iostream>;
#include<cmath>;
using namespace std;

int main(){
    cout << "ENter the radius of the circle:";
    int radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius,2);
    cout <<"THis is the area of the circle: " << area <<endl;

}