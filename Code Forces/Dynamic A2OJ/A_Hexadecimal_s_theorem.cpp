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

    if(n==0) printf("0 0 0");
    else if(n==1) printf("0 0 1");
    else{
        int a=0, b=1, c=0;
        while(true){
            c = a+b;
            if(c==n){
                printf("%d %d %d", 0, a, b);
                break;
            }
            a = b;
            b = c;
        }
    }


    return 0;
}