/*
Author: rafa45
Date: 04 Jul 2021
*/

#include<bits/stdc++.h>
using namespace std;

#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

////////----------------------------------Code Starts from Here----------------------------------////////

int main()
{
    IOS

    int a, b;
    cin >> a >> b;
    
    if(b>=a && b<=6*a){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}
