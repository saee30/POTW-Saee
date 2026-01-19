class Solution {
public:
    bool isValid(string s) {
        int l=s.size();
        stack<char> p;
        
        for(int i=0;i<l;i++)
        {
            if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
            {
                p.push(s[i]);
            }
            else
            {
                if(p.empty())
                {
                    return false;
                }

                char c=p.top();
                p.pop();

                if((s[i]==')'&&c!='(')||(s[i]=='}'&&c!='{')||(s[i]==']'&&c!='['))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
