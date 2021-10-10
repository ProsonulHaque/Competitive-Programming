#include<bits/stdc++.h>
#define ll long long

using namespace std;

int size = 1000;
vector<ll> memo(size+1, -1);

ll fib(int n){
    if(memo[n] != -1)
        return memo[n];

    ll result = 0;

    if(n<=1) 
        result = n;
    else 
        result = fib(n-1)+fib(n-2);
    
    memo[n] = result;
    
    return result;
}


int main(){
    //print n'th fibonacci number
    int n; cin >> n;

    cout << "Ans: "
         << fib(n);
    
    return 0;
}