class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int l=score.size();
        vector<string> answer(l);

        string temp[3]={"Gold Medal","Silver Medal","Bronze Medal"};

        for(int i=0;i<l;i++)
        {
            int max=-99;
            int c=0;
            for(int j=0;j<l;j++)
            {
                if(max<score[j])
                {
                    max=score[j];
                    c=j;
                }
            }

            int a=i+1;
            score[c]=-9;
            if(i<3)
            {
                answer[c]=temp[i];
            }
            else answer[c]=to_string(a);
        }
          return answer;

    }
};
