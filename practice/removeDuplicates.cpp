#include<iostream>
using namespace std;
int main(){
int arr[] = {1, 1, 2, 2, 3 , 3, 8, 8};
int n = sizeof(arr)/sizeof(int);
int i = 0;
for (int j = 1; j <= n; j++)
{
   if(arr[j]!=arr[i]){
    arr[i+1] = arr[j];
    i++;
   }
}
cout <<"Size of new Array: " << i<<endl; 
return 0;
}