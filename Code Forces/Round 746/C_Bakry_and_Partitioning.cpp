/*
    ***************************
    *    Author: rafa45       *
    *    Date: 03 Oct 2021    *
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

        vector<int> a(n);
        unordered_map<int, int> mp;
        set<int> st;

        for(int i=0; i<n; i++){
            cin >> a[i];
            st.insert(a[i]);
            mp[a[i]] = i+1;
        }

        vector<vector<int>> adj(n+1);

        for(int i=0; i<n-1; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        int xr = a[0];

        for(int i=1; i<n; i++)
            xr ^= a[i];

        string ans = "NO";
        
        if(xr == 0) ans = "YES";
        else if(st.count(xr)>0 && adj[mp[xr]].size() == 1) ans = "YES";
        
        cout << ans << endl;
    }


    return 0;
}