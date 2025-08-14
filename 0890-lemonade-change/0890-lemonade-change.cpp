class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int curBills [3] = {0,0,0} ;
        for(int i = 0;i<bills.size();i++){
            int k = bills[i] == 5 ? 0 : (bills[i]==10 ? 1 : 2);
            curBills[k]++;
            int returnVal = bills[i]-5;
            if(returnVal == 0)
                continue;
            if(returnVal == 5){
                if(curBills[0]>0){
                    curBills[0]--;
                }
                else 
                    return false;
            }
            if(returnVal == 15){
                if(curBills[1]>0 && curBills[0]>0){
                    curBills[1]--;
                    curBills[0]--;
                }
                else if (curBills[0]>2){
                    curBills[0]-=3;
                }
                else
                    return false;
            }
        }
        return true;
    }
};