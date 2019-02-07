#include <stdio.h>
int main()
{
    printf("Print all even numbers till: ");
    scanf("%d", &n);
    printf("All even numbers from 1 to %d are: \n", n);
    i=2; 
    while(i<=n)
    {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}
