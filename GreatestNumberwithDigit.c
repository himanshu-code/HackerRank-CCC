#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(char *a,char *b){
    return *b-*a;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[11];
    scanf("%s",str);
    qsort(str,strlen(str),1,cmp);
    printf("%s",str);
    return 0;
}
