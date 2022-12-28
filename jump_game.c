int check(int *arr,int s){
    int j=s;
    while(j>=0){
        if(s-j<arr[j]){
            return 1;
        }
        j--;
    }
    return 0;
}
bool canJump(int* nums, int numsSize){
   for(int i=0;i<numsSize-1;i++){
       if(nums[i]==0){
       if(check(nums,i)==0){
           return false;
       }
       }
   }
   return true;
}