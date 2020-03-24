/* 1-6 */
/*************************
 * ***********************/

#include <stdio.h>
#include <stdlib.h>
typedef struct st{
   char *name;
   int score;
}ST;

int main()
{
    double avg=0.0;
    char tmp[10];
    ST st[5];
    int i;
    for(i=0;i<5;++i){
        scanf("%s",tmp);
        st[i].name=(char *)malloc(sizeof(char)*sizeof(tmp));
        strcpy(st[i].name,tmp);
        scanf("%d",&st[i].score);
        avg+=st[i].score;
    }
    avg/=5.0;
    for(i=0;i<5;++i){
        if(st[i].score<=avg)
            printf("%s\n",st[i].name);
    }
    return 0;
}
