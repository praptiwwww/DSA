class Solution {
  public:
    // Function to remove duplicates from the given array.
     removeDuplicates(vector<int> &arr) {
        // codeint i=0;
        int i=0;
        for(int j=1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
        
    }
};