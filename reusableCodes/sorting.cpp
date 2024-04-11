#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int mini = i;
        for (int j = 0; j <= n-1; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}
void bubble_sort(int arr[], int n){
    int swaptrue = 0;
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]  = temp;
            swaptrue = 1;

            }
        }
        if(swaptrue == 0){
            break;
        }
        cout << "run" << endl;
    }
    
}

void insertion_sort(int arr[], int n){
    for(int i = 0; i<=n-1; i++)
    {
        int j = i;
        while(j>0 && arr[j-1]> arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
}}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selection_sort(arr, n);
    // bubble_sort(arr, n);
    // insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}