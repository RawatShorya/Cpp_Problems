//Leetcode

class Solution {
public:
    int trap(vector<int>& v) {
        
        int n = v.size();
        int left[n];
        int right[n];
        
        int mx = v[0];
        left[0] = mx;
        for(int i=1;i<n;i++)
        {
            mx = max(mx, v[i]);
            left[i] = mx;
        }
        
        int mx1 = v[n-1];
        right[n-1] = mx1;
        for(int i=n-2;i>=0;i--)
        {
            mx1 = max(mx1, v[i]);
            right[i] = mx1;
        }
        
        int sum=0;
        int mn2=0;
        for(int i=0;i<n;i++)
        {
            mn2 = min(left[i], right[i]);
            sum += mn2 - v[i];
        }
        
        return sum;
        
    }
};