/*
Author: rafa45
Date: 10 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

int main()
{
    char s, t;

    cin >> s >> t;

    if(s=='Y'){
        printf("%c\n", toupper(t));
    }
    else{
        cout << t << endl;
    }

    return 0;
}
