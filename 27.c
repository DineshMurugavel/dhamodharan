#include <stdio.h>
int main()
{
    int n1, n2, minM;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    minM = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( minM%n1==0 && minM%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,minM);
            break;
        }
        ++minM;
    }
    return 0;
}
