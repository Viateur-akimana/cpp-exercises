#include<iostream>
using namespace std;
int main(){
    cout << "Enter degrees in fahrenheit:";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit-32)/1.8;
    cout << "Degrees in celsius:" << celsius;
    return 0;
}