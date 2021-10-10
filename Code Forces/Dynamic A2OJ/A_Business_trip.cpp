/*
    ***************************
    *    Author: rafa45       *
    *    Date: 27 Sep 2021    *
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


    int k;
    cin >> k;

    int month = 0, height = 0;

    vector<int> a(12);

    for(int i=0; i<12; i++)
        cin >> a[i];

    sort(all(a), greater<int>());

    for(int i=0; i<12; i++){
        if(height >= k) break;
        height += a[i];
        month++;
    }

    if(height < k) month = -1;
    
    cout << month;


    return 0;
}