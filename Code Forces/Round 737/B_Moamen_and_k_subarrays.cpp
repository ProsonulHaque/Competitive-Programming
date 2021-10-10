/*
    ***************************
    *    Author: rafa45       *
    *    Date: 09 Aug 2021    *
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


    int tc;
    cin >> tc;


    while(tc--){
        int n, k; cin >> n >> k;
        
        vector<int> a(n), b(n);
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++) cin >> a[i];

        b = a;
        sort(b.begin(), b.end());

        for(int i=0; i<n; i++){
            if(i==n-1) mp[b[i]] = b[i];
            else mp[b[i]] = b[i+1];
        }

        int group = 1;

        for(int i=0; i<n-1; i++){
            if(mp[a[i]] != a[i+1]) group++;
        }

        if(group <= k) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}