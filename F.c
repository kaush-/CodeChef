#include<stdio.h>
#include<string.h>

int main(void)
{
    int T;
    char arr[100012];
    scanf("%d",&T);

    while(T--)
    {
        int X,Y;

        scanf("%d %d", &X, &Y);

        int move = 0;
        if(X<0)
            move++;

        printf("%d\n", abs(X)+abs(Y)+move);


    }
    return 0;
}
