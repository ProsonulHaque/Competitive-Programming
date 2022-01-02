/*
    ***************************
    *    Author: rafa45       *
    *    Date: 24 Dec 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e9;
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

    vector<vector<int>> v;
    v.push_back(vector<int> (32));

    for(int i=1; i<=2*1e5; i++){
        bitset<32> bs(i);
        vector<int> bits(32);
        
        for(int j=0; j<32; j++){
            bits[j] = bs[j] + v[i-1][j];
        }
        
        v.push_back(bits);
    }

    while(tc--){
        int l, r, ans = 1e9, count;
        cin >> l >> r;
        
        for(int i=0; i<32; i++){
            if(v[r][i] == 0 && v[l-1][i] == 0) continue;
            count = (r-l+1) - (v[r][i] - v[l-1][i]);
            ans = min(ans, count);
        }

        cout << ans << endl;
    }


    return 0;
}