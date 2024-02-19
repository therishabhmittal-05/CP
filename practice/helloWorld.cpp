#include<iostream>
#include<string>
#include<vector> // Include the <vector> header file
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main(){
vector <int> v;
// v.push_back(5);
// v.push_back(5);
// v.push_back(5);
// v.push_back(5);
// v.push_back(5);
// cout << v[2];
// vector <pair<int,int>> arr;
// arr.push_back({100,2000});
// // for (vector <int>:: iterator i  = arr.begin(); i != arr.end(); i++){
// //  cout << *i << endl;
// // }
// // }
// cout << arr[0].first;
// cout << sizeof(arr);
vector <char> vec;
vec.push_back('a');
vec.push_back('b');
vec.push_back('c');
vec.push_back('d');
for(auto i = vec.begin(); i != vec.end(); i++ ){
    cout << *i << " ";
}
vec.erase(vec.begin()+1);
vec.insert(vec.begin()+1, 'f');

  cout<< endl;
  for(auto i = vec.begin(); i != vec.end(); i++ ){
    cout << *i << " ";
}

}
// vector<char>::iterator === auto