/*
    ***************************
    *    Author: rafa45       *
    *    Date: 12 Sep 2021    *
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
    int cities[n];

    int min_dis = 1e9+1, city_no = 0;

    for(int i=0; i<n; i++){
        cin >> cities[i];
        if(cities[i] < min_dis){
            min_dis = cities[i];
            city_no = i+1;
        }
    }

    int cnt = 0;

    for(int i=0; i<n; i++){
        cnt += (cities[i] == min_dis);
    }

    if(cnt == 1) cout << city_no;
    else cout << "Still Rozdil";


    return 0;
}