bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    if(flowerbedSize==1 && flowerbed[0]==0){
        return true;
    }

    if(flowerbed[0]==0 && flowerbed[1]==0){
        n--;
        flowerbed[0]=1;
    }

    for(int i=1;i<flowerbedSize-1;i++){
        if (flowerbed[i]==0 && n!=0){
            if (flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
        }
    }

    if(flowerbedSize>=2 && flowerbed[flowerbedSize-1]==0 && flowerbed[flowerbedSize-2]==0){
        n--;
    }

    if(n<=0){
        return true;
    }
    else return false;
}
