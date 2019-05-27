void main()
{
    char ch;

    printf("Enter a lowercase character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
   {
       ch = ch - 32; //lowercase is 32 from the upper
       printf("Uppercase %c", ch);
   }
   else
       printf("Error! That is not a lowercase character .\n");


}
