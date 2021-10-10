/*
    ***************************
    *    Author: rafa45       *
    *    Date: 18 Sep 2021    *
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
        int n; cin >> n;
        vector<vector<int>> v(n);

        for(int i=0; i<n; i++){
            int size; cin >> size;
            for(int j=0; j<size; j++){
                int x; cin >> x;
                v[i].push_back(x);
            }
        }

        int ans = 0;
        unordered_set<int> st;

        while(true){
            int cnt = 0, i = 0;
            for(i=0; i<n; i++){
                if(st.count(i+1) > 0) continue;
                bool ok = true;
                int j;
                for(j=0; j<v[i].size(); j++){
                    if(st.count(v[i][j]) == 0){
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    cnt++;
                    st.insert(i+1);
                }
            }
            if(cnt == 0) break;
            ans++;
        }

        if(st.size()!=n) ans = -1;
        
        cout << ans << endl;
    }


    return 0;
}