#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    n=n&(n-1)?printf("no"):printf("yes");
    }
    main();

    return 0;
}
