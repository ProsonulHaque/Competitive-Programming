/*
    ***************************
    *    Author: rafa45       *
    *    Date: 25 Jul 2021    *
    ***************************
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


    int tc;
    cin >> tc;


    while(tc--){
        int a=0, b=0;
        cin >> a >> b;
        if(a+b<3) cout << 1 << endl;
        else if(a+b>=3 && a+b <= 10) cout << 2 << endl;
        else if(a+b>=10 && a+b <=60) cout << 3 << endl;
        else cout << 4 << endl;
    }


    return 0;
}