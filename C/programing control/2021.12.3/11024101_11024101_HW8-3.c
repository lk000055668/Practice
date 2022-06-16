#include<stdio.h> //夹繷郎
#include<time.h> //夹繷郎
#include<stdlib.h> //夹繷郎

int main() //ㄧΑ
{
    int c,p,total; //c p total 俱计跑计
    srand(time(NULL)); //砞﹚睹计贺絏
    total = 0; //盢total结ぉ0
    printf("3籔8计:\n"); // 3籔8...传︽
    for(c=1;c<=100;c++) //c癬﹍1 c<100?
    {
        p = rand()% 200 +1; //盢1-200睹计结ぉp
        if(p % 24 == 0) //p % 24 = 0?
        {
            printf("%d\n",p); //p 传︽
            total = total + p; //盢 total + p结ぉtotal
        }
    }
    printf("100睹计い琌3籔8计羆㎝:%d",total); // 100睹计...
    return 0; //肚0
}
