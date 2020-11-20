#include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <stdlib.h>

int main()
{
int n; 
scanf("%d",&n);
int a[n];

for (int i=0;i<n; i++) scanf ("%d", &a[i]);

int k=a[n-1],i;
        
for(i=n-2;i>=0; i--){
if(a[i]<=k)break;
else a[i+1]=a[i];

}

a[i+1]=k;

for (int i=0; i<n;i++)printf("%d ",a[i]);

return 0;
 }