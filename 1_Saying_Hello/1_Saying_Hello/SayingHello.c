#include <stdio.h>
#include <string.h>

int main()
{
   char name[10];
   char output[100];
   int counter;

   /*Initialize arrays*/
   memset(name, '\0', sizeof(name));
   memset(output, '\0', sizeof(output));
   
   /*Input*/
   printf("What is your name? ");
   scanf("%s", name);
   
   /*String concatenation*/
   strcat(output, "Hello, ");
   strcat(output, name);
   strcat(output, ", nice to meet you!");

   /*Output*/
   printf(output);

   return 0;
}