class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;   // handle d > n
        
        vector<int> temp(d);

        // Store first d elements
        for(int i = 0; i < d; i++) {
            temp[i] = arr[i];
        }

        // Shift remaining elements to left
        for(int i = d; i < n; i++) {
            arr[i - d] = arr[i];
        }

        // Copy temp back to end
        for(int i = 0; i < d; i++) {
            arr[n - d + i] = temp[i];
        }
    }
};
