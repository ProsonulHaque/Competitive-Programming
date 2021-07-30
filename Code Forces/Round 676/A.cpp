/*
Author: rafa45
Date: 18 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

ll findX(ll A, ll B)
{
    ll j = 0, x = 0;

    while (A || B) {

        if ((A & 1) && (B & 1)) {
            x += (1 << j);
        }

        A >>= 1;
        B >>= 1;
        j += 1;
    }

    return x;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        ll A, B;
        cin >> A >> B;
        ll X = findX(A, B);

        cout << (A ^ X) + (B ^ X) << endl;
    }

    return 0;
}
