#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        a = a - 'a' + 'A';
        printf("%c", a);
    }
    else if (a >= 'A' && a <= 'Z')
    {
        a = a - 'A' + 'a';
        printf("%c", a);
    }
}
/*int n;
scanf("%d",&n);
if(a>='a' && )


*/