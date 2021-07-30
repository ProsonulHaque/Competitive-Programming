/*
Author: rafa45
Date: 19 Jul 2021
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


    int t;
    cin >> t;


    while(t--){
        int n; cin >> n;
        
        vector<int> v1(n), v2(n);

        for(int i=0; i<n; i++) cin >> v1[i];
        for(int i=0; i<n; i++) cin >> v2[i];

        sort(v1.begin(), v1.end(), greater<>());
        sort(v2.begin(), v2.end(), greater<>());

        int b1 = n-n/4-1, b2 = n-n/4;

        int s1 = 0, s2 = 0;

        for(int i=0; i<=b1; i++){
            s1 += v1[i];
            s2 += v2[i];
        }

        int ans = 0;

        while (s1<s2)
        {
            s1 += 100;
            ans += 1;
            if((ans+n)%4 == 0){
                if(b1 >= 0){
                    s1 -= v1[b1];
                    b1--;
                }
            }
            else{
                if(b2 < n) {
                    s2 += v2[b2];
                    b2++;
                }
            }
        }

        cout << ans << endl;
    }


    return 0;
}