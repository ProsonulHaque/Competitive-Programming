/*
    ***************************
    *    Author: rafa45       *
    *    Date: 30 Jul 2021    *
    ***************************
*/


#include<bits/stdc++.H>
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


    int tc;
    cin >> tc;


    while(tc--){
        int ww, hh; cin >> ww >> hh;
        
        int x1, y1, x2, y2; 
        cin >> x1 >> y1 >> x2 >> y2;
        
        int w, h; cin >> w >> h;

        //4 optimal positions (4 corners)
        int ans = 1e9;

        if(x2-x1+w <= ww){
            ans = min(ans, max(w-x1, 0));
            ans = min(ans, max(x2-(ww-w), 0));
        }
        if(y2-y1+h <= hh){
            ans = min(ans, max(h-y1, 0));
            ans = min(ans, max(y2-(hh-h), 0));
        }
        
        if(ans == 1e9) ans = -1;

        cout << ans << endl;
    }


    return 0;
}