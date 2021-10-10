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
        int n; cin >> n;
        vector<int> s(n);

        for(int i=0; i<n; i++) cin >> s[i];

        int largest=0, smallest=150;
        vector<int> left(2), right(2);

        for(int i=0; i<n; i++){
            if(s[i]>largest) largest=s[i],left[0]=i+1;
            if(s[i]<smallest) smallest=s[i],left[1]=i+1;
        }

        right[0] = n+1-left[0];
        right[1] = n+1-left[1];

        int ans = min({max(left[0], left[1]), max(right[0], right[1]), left[0]+right[1], right[0]+left[1]});

        cout << ans << endl;
    }


    return 0;
}