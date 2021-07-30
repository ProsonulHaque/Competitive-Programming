/*
Author: rafa45
Date: 19 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=200002;

int main()
{
    bitset<32> bs(8);
    cout << bs << endl;
    cout << bs.to_ulong() << endl;
    //bs.set();
    //bs.reset();
    bs.test(3) ? cout << "True" << endl : cout << "False" << endl;
    cout << bs << endl;

    return 0;
}
