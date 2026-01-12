#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int maxa, maxe, maxo;
  maxa=maxe=maxo=0;
  
  int and, or, exor;
  for(int i=1;i<=n;i++)
  {
    for(int j=i+1;j<=n;j++)
    {
        and=i&j;
        exor=i^j;
        or=i|j;
        
        if((maxa<and)&&(and<k)) 
        {
            maxa=and;
        }
        if((maxe<exor)&&(exor<k)) 
        {
            maxe=exor;
        }
        if((maxo<or)&&(or<k)) 
        {
            maxo=or;
        }
    }
  }
  
  printf("%d\n%d\n%d",maxa,maxo,maxe);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
