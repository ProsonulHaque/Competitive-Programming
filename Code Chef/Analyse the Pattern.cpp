#include<bits/stdc++.h>
using namespace std;

void solve(long long n){
    int i=0;
    string ptrn[7]={"S",
                    "SS",
                    "SSE",
                    "SSEC",
                    "SSE",
                    "SS",
                    "S"};


    int indx = ((n-1)%7);
    string ascii = ptrn[indx];

    for(i=0; i<ascii.size(); i++){
        printf("%d ", ascii[i]);
    }
    cout << "\n";
}

int main(){
    int t=0;
    long long n;
    cin >> t;

    if(t>0){
        while(t--){
            cin >> n;
            if(n>0) solve(n);
            else continue;
        }
    }

    return 0;
}


