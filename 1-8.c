/* 1-8 */
/*************************
 * ***********************/

#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char* name;
    int s1;
    int s2;
    int s3;
    double avg;
}ST;

int main()
{
    int i,N=0;
    char tmp[8];
    ST *st;
    scanf("%d",&N);
    st=(ST *)malloc(sizeof(ST)*N);
    
    for(i=0;i<N;++i){
        scanf("%s",tmp);
        st[i].name=(char *)malloc(sizeof(char)*sizeof(tmp));
        strcpy(st[i].name,tmp);
        scanf("%d %d %d",&st[i].s1,&st[i].s2,&st[i].s3);
        st[i].avg=(st[i].s1+st[i].s2+st[i].s3)/3.0;
    }
    
    for(i=0;i<N;++i){
        
        printf("%s %.1lf ",st[i].name,st[i].avg);
        if(st[i].s1>=90||st[i].s2>=90||st[i].s3>=90){
            printf("GREAT ");
        }
        if(st[i].s1<70||st[i].s2<70||st[i].s3<70){
            printf("BAD ");
        }
        printf("\n");
    }
    
    return 0;
}
