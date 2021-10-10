/*
    ***************************
    *    Author: rafa45       *
    *    Date: 29 Aug 2021    *
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

        vector<int> v(n);

        int even = 0, odd = 0;

        for(int &x:v){
            cin >> x;
            if(x%2==0) even++;
            else odd++;
        }

        int ans = 0;

        if(abs(even-odd)>1) ans = -1;
        else if(n<3){
            if(n==1) ans = 0;
            else{
                if(even == odd) ans = 1;
                else ans = -1;
            }
        }
        else{
            while(true){
                int cnt = 0;

                for(int i=1; i<n-1; i++){
                    if(v[i]%2 != v[i-1]%2 && v[i]%2 == v[i+1]%2) swap(v[i], v[i-1]), cnt++, i++;
                    else if(v[i]%2 == v[i-1]%2 && v[i]%2 != v[i+1]%2) swap(v[i], v[i+1]), cnt++, i++;
                }

                if(cnt == 0) break;
                ans += cnt;
            }
        }

        cout << ans << endl;
    }


    return 0;
}