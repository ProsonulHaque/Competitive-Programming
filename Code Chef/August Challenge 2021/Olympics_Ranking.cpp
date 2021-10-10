/*
    ***************************
    *    Author: rafa45       *
    *    Date: 06 Aug 2021    *
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
        int ans1=0, ans2=0;
        for(int i=0; i<3; i++){
            int x;
            cin >> x;
            ans1 += x;
        }
        for(int i=0; i<3; i++){
            int x;
            cin >> x;
            ans2 += x;
        }
        if(ans1 > ans2) cout << 1 << endl;
        else cout << 2 << endl;
    }


    return 0;
}