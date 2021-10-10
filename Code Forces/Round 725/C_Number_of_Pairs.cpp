/*
    ***************************
    *    Author: rafa45       *
    *    Date: 18 Aug 2021    *
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
        int n, lr ,rr;
        cin >> n >> lr >> rr;

        vector<int> v(n);
        for(auto &x:v) cin >> x;

        sort(v.begin(), v.end());

        int left=0, right=n-1, ans=0;

        while(left<right){
            int l=left, r=right;
            
            while(v[l]+v[r]<lr || v[l]+v[r]>rr){
                if(v[l]+v[r]<lr) l++;
                if(v[l]+v[r]>rr) r--;
            }

            left = l, right = r;

            int m = (l+r)/2;

            while(l<r){
                if(v[m]+v[l]==lr) break;
                if(v[m]+v[l]>lr) r = m;
                else l = m; 
                m = (l+r)/2;
            }

            ans += right-m+1-(l==m);
            left++;
        }

        cout << ans << endl;
    }


    return 0;
}