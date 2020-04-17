#include <stdio.h>

int main()
{
int array[10][10];
for(int i=0; i<10; i++)
{
for(int j=0; j<10; j++)
{
array[i][j] = i+j;
}
}
  
printf("\nsubscript: \n\n");
for(int i=0; i<10; i++)
{
for(int j=0; j<10; j++)
{

printf("%4d", array[i][j]);
}
printf("\n");
}
  

printf("\npointer: \n\n");
for(int i=0; i<10; i++)
{
for(int j=0; j<10; j++)
{
printf("%4d", *(*(array + i) + j));
}
printf("\n");
}

return 0;
}