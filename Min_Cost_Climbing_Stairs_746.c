int menor(int a, int b){
    if (a<b){
        return a;
    }
    else{
    return b;
    }
}

int minCostClimbingStairs(int* cost, int costSize){
    int nums[costSize];

    //C1 nums[0]=10  nums[1]=15
    //C2 nums[0]=1  nums[1]=100

    nums[0]=cost[0];
    nums[1]=cost[1]; 

    for(int i=2; i<costSize; i++){

        //C1 nums[2] = 20 + 10; (costSize = 3, so it repeats zero times because i<costSize)

        //C2 (costSize = 10) nums[2] = 1 + 1 = 2; when i=3, nums[3]=1+menor(2,100) = 3; when i=4, nums[4]=1+menor(3,2) = 3; 
        //when i=5, nums[5]=100+menor(3,3); when i=6, nums[6]=1+(103,3)=4, nums[7]=1+(4,103)=5, nums[8]=100+(5,4)=104, nums[9]=1+(104,5)=6
      
        nums[i] = cost[i] + menor(nums[i-1], nums[i-2]);
    }

    //C1 nums[costSize-1] = nums[2] = 30 ; nums[costSize-2] = nums[1] = 15 

    //C2 nums[costSize-1] = nums[9] = 6 ; nums[costSize-2] = nums[8] = 104 

    return (menor(nums[costSize-1],nums[costSize-2]));
}
