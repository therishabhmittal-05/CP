#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;
int main(){
    // cout << "Rishabh Mittal" <<endl; 
    // cout << "22104089" << endl;

    // int x, y;
    // cin>> x >> y;
    // cout << x << endl << y;
    // float-double, int-long
    // string str;
    // getline(cin, str);
    // cout << str;

    // char c;
    // cin >> c;
    // cout << "c is"<< c;
    int age;
    cin >> age;
    if(age<18){
            cout<< "not elgible";
    }
    else if(age>=18){
        cout << "Eligible";

    }
    else if (age <=55 && age <= 57){
        cout << "Retirement soon";
    }
    else if (age > 57){
        cout << "Retirement Time";
    }
    return 0;
}