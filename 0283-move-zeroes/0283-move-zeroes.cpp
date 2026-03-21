class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;

        // Move non-zero elements forward
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[k] = nums[i];
                k++;
            }
        }

        // Fill remaining with zeros
        while(k < nums.size()){
            nums[k] = 0;
            k++;
        }
    }
};