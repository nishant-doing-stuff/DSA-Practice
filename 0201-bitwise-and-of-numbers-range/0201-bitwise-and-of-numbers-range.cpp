class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==right)
            return right;
        if(floor(log2(left))!=floor(log2(right)))
            return 0;
        else
        {
            // some test cases are failing 
           int ans = 0;
           while(floor(log2(left))>0){
            int leftLog = floor(log2(left));
            int rightLog = floor(log2(right));
            cout<<leftLog<<" "<<rightLog<<endl;
            if(leftLog == rightLog){
                ans |= (1<<leftLog);
                left = left^(1<<leftLog);
                // cout<<"dividingBy " << (1<<leftLog);
                right = right^(1<<rightLog);
            }
            else{
                break;
            }
        }
           return ans;
        }
    }
    //  100000000 //8
    //  010000000 //7
    //  000100000 //5

    //416 110100000 // 8
    //436 110110100 // 8 

    //160 10100000 // 7
    //180 10110100 // 7

    //32 100000 //5
    //52 110100 //5

    //32 00000 //5
    //52 10100 //5
};