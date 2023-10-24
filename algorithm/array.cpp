#include <iostream>
using namespace std;
int sumArray(int a[] , int arr_size)
{
    int sum = 0;
    for (int iterator = 0; iterator < arr_size; iterator++)
    {
        sum += a[iterator];
    }
    return sum;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(int);
    cout << "The sum is " << sumArray(arr , size) << endl;
    return 0;
}

`