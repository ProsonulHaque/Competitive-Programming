/*
    ***************************
    *    Author: rafa45       *
    *    Date: 02 Sep 2021    *
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
    vector<int> days(7);

    for(int &x:days) cin >> x;

    int ans = 0, cnt = 0;

    for(int i=0; ; i= (i+1)%7){
        cnt += days[i];
        if(cnt >=n ){
            ans = i+1;
            break;
        }
    }

    cout << ans;


    return 0;
}