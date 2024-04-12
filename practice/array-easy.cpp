#include<iostream>
using namespace std;
int main(){

  int arr[]={2,3,53,166,6};
  int n = sizeof(arr)/sizeof (int)  ;
    // int largest = arr[0];
    // int slargest = INT_MIN;
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if(arr[i]>largest){
        //     slargest = largest;
        //     largest  = arr[i];
        // }
        if(arr[i]< smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else {
            ssmallest = smallest;
        }
    }
    

// cout << slargest <<endl; 
cout << ssmallest <<endl; 
return 0;
}

