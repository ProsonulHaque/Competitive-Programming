/*
Author: rafa45
Date: 02 Jul 2021
*/

#include<bits/stdc++.h>
using namespace std;

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;

#define endl              "\n"
#define PRIME	          M
#define mod               M
#define ll                long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

////////----------------------------------Code Starts from Here----------------------------------////////

int main()
{
    IOS

    int t;
    cin >> t;

    while(t--)
    {
		ll n, a, b;
        bool ok = false;
        cin >> n >> a >> b;

        if(n%b == 1%b)
        {
            ok = true;
        }
        else
        {
            if(a>1)
            {
                ll mul = a;
                while (mul <= n)
                {
                    if(mul%b == n%b)
                    {
                        ok = true;
                        break;
                    }
                    
                    mul *= a;
                }
            } 
        }
        
        if(ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
	}

    return 0;
}
