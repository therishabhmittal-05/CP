// // #include<iostream>
// // #include<string>
// // #include<vector> // Include the <vector> header file
// // #include<iostream>
// // #include<string>
// // #include<vector>

// // #include <bitset>
// // using namespace std;

// // int sum(int a, int b) {
// //     return a + b;
// // }

// // int main(){
// // // vector <int> v;
// // // v.push_back(5);
// // // v.push_back(5);
// // // v.push_back(5);
// // // v.push_back(5);
// // // v.push_back(5);
// // // cout << v[2];
// // // vector <pair<int,int>> arr;
// // // arr.push_back({100,2000});
// // // // for (vector <int>:: iterator i  = arr.begin(); i != arr.end(); i++){
// // // //  cout << *i << endl;
// // // // }
// // // // }
// // // cout << arr[0].first;
// // // cout << sizeof(arr);
// // // vector <char> vec;
// // // vec.push_back('a');
// // // vec.push_back('b');
// // // vec.push_back('c');
// // // vec.push_back('d');
// // // for(auto i = vec.begin(); i != vec.end(); i++ ){
// // //     cout << *i << " ";
// // // }
// // // vec.erase(vec.begin()+1);
// // // vec.insert(vec.begin()+1, 'f');

// // //   cout<< endl;
// // //   for(auto i = vec.begin(); i != vec.end(); i++ ){
// // //     cout << *i << " ";
// // // }


// // int a = 7789;
// // // int rev = 0;
// // // while (a>0){
// // //     int last = a%10;
// // //     cout<< last << endl;
// // //     a = a/10;
// // //     rev = (rev*10) + last;
// // // }
// // // cout << rev;
// // string binary = std::bitset<32>(128).to_string();
// // unsigned long b = bitset<1000>(binary).to_ullong();
// // cout << b;

// // }
// // // vector<char>::iterator === auto
// #include<iostream>
// using namespace std;
// int main(){
// cout << "Rishabh" << endl; 
// return 0;
// }

#include<iostream>
using namespace std;
unsigned int reverseBits(unsigned int n) {
    unsigned int rev = 0;
    int i = 0;
    while (i < 32) {
        rev <<= 1; // Left shift rev by 1 to make room for the next bit
        rev |= (n & 1); // Set the least significant bit of rev to the current bit of n
        n >>= 1; // Right shift n by 1 to get the next bit
        i++;
    }
    return rev;
}
int main(){
 
    cout << reverseBits(12) << endl;
return 0;
}