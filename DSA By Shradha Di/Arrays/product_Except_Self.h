class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> op;
        int n = nums.size();
        
        int prod=1;
        for(int i=0;i<n;i++)
        {
            prod *= nums[i];
            op.push_back(prod); //Left array
        }
        
        op[n-1] = op[n-2];
        
        int rightProd = 1;
        for(int i =n-1;i>0;i--)
        {
            op[i] = op[i-1]*rightProd;
            rightProd*=nums[i];
        }
         op[0] = rightProd;
        return op;
        
    }
};