#include<stdio.h>
#include<conio.h>
int main()
{
char str[200];
int i,ch,blankspace;
blankspace=ch=0;
printf("Enter a string in multiple lines terminated with $ :\n");
scanf("%[^$]", str);


for(i=0; str[i]!='\0'; i++)
{
if(str[i]=='\t')
{
ch++;
}
else if(str[i]==' ')
{
blankspace++;	
}
else
{
ch++;
}
}

printf("\nCharacter counts = %d\n",ch);
printf("\nblankspace counts = %d\n",blankspace);

return 0;
}