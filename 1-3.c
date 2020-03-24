/* 1-5 */
/*************************
 * ***********************/

#include <stdio.h>
#include <stdlib.h>

typedef struct st{
   int h;
   int m;
   int s;
}ST;

int main()
{
    ST st1,st2,a;
    scanf("%d %d %d",&st1.h,&st1.m,&st1.s);
    scanf("%d %d %d",&st2.h,&st2.m,&st2.s);
    
    a.h=st2.h-st1.h;
    if(st2.m-st1.m>=0)
        a.m=st2.m-st1.m;
    else{
        a.m=st2.m+60-st1.m;
        --a.h;
    }
    if(st2.s-st1.s>=0)
        a.s=st2.s-st1.s;
    else{
        a.s=st2.s+60-st1.s;
        --a.m;
        if(a.m<0){
            --a.h;
            a.m+=60;
        }
    }
    printf("%d %d %d",a.h,a.m,a.s);
    return 0;
}
