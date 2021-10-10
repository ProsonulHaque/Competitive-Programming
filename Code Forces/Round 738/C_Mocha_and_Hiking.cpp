/*
    ***************************
    *    Author: rafa45       *
    *    Date: 15 Aug 2021    *
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
        
        vector<int> a(n+1);

        for(int i=1; i<=n; i++) cin >> a[i];

        if(a[1]==1){
            cout << n+1 << " ";
            for(int i=1; i<=n; i++) cout << i << " ";
        }
        else if(a[n]==0){
            for(int i=1; i<=n+1; i++) cout << i << " ";
        }
        else{
            int indx = 0;
            for(int i=1; i<=n-1; i++){
                if(a[i]==0 && a[i+1]==1){
                    indx = i+1;
                    break;
                }
            }
            for(int i=1; i<=n; i++){
                if(i==indx) cout << n+1 << " ";
                cout << i << " ";
            }
            cout << endl;
        }

        cout << endl;
    }


    return 0;
}