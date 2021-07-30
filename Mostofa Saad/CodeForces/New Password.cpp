/*
Author: rafa45
Date: 4 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i=0, n=0, k=0;
    char ch='a';

    cin >> n >> k;

    for(i=1; i<=n; i++){
        printf("%c", ch);
        if(i%k)
            ch++;
        else
            ch = 'a';
    }

    return 0;
}
