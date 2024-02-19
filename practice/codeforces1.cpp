#include<iostream>
using namespace std;
string watermelon(){
        int w;
        cin >> w;
        if(w%2==0){
            return "YES";
        }
        else {
            return "NO";
        }
    }
int main(){
   cout << watermelon();
   return 0;
}
