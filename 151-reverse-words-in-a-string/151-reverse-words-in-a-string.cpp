
class Solution 
{
public:
    
    string reverse(string &s, int start, int end)
    {
        while(start<end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        return s;
    }
    string reverseWords(string s) 
    {
        int start=0, j;
        int end= s.length();
        // reversing the entire string
        reverse(s, start, end-1);
        
        while(start<end)
        {
            int j=start;
            while(j<end && s[j]==' ')
            {
                j++;
            }
            int count=0;
            while(j<end && s[j]!=' ')
            {
                count++;
                j++;
            }
            if(j>end)
                break;
            j--;
            if(start==0)
            {
                reverse(s, start, j);
                
            }
            else
            {
                reverse(s, start+1, j);
            }
            if(count==0)
                start=j+1;
            else
                start=count+start;
        
        }
        j=end-1;
        while(j>=0 && s[j]==' ')
        {
            j--;
            s.pop_back();
        }
        return s;
        
    }
};