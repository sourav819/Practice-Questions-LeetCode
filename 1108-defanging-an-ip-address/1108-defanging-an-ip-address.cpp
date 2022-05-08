class Solution {
public:
    string defangIPaddr(string address) 
    {
        string ans;
        string temp="[.]";
        for(int i=0;i<address.size();i++)
        {
            if(address[i]=='.')
                ans+=temp;
            else
                ans+=address[i];
        }
        return ans;
        
    }
};