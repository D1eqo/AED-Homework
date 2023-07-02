int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int *out=malloc(sizeof(int)*2);
    *returnSize=2;

    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){

            if(nums[i]+nums[j] == target){
                out[0]=i;
                out[1]=j;
            }
        }
    }

    return out;
}
