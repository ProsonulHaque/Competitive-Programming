/*
    ***************************
    *    Author: rafa45       *
    *    Date: 24 Jul 2021    *
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
        int n, m, l;
        cin >> n >> m >> l;
        unordered_map<int, int> mp;
        for(int i=1; i<=m; i++){
            int len; cin >> len;
            while(len--){
                int x; cin >> x;
                mp[x] = i;
            }
        }
        
        vector<int> v(l);
        for(int i=0; i<l; i++){
            cin >> v[i];
        }

        int seg = 1;
        for(int i=1; i<l; i++){
            int current = v[i];
            int prev = v[i-1];
            if(mp[current] != mp[prev]) seg++;
        }

        cout << seg << endl;
    }


    return 0;
}