/*
Author: rafa45
Date: 21 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int len = 20;

int main()
{
    int n, x;
    ll sum = 0;
    int a[len]={0};

    cin>>n;

    while(n--){
        cin >> x;
        bitset<len> bs(x);
        for(int i=0; i<len; i++){
            a[i] += bs[i];
        }
    }

    while(true){
        ll num=0;
        for(int i=0; i<len; i++){
            if(a[i]>0){
                num += pow(2, i);
                a[i]--;
            }
        }
        if(num==0) break;
        sum += num*num;
    }

    cout << sum << endl;

    return 0;
}
