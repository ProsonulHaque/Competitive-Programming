/*
    ***************************
    *    Author: rafa45       *
    *    Date: 23 Aug 2021    *
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
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int n; cin >> n;
    int high=0, low=101;
    int h_Index=0, l_Index=0;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(x>high) high=x, h_Index=i;
        if(x<=low) low=x, l_Index=i;
    }

    int ans = h_Index+(n-1-l_Index)-(h_Index>l_Index);

    cout << ans << endl;

    return 0;
}