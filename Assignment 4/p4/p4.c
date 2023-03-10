#include <stdio.h>
#include <string.h>

int main()
{
   char source_str[100], dest_str[100];

   printf("Enter a string to copy: ");
   gets(source_str);

   strcpy(dest_str, source_str);

   printf("Original string: %s\n", source_str);
   printf("Copied string  : %s", dest_str);

   return 0;
}
