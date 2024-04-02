#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countL(int x)
{
    int a;
    int count = 0;
    while (x > 0)
    {
        a = x % 2 ? 0 : 1;
        x = x / 2;
        count++;
    }
    return count;
}
int lastDigit(int x, int i)
{
    int a;
    for (int k = 0; k < i; k++)
    {
        a = x % 2 ? 0 : 1;
        x = x / 2;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int m, n;
        cin >> m >> n;
        int mL = countL(m);
        int nL = countL(n);
        int lT = mL > nL ? mL : nL;
        int mB = lastDigit(m, lT);
        int nB = lastDigit(n, lT);
        int ans = nB == mB ? 1 : 0;
        cout << ans ;
        t--;
    }
    return 0;
}