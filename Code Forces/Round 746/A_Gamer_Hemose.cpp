/*
    ***************************
    *    Author: rafa45       *
    *    Date: 03 Oct 2021    *
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
        int n, h;
        cin >> n >> h;

        vector<int> a(n);

        for(int &x:a) cin >> x;

        if(n == 1 && a[0]<h){
            cout << 1 << endl;
            continue;
        }

        sort(all(a), greater<int>());

        int cnt = 0;

        if(a[0]>=h) cnt = 1;
        else if(a[0]+a[1]>=h) cnt = 2;
        else{
            cnt = 2*(h/(a[0]+a[1])) + ((h%(a[0]+a[1]))!=0) + ((h%(a[0]+a[1]))>a[0]); 
        }

        cout << cnt << endl;
    }


    return 0;
}