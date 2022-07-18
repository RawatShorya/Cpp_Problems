class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int ans = nums[0];
        int mi = ans;
        int ma = ans;
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
                swap(mi, ma);
        
        
            mi = min(nums[i], mi*nums[i]);
            ma = max(nums[i], ma*nums[i] );
            ans = max(ans, ma);
            
        }
        
        return ans;
        
        
    }
};