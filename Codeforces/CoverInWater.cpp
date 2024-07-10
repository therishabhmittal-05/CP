#include "bits/stdc++.h"
using namespace std;
int main(){
 int t;
 cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s(n, ' ');
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == '.'){
            ans++;
        }
    } 
    for(int i = 1; i < n-1; i++){
        if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
            ans = 2;
        }
    }
    cout << ans << '\n';
    
  }
return 0;
}