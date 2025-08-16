// User function Template for C++

bool prime(int n) {
    if(n==1)
        return false;
    // Write your code here
    for(int i = 2 ; i*i<= n ; i++){
        if(n%i==0)
            return false;
    }
    return true;
    // returns a boolean value
}