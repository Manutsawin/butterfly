#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
int numloop(int num);
int main()
{
    struct data
    {
        int num, loop, loop2, x1, x2, sp, c, slen;
    }num;
    num.x1 = 1;
    num.x2 = 1;
    num.c = 0;
    char s[101];
    scanf("%d", &num.num);
    scanf("%s", &s);
    num.slen = strlen(s);
    num.sp = (num.num - 1) + (num.num - 2);
    for (num.loop2 = 0; num.loop2 < numloop(num.num); num.loop2++)
    {
        for (num.loop = 0; num.loop < num.x1; num.loop++)
        {
            printf("%c ", s[num.c]);
            num.c++;
            if (num.c == num.slen)
            {
                num.c = 0;
            }
        }
        for (num.loop = 0; num.loop < num.sp; num.loop++)
        {
            printf("  ");
        }
        for (num.loop = 0; num.loop < num.x2; num.loop++)
        {
            printf("%c ", s[num.c]);
            num.c++;
            if (num.c == num.slen)
            {
                num.c = 0;
            }
        }
        if (num.loop2 <= num.num - 1)
        {
            num.x1++;
            num.x2++;
            num.sp -= 2;
        }
        else
        {
            num.x1--;
            num.x2--;
            num.sp += 2;
        }

        if (num.loop2 == num.num - 1)
        {
            num.x1 = num.num - 1;
            num.x2 = num.num - 1;
            num.sp = 1;
        }
        if (num.loop2 == num.num - 2)
        {
            num.x1--;
        }
        printf("\n");
    }

    return 0;
}
int numloop(int num)
{
    num = (num * 2) - 1;
    return num;
}
