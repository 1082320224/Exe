#include <stdio.h>

int main()
{
    int a,b;
    printf(" please input a \n");
    scanf("%d",&a);
     printf(" please input b \n");
    scanf("%d",&b);
    
    if(a > b)
        printf(" a > b");
    else
        printf(" a <= b");
        
    return 0;
}
