/*
    ***************************
    *    Author: rafa45       *
    *    Date: 22 Aug 2021    *
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


    int tc; cin >> tc;

    for(int tcn=1; tcn<=tc; tcn++){
        int bought, limit; 
        cin >> bought >> limit;

        vector<int> dates(bought);

        for(auto &x:dates) cin >> x;
        sort(all(dates));

        int day = 0, ans = 0, today = 0;

        for(int i=0; i<dates.size(); i++){
            if(today == limit) 
                today = 0, day += 1;
            if(dates[i]>day) 
                ans++, today++;
        }

        printf("Case #%d: %d\n", tcn, ans); 
    }


    return 0;
}