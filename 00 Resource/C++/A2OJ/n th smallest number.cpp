#include<iostream>
using namespace std;

int main(){
    int T, i, j, temp;
    int num[10];

    cin >> T;

    while(T--){
        for(i=0; i<10; i++){
            cin >> num[i];
        }
        for(i=0; i<10; i++){
            for(j=0; j<9; j++){
                if(num[j+1]<num[j]){
                    temp = num[j+1];
                    num[j+1] = num[j];
                    num[j] = temp;
                }
            }
        }
        cout << num[1] << "\n";
    }

    return 0;
}
