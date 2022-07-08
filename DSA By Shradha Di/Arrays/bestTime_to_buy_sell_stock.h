//o(n2) time complexity

// class Solution {
// public:
//     int maxProfit(vector<int>& v) {
        
//         int n = v.size();
//         int maxDiff = 0;
//         for(int i=0; i<n-1;i++)
//         {
//             for(int j =i+1;j<n;j++)
//             {
//                 int currDiff = v[j] - v[i];
//                 maxDiff = max(maxDiff, currDiff);
//             }
//         }
//         return maxDiff;
//     }
// };

//o(n) extra space (aux array)

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int aux[n];
//         int mx = prices[n-1];
//         for(int i = n-1; i>=0; i--){
//             mx = max(prices[i], mx);
//             aux[i] = mx;
//         }
//         int maxDiff= 0;
//         for(int i=0;i<n;i++)
//         {
//             int currDiff = aux[i] - prices[i];
//             maxDiff = max(maxDiff, currDiff);
//         }
        
//         return maxDiff;
//     }
// };


//o(n) timecomplexity, o(1) space complexity

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int minSoFar = INT_MAX;
//         int maxProfit = 0;
        
//         for(int i=0;i<prices.size();i++)
//         {
//             minSoFar = min(prices[i], minSoFar);
//             maxProfit = max(maxProfit, (prices[i]-minSoFar));
//         }
//         return maxProfit;
//     }
// };