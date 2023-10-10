#include<iostream>
using namespace std;

void Sum(int number){
    int sumOFOdd = 0;
    for(int i = 1; i < number ; i++){
        if(i % 2 == 0){
           sumOFOdd += i; 
        }
    }
    int sumOfEven = 0;
    for(int i = 1; i< number ; i++){
        if(i % 2 ){
            sumOfEven +=i;
        }
    }
    int difference ;
    difference = sumOFOdd - sumOfEven;
}
int main(){
    cout << "THe difference btn the odd and even is :";

 return 0;
}