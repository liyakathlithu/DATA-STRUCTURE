#include<stdio.h>
#include<string.h>
void unin(char*,char*,char*);
void intersection(char*,char*,char*);
void difference(char*,char*,char*);
void main()
{
char s1[10],s2[10],s3[20];
int i,l;
printf("Enter The Elements :\n");
scanf("%s",s1);
printf("Enter The Elements :\n");
scanf("%s",s2);
printf("First List ->: %s \n",s1);
printf("Second List ->: %s \n",s2);
unin(s1,s2,s3);
printf("UNION ->: %s \n",s3);
intersection(s1,s2,s3);
printf("INTERSECTION ->: %s \n",s3);
difference(s1,s2,s3);
printf("DIFFERENCE ->: %s \n",s3);
}
void unin(char*s1,char*s2,char*s3)
{
int l,i;
l=strlen(s1);
for(i=0;i<l;i++)
if(s1[i]=='0' && s2[i]=='0')
{
s3[i]='0';
}
else
{
s3[i]='1';
}
s3[i]='\0';
}
void intersection(char*s1,char*s2,char*s3)
{
int l,i;
l=strlen(s1);
for(i=0;i<l;i++)
if(s1[i]=='1' && s2[i]=='1')
{
s3[i]='1';
}
else
{
s3[i]='0';
}
s3[i]='\0';
}
void difference(char*s1,char*s2,char*s3)
{
int l,i;
l=strlen(s1);
for(i=0;i<l;i++)
if(s1[i]=='1' && s2[i]=='0')
{
s3[i]='1';
}
else
{
s3[i]='0';
}
s3[i]='\0';
}
