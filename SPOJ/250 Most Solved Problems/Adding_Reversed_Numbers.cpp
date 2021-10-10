/*
    ***************************
    *    Author: rafa45       *
    *    Date: 12 Aug 2021    *
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
#define all(v1)            (v1).begin(),(v1).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int m, n; 
        cin >> m >> n;
        vector<int> v1, v2;
        
        while(m>0 || n>0){
            if(m>0){
                v1.push_back(m%10);
                m /= 10;
            }
            if(n>0){
                v2.push_back(n%10);
                n /= 10;
            }
        }
        
        int a = 0, b = 0, p = 1;

        for(int i=v1.size()-1; i>=0; i--){
            a += p*v1[i];
            p *= 10;
        }

        p = 1;
        
        for(int i=v2.size()-1; i>=0; i--){
            b += p*v2[i];
            p *= 10;
        }

        int sum = a+b;

        while(sum%10==0) sum /= 10;
        
        while(sum>0){
            cout << sum%10;
            sum /= 10;
        }
        
        cout << endl;
    }


    return 0;
}