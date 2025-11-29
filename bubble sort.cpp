#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
   
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
  
    int left=0;
    int right=n-1;
    int mid;
    int ans=-1;
    
    int key;
    scanf("%d",&key);
 
    while(left<=right)
    {
        mid=(left+right)/2;
        
        if(a[mid]==key)
        {
           ans=mid;
           break;
        }
        
        if(key<a[mid])
        {
            right=mid-1;
        }
        else if(key>a[mid])
        {
            left=mid+1;
        }
    }
    
    printf("%d",ans);
    
    
    return 0;
}
