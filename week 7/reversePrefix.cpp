class Solution {
public:
    string reversePrefix(string word, char ch) {
        int a;
        bool b=false;
        for(int i=0;i<word.length();i++)
        {
            if(ch==word[i])
            {
                a=i;
                b=true;
                break;
            }
        }
        if(b)
        {
            string temp;
            temp.assign(word,0,a+1);
            reverse(temp.begin(),temp.end());

            word.replace(0,a+1,temp);
        }
        return word;
        
    }
};
