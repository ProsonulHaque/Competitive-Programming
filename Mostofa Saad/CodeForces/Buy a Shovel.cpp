/*
Author: rafa45
Date: 24 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k=0, r=0, i=0;
    int num1=0, num2=0, lcm=0;

    cin >> k >> r;

    i=k;
    while(true){
        if(i%10==0 || i%10==r){
            cout << i/k << endl;
            break;
        }
        i+=k;
    }

    return 0;
}
