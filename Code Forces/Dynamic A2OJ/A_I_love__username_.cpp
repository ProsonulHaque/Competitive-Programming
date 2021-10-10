/*
    ***************************
    *    Author: rafa45       *
    *    Date: 31 Aug 2021    *
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


    int n; cin >> n;

    int best = 0, worst = 0, ans = 0;

    for(int i=0; i<n; i++){
        int point; cin >> point;

        if(i==0) best = point, worst = point;
        else {
            if(point>best) best = point, ans++;
            else if(point<worst) worst = point, ans++;
        }
    }

    cout << ans;


    return 0;
}