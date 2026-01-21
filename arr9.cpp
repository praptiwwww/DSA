class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size();
        int m=b.size();
        int i;
        
        set<int>st;
        
        for( i=0;i<n;i++)
        {
            st.insert(a[i]);
        }
        //insertion in set 1
        
        for( i=0;i<m;i++)
        {
            st.insert(b[i]);
        }
        //insertion in set 2
        
        vector<int>temp;
        
        for(auto it:st)
        {
            temp.push_back(it);
        }
        
        return temp;
    }
};