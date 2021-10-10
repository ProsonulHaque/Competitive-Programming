/*
    ***************************
    *    Author: rafa45       *
    *    Date: 06 Sep 2021    *
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

    vector<int> soldiers(n);

    for(int &x:soldiers)
        cin >> x;
    
    int mini = 1e9;
    int sol1, sol2;

    for(int i=0; i<n; i++){
        int diff;
        if(i==n-1){
            diff = abs(soldiers[i]-soldiers[0]);
        }
        else{
            diff = abs(soldiers[i]-soldiers[i+1]);
        }
        if(diff<mini){
            mini = diff;
            sol1 = i+1;
            sol2 = (i==n-1)? 1:i+2;
        }
    }

    cout << sol1 << " " << sol2;


    return 0;
}