/*
Author: rafa45
Date: 10 Jul 2021
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int N = 0, M = 0;
    int BW = 1;
    cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            char ch;
            cin >> ch;
            if(ch == 'C' || ch == 'M' || ch == 'Y') BW = 0;
        }
    }

    if(BW) cout << "#Black&White" << endl;
    else cout << "#Color" << endl;

    return 0;
}