class Solution {
public:
    bool judgeCircle(string moves) {
        int x,y;
        x=y=0;
        int l=moves.size();

        for(int i=0;i<l;i++)
        {
            if(moves[i]=='U')
            {
                y++;
            }
            if(moves[i]=='D')
            {
                y--;
            }
            if(moves[i]=='L')
            {
                x--;
            }
            if(moves[i]=='R')
            {
                x++;
            }
        }

        if((x==0)&&(y==0))
        {
            return true;
        }
        else  return false;
        
    }
};
