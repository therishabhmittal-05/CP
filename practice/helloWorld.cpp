#include<iostream>
using namespace std;
int main(){
cout <<"Hello World!!"<<endl; 
int arr[4];

int array2D[4][4] = {{2,4,5,6},{2,2,4,3},{2,2,4,3},{2,2,4,3}};
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        /* code */
        cout<< array2D[i][j];
    }
    cout<< endl;
}

int pointer[3] = {2, 4, 6};

if (pointer[1] == 4) {
    pointer[1] = 0;
}
for (int i = 0; i < 3; i++) {
    cout<<pointer[i];
}


cout << 65 - int('a');

return 0;
}