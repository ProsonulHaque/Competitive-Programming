/*
    ***************************
    *    Author: rafa45       *
    *    Date: 20 Aug 2021    *
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


    ll n, m, best=0;
    cin >> n >> m;
    vector<ll> trees(n);
    
    for(auto &x:trees){
        cin >> x;
        best = max(best, x);
    } 

    ll start=0, end=best, mid=0;
    ll h = 0;

    while(start<=end){
        mid = (start+end)/2;
        ll sum = 0;
        for(ll x:trees)
            if(x>mid) sum += x-mid;
        if(sum == m){
            h=mid; break;
        }
        else if(sum<m) end = mid-1;
        else{
            start = mid+1;
            //we need to save all the mid values 
            //for which sum > m
            if(mid>h) h=mid;
        } 
    }

    cout << h;

    return 0;
}