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
        int n; cin >> n;
        vector<int> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        if(n == 1){
            cout << "YES" << endl;
            continue;
        }

        bool found = false;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                set<int> s;
                for(int k=0; k<n; k++){
                    if(k != i && k != j && v[k] = v[i]+v[j])
                }
                if(s.count(v[i]+v[j])>0 || s.count(v[i]-v[j])>0 || s.count(v[j]-v[i])>0 || v[i] == v[j]){
                    found = true;
                }
            }
        }

        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}