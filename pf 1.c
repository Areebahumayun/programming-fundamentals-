#include<stdio.h>
int main(){

   char ch;
   printf("Enter ch");
   scanf("%c",&ch);
   if(ch >= 'a'&& ch <='z'){
   printf("the letter is small");
   }
 
   else if(ch >='A' && ch <='Z'){
   
   printf("the letter is capital");
   }
   
   else if(ch>='0' && ch<='9'){
   printf("the character is digit");
}
   else{
   
   printf("special character");}
   }