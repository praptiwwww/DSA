lass Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0, xor2 = 0;

        // XOR of all numbers from 1 to n
        for(int i = 1; i <= n; i++) {
            xor1 = xor1 ^ i;
        }

        // XOR of all array elements
        for(int i = 0; i < n; i++) {
            xor2 = xor2 ^ nums[i];
        }

        // Missing number
        return xor1 ^ xor2;
    }
};