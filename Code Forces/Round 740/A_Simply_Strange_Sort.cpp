/*
    ***************************
    *    Author: rafa45       *
    *    Date: 24 Aug 2021    *
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

void f(int start, vector<int> &a){
    for(int i=start; i<a.size()-1; i+=2)
        if(a[i]>a[i+1]) swap(a[i], a[i+1]);
}

int main()
{
    IOS


    int tc;
    cin >> tc;


    // while(tc--){
    //     int n; cin >> n;
    //     int mx = 0;
    //     bool adj = true;

    //     for(int i=1; i<=n; i++){
    //         int x; cin >> x;
    //         if(abs(x-i)>1) adj=false;
    //         mx = max(mx, abs(x-i));
    //     }

    //     cout << mx+(!adj) << endl;
    // }

    while(tc--){
        int n; cin >> n;
        vector<int> a(n);
        
        for(int &x:a) cin >> x;

        int cnt = 0;

        while(true){
            bool ok = true;
            
            for(int i=0; i<n; i++)
                if(a[i]!=i+1) ok = false;
            
            if(ok) break;

            if(cnt%2==0) f(0, a);
            else f(1, a);
            
            cnt++;
        }

        cout << cnt << endl;
    }


    return 0;
}