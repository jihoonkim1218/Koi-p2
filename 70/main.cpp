#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
if (a<3||a==12) printf("winter");
else if(a<6) printf("spring");
else if(a<9) printf("summer");
else if(a<12) printf("fall");

    return 0;
}
