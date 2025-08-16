class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        // if(n==1)
        //     {cout<<"1";
            
        //     return;}
        vector<int> rest ; 
        for(int i = 1;i*i<=n;i++){
            if(n%i==0){
                cout<<i<<" ";
                if((n/i )!= i )
                rest.push_back(n/i);
            }
        }
        for(int i = rest.size()-1;i>=0;i--){
            cout<<rest[i]<<" ";
        }
    }
};