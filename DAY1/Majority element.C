int majorityElement(int* nums, int numsSize){
    int a=nums[0];
    int aCount=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i]==a){
            ++aCount;        
        }else{
            --aCount;
        }
        if(aCount==0){
            a=nums[i];
            aCount=1;
        }
    }
    return a;
}
