/*
    ***************************
    *    Author: rafa45       *
    *    Date: 19 Aug 2021    *
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


    int a1, a2, a3;


    while(cin >> a1 >> a2 >> a3){
        if(a1 == a2) break;
        
        if(a3-a2 == a2-a1){
            cout << "AP " << a3+a2-a1 << endl; 
        }
        else{
            cout << "GP " << a3 * a2/a1 << endl;
        }
    }


    return 0;
}