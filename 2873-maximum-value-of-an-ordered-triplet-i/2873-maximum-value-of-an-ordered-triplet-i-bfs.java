class Solution {
    public long maximumTripletValue(int[] nums) {
        long sum = 0;
        long max = 0;
        for(int i = 0 ; i < nums.length ; i++){
            for(int j = i+1 ; j < nums.length ; j++){
                for(int k = j+1 ; k < nums.length ; k++){
                    sum = (((long)nums[i] - (long)nums[j]) * (long)nums[k]);
                    if(sum > max){
                        max = sum;
                    }
                }
            }
        }
        return max;
    }
}