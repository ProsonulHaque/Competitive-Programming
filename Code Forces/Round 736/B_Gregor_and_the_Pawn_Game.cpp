/*
    ***************************
    *    Author: rafa45       *
    *    Date: 01 Aug 2021    *
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
        string u, d; cin >> u >> d;

        int ans = 0;
        for(int i=0; i<n; i++){
            if(d[i]=='1'){
                if(u[i]=='0'){
                    u[i] = '-';
                    ans++;
                }
                else if(i!=0 && u[i-1]=='1'){
                    u[i-1] = '-';
                    ans++;
                }
                else if(i!=n-1 && u[i+1]=='1'){
                    u[i+1] = '-';
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }


    return 0;
}