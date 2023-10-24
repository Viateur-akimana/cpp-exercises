#include <iostream>
using namespace std;
int fun6 (int n) {
int  m = 0; 
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
m += 1;
   }
   }
return m;
}
// Testing Code
int main() {
printf("N = 10, Number of instructions 0(log(n)) :: %d \n", fun6 (1000000));
return 0;

}