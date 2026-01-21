class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n = nums.size();
        int j = 0;   // points to where next non-zero should go
        
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
