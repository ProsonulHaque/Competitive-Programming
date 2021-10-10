#include<bits/stdc++.h>
using namespace std;

long long fib(int n){
    if(n<=1) return n;

    long long a = 0, b = 1, c = 0;

    for(int i=2; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main(){
    //print n'th fibonacci number
    int n; cin >> n;

    cout << "Ans: "
         << fib(n);

    return 0;
}