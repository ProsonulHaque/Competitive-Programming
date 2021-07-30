/*
Author: rafa45
Date: 18 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=210;

int main()
{
    int i;

    int a[6]={1, 2, 3, 4, 5, 5};
    //Find out the repeated number
    int ans = 1;

    for(i=2; i<=5; i++) ans ^= i;
    for(i=0; i<6; i++) ans ^= a[i];

    cout << "Repeated number is: " << ans << endl;

    return 0;
}
