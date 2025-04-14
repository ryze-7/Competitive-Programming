class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int ans = INT_MIN ;
        int initialSum = 0;
        
        for(int i=0; i<k; i++) {
            initialSum+=arr[i];
        }
        
        ans = initialSum;
        for(int i=k; i<arr.size(); i++) {
            initialSum += arr[i]-arr[i-k];
            ans = max(ans,initialSum);
        }
        
        return ans;
    }
};
