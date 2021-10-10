/*
    ***************************
    *    Author: rafa45       *
    *    Date: 23 Aug 2021    *
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
        int n=0, ans=1, pos=0, neg=0, other=0; 
        cin >> n;

        for(int i=0; i<n; i++){
            int x; cin >> x;
            if(x!=0 && x!=1 && x!=-1)
                other++;
            if(x==-1) neg++;
            if(x==1) pos++;
        }
        
        if(other>1) ans = 0;
        else if(neg>1 && pos==0) ans = 0;
        else if(neg>0 && other>0) ans = 0;

        cout << ans << endl;
    }


    return 0;
}