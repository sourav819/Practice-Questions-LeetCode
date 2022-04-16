class Solution {
public:
    string toLowerCase(string s) 
    {
        for(int i=0; i<=s.length()-1; i++)
        {
            if(isupper(s[i]))
                s[i]=tolower(s[i]);
        }
        return s;
        
    }
};