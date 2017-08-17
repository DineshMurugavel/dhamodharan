#include <stdio.h>
int main()
{
    int n1, n2, minM;
    cout<<"Enter two positive integers ";
    cin>>"%d %d", &n1, &n2;
    minM = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( minM%n1==0 && minM%n2==0 )
        {
            cout<<"The LCM of %d and %d is %d.", n1, n2,minM;
            break;
        }
        ++minM;
    }
    return 0;
}
