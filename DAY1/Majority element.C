int majorityElement(int* nums, int numsSize){
    int a=arr[0];
    int aCount=1;
    for(int i=1;i<numsSize;i++){
        if(arr[i]==a){
            a=arr[i];
            aCount=1;
        }
    }
    return a;
}
