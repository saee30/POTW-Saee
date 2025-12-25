#include <bits/stdc++.h>
#include <string.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    string c="SOS";
    int l= s.length();
    int count=0;
    
    for(int i=0;i<l;i++)
    {
        if(s[i]!=c[i%3])
        {
            count++;
        }
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
