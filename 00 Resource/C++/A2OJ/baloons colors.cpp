#include<bits/stdc++.h>
using namespace std;

int main(){
    int T, i, n, x, y, col, point;
    cin >> T;

    while(T--){
        cin >> n >> x >> y;
        point = 0;

        for(i=1; i<=n; i++){
            cin >> col;
            if(i==1 && col==x)  point += 1;
            if(i==n && col==y)  point += 2;
        }

        switch(point){
            case 0: cout << "OKAY" << "\n";
                break;
            case 1: cout << "EASY" << "\n";
                break;
            case 2: cout << "HARD" << "\n";
                break;
            case 3: cout << "BOTH" << "\n";
                break;
        }
    }

    return 0;
}
