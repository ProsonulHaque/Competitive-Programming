#include<bits/stdc++.h>
using namespace std;

int main(){
    int T, i, j, cnt, largest, len, idx;
    string cat;

    cin >> T;

    while(T--){
        cin >> cat;
        len = cat.size();
        largest = 1;
        idx = 0;
        for(i=0; i<len-1; i++){
            cnt = 1;
            for(j=i+1; j<len; j++){
                if(cat[i]==cat[j]){
                    cnt += 1;
                }
            }
            if(cnt>largest){
                largest = cnt;
                idx = i;
            }
            else if(cnt==largest && cat[i]<cat[idx]){
                idx = i;
            }
        }

        if(largest==1 && cat[len-1]<cat[idx]){
            idx = len-1;
        }
        cout << largest << " " << cat[idx] << "\n";
    }

    return 0;
}
