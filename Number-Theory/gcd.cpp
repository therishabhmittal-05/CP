#include<iostream>
using namespace std;
// int gcd(int a, int b){
//     int result = min(a, b);
//     while(result>=1){
//         if(a%result==0 && b%result == 0){
//             return result;
//         }
//      result--;
//     }
//     return result;
// }

// using Euclidean Algo

// int gcd(int a, int b){
//     if(a==b){
//         return a;
//     }
//     else if (a>b){
//         return gcd(a-b, a);
//     }
//     else {
//         return gcd(a, b-a);
//     }
// }

int gcd(int a, int b){
    // return b==0 ? a: gcd(a, a%b);
    return 3% 11;
}
int main(){
    int a , b;
    // cin>> a >> b;
    cout << 3 % 11 ;
// cout << "GCD of " << a << " and " << b << ": "<< gcd(a,b)  <<endl; 
return 0;
}