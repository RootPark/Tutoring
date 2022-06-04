#include "stdio.h"
 
int main()
{
    FILE *fp;
    char ch,str[]=" 20010083 li yi na!",s1[100];
    int i;
    fp=fopen("/Users/geunwon-park/Desktop/C언어 과외/과외3/test.txt","r+");
    for(;feof(fp)==0;)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    printf("\n");
    for(i=0;str[i]!='\0';i++)fputc(str[i],fp);
    rewind(fp);
    fgets(s1,15,fp);
    puts(s1);
    fclose(fp);
 
}