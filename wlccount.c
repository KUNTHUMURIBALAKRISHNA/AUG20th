#include<stdio.h>
int main()
{
     FILE *fp;
    int charcount,wordcount,linecount;
    int ch, in_word;
    fp = fopen("read.c","r");
    charcount=0;
    wordcount=0;
    linecount=0;
    in_word=0;
    if(fp==NULL)
    {
        printf("file can't create:\n");
        exit(1);
    }
    while ((ch= getc(fp))!=EOF)
    {
        charcount++;
         if (ch=='\n')
         {
            linecount++;
         }
           if (in_word==0)
           {
              if (!isspace(ch))
              {
                 in_word=1;
                 wordcount++;
              }
          }
        else if(isspace(ch))
          in_word = 0;
    }
   printf("Character counts = %d\n",charcount);
   printf("Word counts = %d\n", wordcount);
   printf("Line counts = %d\n",linecount);
   fclose(fp);
   return 0;
}

