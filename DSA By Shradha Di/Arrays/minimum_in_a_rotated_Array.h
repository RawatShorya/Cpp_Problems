class Solution {
public:
    int findMin(vector<int>& nums) {
        int res = nums[0];
        int s = 0, e = nums.size()-1;
        while(s<=e){
            if(nums[s]<nums[e])
            {
                res = min(res, nums[s]);
                break;
            }
            
            int m = (s+e)/2;
            res = min(res, nums[m]);
            if(nums[m]>=nums[s]){
                s = m+1;
            }else{
                e = m-1;
            }
        }
        
        return res;
    }
};