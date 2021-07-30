/*
Author: rafa45
Date: 20 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

//Sum of pairwise Hamming Distance
int main()
{
    int n, i;
    cin >> n;
    vector<int> v(n);
    for(auto &x:v) cin >> x;

    int a[32]={0};

    for(auto x:v){
        bitset<32> bs(x);
        for(i=0; i<31; i++){
            if(bs[i]) a[i]++;
        }
    }

    int sum = 0;

    for(i=0; i<31; i++){
        sum += a[i]*(n-a[i])*2;
    }

    cout << sum << endl;

    return 0;
}
