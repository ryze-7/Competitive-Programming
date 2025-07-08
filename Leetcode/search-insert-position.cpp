class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int mid;
        while(h-l > 1) {
            mid = (h+l)/2;
            if (nums[mid] < target) {
                l=mid+1;
            }
            else {
                h=mid;
            }
        }
        if (nums[l] >= target) {
            return l;
        }
        if (nums[h] >= target) {
            return h;
        }
        return nums.size();
    }
};