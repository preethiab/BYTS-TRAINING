class Solution {
    public boolean isPowerOfTwo(int n) {
        boolean res = false;
        if(n==1){
            return true;
        }
        if(n>0 && n%2==0){
            res=isPowerOfTwo(n/2);
        }
        return res;
        
    }
}
