/* 1-2 */
/*************************
 * 배열을 함수 인자로 넘길 때 주소가 넘어간다
 * 인자를 int arr[] 말고 int *p로 넘겨도 같다!
 * ***********************/

#include <stdio.h>

void ABC(int arr[10], int k)
{
    int i,max=k,tmp=0;
    for(i=k;i<10;++i){
        if(arr[k]<arr[i])   max=i;
    }
    
    tmp=arr[max];
    arr[max]=arr[k];
    arr[k]=tmp;
}
int main()
{
    int i,arr[10];
    for(i=0;i<10;++i)
        scanf("%d",&arr[i]);
    for(int i=0;i<10;++i)
        ABC(arr,i);
    for(int i=0;i<10;++i)
        printf("%d ",arr[i]);
    return 0;
}
