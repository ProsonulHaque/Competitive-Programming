/*
    ***************************
    *    Author: rafa45       *
    *    Date: 24 Jul 2021    *
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        vector<int> a(3), b(3);
        int sA=0, sB=0;

        for(int i=0; i<3; i++) cin >> a[i];
        for(int i=0; i<3; i++) cin >> b[i];

        for(int i=0; i<3; i++){
            if(a[i]>b[i]) sA++;
            else sB++;
        }

        sA>sB? cout << "A\n": cout << "B\n"; 
    }


    return 0;
}