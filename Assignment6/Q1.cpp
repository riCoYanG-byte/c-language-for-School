#include<stdio.h>
#include<stdlib.h>

int main()
{
 char ch;
 FILE*file1,*file2;

 file1=fopen("employee.dat","r");
 file2=fopen("copy.bak","w");
 if(file1==NULL)
   printf("file1 is not found !");
 if(file2==NULL)
   printf("file2 is not found !");

 while((ch=fgetc(file1))!=EOF)
 {
  fputc(ch,file2);
 }

 fclose(file1);
 fclose(file2);

 return 0;
 }