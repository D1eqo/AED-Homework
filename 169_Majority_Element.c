#include <stdio.h>
#include <stdlib.h>

//It works but it takes too long

int majorityElement(int* nums, int numsSize){
  int halfSize = numsSize/2;
  int temp=0, c=0, result=0, index=0;
  
  for(int i=0;i<numsSize;i++){
    c = 0;
    temp = nums[i];
    for(int j=0;j<numsSize;j++){
      if(temp==nums[j]){
        c++;
      }
    }
    if(c>halfSize){
      index=i;
      return nums[index];
    }
  }
  return nums[index];
}

int main(){
    int nums[3] = {3,2,2};
    int numsSize = 3;
    int r = majorityElement(nums, numsSize);
    printf("%d", r);
}

// This version is much more efficient
int majorityElement(int* nums, int numsSize) {
    int candidate = nums[0];
    int count = 1;

    // Find a candidate for the majority element.
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }
    }

    // Verify if the candidate is the majority element.
    count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > numsSize / 2) {
        return candidate;
    } else {
        // There is no majority element in the array.
        return -1; // You can return any suitable value or handle this case as needed.
    }
}
