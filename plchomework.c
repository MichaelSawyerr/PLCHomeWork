#include <stdio.h>
#include<string.h>
int main()
{
char str[100];
FILE *iptfle;
int i,len,j=0,k=0;
  
if ((iptfile = fopen("file.txt", "r")) == NULL) {
printf("Error.");
return 0;
}
fscanf(iptfle, "%[^\n]", str);
printf("File data:\n%s", str);
len = strlen(str);
for(i=0;i<len;i++)
{
if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z')||(str[i]>='0'&& str[i]<='9'))
{
printf("%c",str[i]);
}
else if(str[i] == ' ')
{
printf("\n");
}
else
{
printf("\n%c\n",str[i]);
}
  
}
fclose(iptfle);
return 0;
}
