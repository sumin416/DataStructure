/* 1-7 */
/*************************
 * ***********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N=0,*arr1,*arr2;
    scanf("%d",&N);
    arr1=(int *)malloc(sizeof(int)*N);
    arr2=(int *)malloc(sizeof(int)*N);
    
    for(i=0;i<N;++i)
        scanf("%d",&arr1[i]);
    for(i=0;i<N;++i)
        scanf("%d",&arr2[i]);
        
    for(i=0;i<N;++i){
        printf("%d ",arr1[i]+arr2[N-1-i]);
    }
    return 0;
}
