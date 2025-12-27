#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    int l= s.length();
    bool c=true;
    
    while(c)
    { 
    c=false;
    for(int i=0;i<l-1;i++)
    {
        if(s[i]==s[i+1])
        {
            for(int j=i;j<l-2;j++)
            {
                s[j]=s[j+2];
            }
          
            c=true;
            l=l-2;
            s.resize(l);
            
            break;
        }
    }
    }
    if(l==0)
    {
        return "Empty String";
    }
    else return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
