/*
Author: rafa45
Date: 17 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    int i, j, n, p, x, flag=1;
    cin >> n;
    int a[n+1];
    memset(a, 0, sizeof(a));

    for(i=0; i<2; i++){
        cin >> p;
        while(p--){
            cin >> x;
            a[x] = 1;
        }
    }

    for(i=1; i<=n; i++){
        if(a[i]==0){
            flag = 0;
            break;
        }
    }

    flag? cout << "I become the guy." : cout << "Oh, my keyboard!";

    return 0;
}
