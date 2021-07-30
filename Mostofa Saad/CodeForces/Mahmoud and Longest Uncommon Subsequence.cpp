/*
Author: rafa45
Date: 15 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

int binarySearch(int q, int low, int high, int a[])
{
    if(high<low) return -1;
    int mid = (low+high)/2;
    if(a[mid]==q) return mid;
    if(q>a[mid]) return binarySearch(q, mid+1, high, a);
    else return binarySearch(q, low, mid-1, a);
}

int main()
{
    int i, n, q;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++) cin >> a[i];
    cin >> q;
    int index = binarySearch(q, 0, n-1, a);
    index==-1? printf("Not Found!"):printf("Found at index %d", index);
    return 0;
}
