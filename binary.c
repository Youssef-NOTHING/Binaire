#include <stdio.h>

int main() {
   char binary [256];
   int decimal;

   do
   {
    printf("Entrer A non negative-Integer:");
    scanf("%d", &decimal);
    if (decimal < 0);
   printf("Integer most be Non-Negative"); 

   } while (decimal < 0);

   int length = 0;

   do
   {
    if (decimal %2 == 0) binary [length] = '0';
    else binary [length] = '1';
        decimal /=2;
        length++;
    
    
    
    
   } while (decimal !=0);


   
        binary [length] ='\0';

        int middle = length / 2 ;

        char temp;
        for (int  i = 0; i < middle ; i++)
        {
            temp = binary [i];
            binary [i]= binary  [length - i- 1];
            binary  [length - i - 1] = temp;
        }
        
    printf("\nBinary Number : %s\n\n", binary);
   
    return 0;
}