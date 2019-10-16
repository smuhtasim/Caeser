#include<stdio.h>
#include<ctype.h>

int main()
{
   int i=0, x, key;
   char str[100];
   printf(" enter a message :\n");
   gets(str);
   while(str[i]) {
      str[i] = toupper(str[i]);//Converting the string in uppercase
      i++;
   }
   printf(str);
   printf(" enter the key :");
   scanf("%d", &key);
   printf("\nDecryption or Encryption? :");
   printf("\n1 = Encrypt the string.");
   printf("\n2 = Decrypt the string.\n");
   scanf("%d", &x);
   switch(x)
   {

   case 1:
        for(i=0;(i<100&&str[i]!='\0');i++) {
        if(str[i]>=65&&str[i]<=90)//Checking whether it is an alphabet
         str[i]=(str[i]+key-65)%26;
         str[i]+=65;
        }
      printf("\nEncrypted string: %s\n", str);
      break;

   case 2:
      for(i=0;(i<100&&str[i]!='\0');i++) {
        if(str[i]>=65&&str[i]<=90)//Checking whether it is an alphabet
        str[i]=(str[i]-key-65)%26;
        str[i]+=65;
      }
      printf("\nDecrypted string: %s\n", str);
      break;

   default:
      printf("\nError\n");
   }
   return 0;
}
