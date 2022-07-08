class Solution {
public:
    void nextPermutation(vector<int>& v) {
        
        int n = v.size();
        if(n == 1){
            return;
        }
        //I found the largest element
        
        int lastInc = -1;
        int i = 1;
        while(i<n)
        {
            if(v[i]>v[i-1])
            {
                lastInc = i;
            }
            i+=1;
        }
        
        //Now i will check weather the array is in in descending order
        
        if(lastInc == -1){
            sort(v.begin(), v.end());
            return;
        }

        //Special Case
        
        int index = lastInc;
        
        for(i=lastInc; i<n; i++)
        {
            if(v[i]>v[lastInc-1] and v[i]<v[index] ){
                index = i;
            }
        }
        
        swap(v[lastInc-1], v[index]);
        sort(v.begin()+lastInc, v.end());
        
    }
};