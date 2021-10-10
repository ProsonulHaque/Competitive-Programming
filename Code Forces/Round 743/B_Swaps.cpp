/*
    ***************************
    *    Author: rafa45       *
    *    Date: 18 Sep 2021    *
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

        vector<int> odd(n), even(n);

        for(int i=0; i<n; i++){
            cin >> odd[i];
        }
        for(int i=0; i<n; i++){
            cin >> even[i];
        }

        int ans1 = 2*n, ans2 = 2*n;

        for(int i=0; i<n; i++){
            if(odd[i] < even[0]){
                ans1 = i;
            }
            if(even[i] > odd[0]){
                ans2 = i;
            }
        }

        cout << min(ans1, ans2) << endl;
    }


    return 0;
}