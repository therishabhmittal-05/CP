#include<iostream>
using namespace std;
int main(){
    bool sorted = true;
    int arr[7] = {2, 2,  4, 5, 6, 7, 7};
    int arr2[7] = {2, 4, 5, 6, 7, 5, 2};
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i <= n-2; i++)
    {
        if(arr[i] > arr[i+1]){
            sorted = false;
        }
    }
    
cout << bool(sorted) <<endl; 
return 0;
}