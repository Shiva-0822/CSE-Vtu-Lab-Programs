#include<stdio.h>
int string_length(char str[])
{
int len=0;
while(str[len]!='\0')
{
len++;
}
return len;
}
void string_concant(char str[],char str2[])
{
int i,j;
char str3[30];
for(i=0;i<string_length(str2);j++)
{
i++;
str3[i]='10';
printf("The concatenated string = %s \n",str3);
}
void string_compare(char str1[],charstr2[])
{
int len1,len2;
len1=string_length(str1);
len2=string_length(str2);
if(len1!=len2)
{
printf("The strings are not equal \n");
}
else
{
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=str2[i])
{
printf("The strings are not equal \n");
exit (0);
}
}
printf("The strings are equal \n");
}
}
void main()
{
char str[0],str1[10],str2[10];
int choice,length;
printf("Enter your choice \n");
printf("Enter 1 the string length \n");
printf("Enter 2 the string concatenation \n");
printf("Enter 3 the string comparision");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter a string \n");
sacnf("%s",&str);
length=string_length(str);
printf("The length of the string = %d \n"length);
break;
case 2:printf("Enter first string \n");
scanf("%s",str1);
printf("Enter second string \n");
scanf("%s",str2);
string_concant(str1,str2);
break;
case 3:printf("Enter first string \n");
scanf("%s",str1);
printf("Enter second string \n");
scanf("%s",str2);
string_compare(str1,str2);
break;
default :printf("Invalid choice \n");
}
}