class Solution {
public:
    string finalString(string s) {
        int l=s.size();
        string temp="";

        for(int j=0;j<l;j++)
        {
            if(s[j]=='i')
            {
                reverse(temp.begin(), temp.end());
            }
            else temp.push_back(s[j]);
        }

        return temp;
    }
};
