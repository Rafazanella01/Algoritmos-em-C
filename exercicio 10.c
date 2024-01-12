#include <stdio.h>

void main()
{

int n, i, produto;

printf("deseja a tabuada de qual valor ?");
scanf("%d", &n);

for (i = 1; i <= 10; i++) {
    produto = n * i;
    printf("%d x %d = %d\n", n, i, produto);

}


 return 0;
}
