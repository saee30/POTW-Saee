#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    int i=0;
    int len=1;
    int length=n;
    while(length>0)
    {
        length%2; 
        length=length/2;
        len++; 
    }
      
    vector<int> bin(len);
    while(n>0)
    {
        bin[i]=n%2; 
        n=n/2;
        i++;   
    }
    
    reverse(bin.begin(), bin.end());
     
    int max1=0;
    int j=0;
    for(i=0;i<bin.size();i++)
    {
        int b=bin[i];
        if(b==1)
        {
            j++;
            max1=max(max1,j);
        }
        else j=0;
    }
    cout<<max1;
   
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
