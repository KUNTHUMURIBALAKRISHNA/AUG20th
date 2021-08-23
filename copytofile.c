#include <stdio.h>
#include <stdlib.h> 
int main()
{
   FILE *fp1, *fp2;
   char filename1[100],filename2[100],c;
   printf("Enter the filename to open for reading \n");
   scanf("%s",filename1);
   fp1=fopen(filename1, "r");
   if (fp1==NULL)
   {
      printf("Cannot open file %s \n", filename1);
      exit(0);
   }
   printf("Enter the filename to open for writing \n");
   scanf("%s", filename2);
   fp2 = fopen(filename2, "w");
   if (fp2==NULL)
   {
      printf("Cannot open file %s \n", filename2);
      exit(0);
   }
   c = fgetc(fp1);
   while (c != EOF)
   {
      fputc(c, fp2);
      c = fgetc(fp1);
   }
   printf("Contents copied to %s", filename2);
   fclose(fp1);
   fclose(fp2);
   return 0;
}

