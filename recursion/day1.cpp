// #include<iostream>
// using namespace std;

// void printNumbers(int N, int count){
//     if(count == N) return;
//     count++;
//     printNumbers(N, count);
//     cout << count << " ";
   
   
// }
// int main(){
//     int N;
//     cin>>N;
//     int count = 0;
//     printNumbers(N, count);
// return 0;
// }
#include<iostream>
using namespace std;
int add (int i , int n, int sum){
    if(i>n) return sum;
    sum = sum + i;
    return add(i+1, n, sum);
}
int main(){
    int sum = 0;
    int n;
    cin >> n;
    cout << add (1, n, sum);
    
// cout << <<endl; 
return 0;
}