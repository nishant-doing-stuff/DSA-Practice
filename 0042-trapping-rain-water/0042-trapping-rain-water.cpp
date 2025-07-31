class Solution {
public:
    int trap(vector<int>& height){
        int n = height.size();
        if(n<3)
            return 0;
        int li = 0;
        int ri = n-1;
        int lmax = 0;
        int rmax = 0;
        int ans = 0;
        while(li<ri){
            if(height[li]<height[ri]){
                if(height[li]>lmax) // if bigger wall 
                    lmax = height[li]; 
                else // smaller wall 
                    ans += lmax - height[li];

                li++;
            }
            else{
                if(height[ri]>rmax)
                    rmax = height[ri];
                else 
                    ans+= rmax - height[ri];
                ri--;
            }
        }
        return ans;
    }


// time O(N^2)
// space O(1)
    int trap_sol2(vector<int>& height) {
        if(height.size()<2)
            return 0;
        int n = height.size();
        int leftIndex = 0;
        int ans = 0;
        while(leftIndex < n){
            int rightIndex = leftIndex+1;
            int leftHeight = height[leftIndex];
            int localMaximaaIndex = rightIndex;
            while(rightIndex<n ){
                // edget no bigger or equal height mountain on the right , 
                // so we have to make work with the local maxima
                if(height[localMaximaaIndex] < height[rightIndex]) {
                    localMaximaaIndex = rightIndex;
                }
                if(height[localMaximaaIndex]>=leftHeight)
                    break;
                rightIndex++;
            }
            rightIndex = localMaximaaIndex;
            if(rightIndex == n)
            leftIndex++;
else{


            
                int mountainsBetweenLeftAndRightVal = 0;
                for(int i = leftIndex+1; i<rightIndex ; i++){
                    mountainsBetweenLeftAndRightVal+= height[i];
                }
                cout<<rightIndex<<endl;
                int vol = (rightIndex - leftIndex - 1) * min(height[leftIndex],height[rightIndex]) - mountainsBetweenLeftAndRightVal;
                if(vol>0)
                    ans+= vol;
                leftIndex = rightIndex;
}
        }
        return ans;
    }
};