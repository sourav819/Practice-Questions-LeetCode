class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int ans=0;
        for(int i=0; i<operations.size(); i++)
        {
            string temp=operations[i];
            if(temp[1]=='+')
                ans+=1;
            else
                ans-=1;
            
        }
        return ans;
        
    }
};