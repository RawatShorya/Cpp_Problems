 
 class Solutions{
 public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        for(int i = 1;i<s.size();i++)
        {
            if(s[i] == s[i-1])
            s[i-1] = ' ';
        }
        
        int space =0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != ' ')
            {
                swap(s[i], s[space]);
                space++;
            }
        }
        return s;
        
    }
};