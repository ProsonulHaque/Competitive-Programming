#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {

        int bc = boardingCost;
        int rc = runningCost;
        int i=0, cc=0, wc=0, ec=0;
        long long cp=0;
        vector<long long> profit;

        for(i=0; i<customers.size(); i++){
            if(customers[i]>=4){
                cc += 4;
                wc += customers[i]-4;
            }
            else{
                ec = 4-customers[i];
                if(wc>=ec){
                    cc += 4;
                    wc -= ec;
                }
                else{
                    cc += customers[i]+wc;
                    wc = 0;
                }
            }
            cp = cc*bc-(i+1)*rc;
            profit.push_back(cp);
        }

        while(wc>0){
            if(wc>=4){
                cc += 4;
                wc -= 4;
            }
            else{
                cc += wc;
                wc = 0;
            }
            cp = cc*bc-(i+1)*rc;
            profit.push_back(cp);
            i++;
        }

        long long maxElement = profit[0];
        int maxElementIndex = 0;

        for(i=0; i<profit.size(); i++){
            if(profit[i]>maxElement){
                maxElement = profit[i];
                maxElementIndex = i;
            }
        }
        /*for(i=0; i<profit.size(); i++){
            cout << profit[i] << " ";
        }*/

        if(maxElement>0) return maxElementIndex+1;
        else return -1;
    }
};

int main(){
    vector<int> customers={10, 10, 1, 0, 0};
    int boardingCost=4;
    int runningCost=4;

    Solution s;
    cout << s.minOperationsMaxProfit(customers, boardingCost, runningCost) << endl;

    return 0;
}
