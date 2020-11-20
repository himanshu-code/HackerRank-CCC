#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct date{
    int d,m,y;
};
int cmp(struct date *a, struct date *b){
    if(a->y >b->y)return 1;
    else if(a->y< b->y) return -1;
    else if(a->m > b->m)return 1;
    else if(a->m < b->m)return -1;
    else return a->d -b->d;
}
int main() {

      int n;
    scanf("%d",&n);
    struct date a[n];
    for(int i=0;i<n;i++)scanf("%d %d %d",&a[i].d,&a[i].m,&a[i].y);
    qsort(a,n,sizeof(struct date),cmp);
    for(int i=0;i<n;i++)printf("%d %d %d\n",a[i].d,a[i].m,a[i].y);
    return 0;
}