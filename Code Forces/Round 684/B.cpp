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

    int t, n, k, i;
    cin >> t;

    while(t--){
        cin >> n >> k;
        vector<int> arr(n*k);
        ll sum = 0, sum1 = 0;

        for(i=0; i<(n*k); i++){
            cin >> arr[i];
            sum1 += arr[i];
            if(i%2==0)
                sum += arr[i];
        }

        if(n==2){
            cout << sum << endl;
            continue;
        }

        if(n==1){
            cout << sum1 << endl;
            continue;
        }

        sum = 0;
        int l=0, r=(n*k)-1;

        while(r>l){
            int a = ((n+1)/2)-1;
            int b = n-a;
            while(a--) l+=1;
            while(b--) r-=1;
            sum += arr[r+1];
        }

        cout << sum << endl;
    }

    return 0;
}
