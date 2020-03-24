/* 1-1 */
#include <stdio.h>
int sum(int n){
    
    return (1+n)*n/2;
}
int main()
{
    int N=0,summ=0;
    scanf("%d",&N);
    for(int i=1;i<=N;++i)
        summ+=sum(i);
    printf("%d",summ);
    return 0;
}