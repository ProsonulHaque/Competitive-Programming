/*
Author: rafa45
Date: 17 Nov 2020
*/

#include<bits/stdc++.h>
using namespace std;

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;

#define endl              "\n"
#define PRIME	          M
#define mod               M
#define ll                long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

////////----------------------------------Code Starts from Here----------------------------------////////

int main()
{
    IOS

    int t;
    cin >> t;

    while(t--){
        int n=0, m=0 ,k=0;
        cin >> n >> m;
        string s;
        vector<string> v(n);
        vector<pii> pa;

        rep(i, 0, n){
            cin >> s;
            v[i] = s;
        }

        for(int i=0; i<n-1; i++){
            for(int j=0; j<m-1; j++){
                ////////
                int cnt = 0;
                for(int k=i; k<i+2; k++){
                    for(int l=j; l<j+2; l++){
                        if(v[k][l]=='1'){
                            cnt++;
                        }
                    }
                }
                if(cnt==3){
                    k++;
                    for(int k=i; k<i+2; k++){
                        for(int l=j; l<j+2; l++){
                            if(v[k][l]=='1'){
                                v[k][l] = '0';
                                pa.push_back(make_pair(k, l));
                            }
                        }
                    }
                }
                ////////
            }
        }

        cout << k << endl;

        for(int m=0; m<pa.size(); m+=3){
            for(int w=m; w<m+3; w++){
                cout << pa[w].first+1 << " " << pa[w].second+1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
