#include <stdio.h>
#include <string.h>

int main ()
{
    int x,len;
    scanf("%d",&x);

    char a[1000];

    for (int i=0; i<x; i++)
    {
        scanf("%s",a);
        len=strlen(a)-1;
        if (len<10)
        {
            printf("%s\n",a);
        }
        else if (len>=10)
        {
            printf("%c%d%c\n",a[0],len-1,a[len]);
        }
    }

    return 0;
}
