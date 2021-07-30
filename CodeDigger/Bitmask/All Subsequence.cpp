/*
Author: rafa45
Date: 20 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

void print_sequence(string s, int i){
    int idx = 0;

    while(i>0){
        if(i&1) printf("%c", s[idx]);
        idx++;
        i>>=1;
    }

    printf("\n");
}

int main()
{
    string s = "xyz";

    int n = s.size();
    int range = (1<<n)-1;

    for(int i=1; i<=range; i++){
        print_sequence(s, i);
    }

    return 0;
}
