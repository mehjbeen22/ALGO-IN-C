#include <stdio.h>
#include <string.h>

//  <----- PRINT STRING USING LOOP (TRAIVERSE STRING) ----->

// int main(void){
//     char c[]="javaScript";
//     int i=0;
//     while (c[i]!='\0'){
//         printf("%c",c[i]);
//         i++;
//     }
// }

// <-----PRINT STRING USING PRINT STATEMENT ----->

// void main(){
//     char ch[]="Java T-Point";
//     printf("%s", ch);
// }


// <-----TAKE STRING FROM USER WITHOUT ENTERING SPACE FORMAT ----->

// void main(){
//     char ch[20];
//     printf("Enter Your Input: ");
//     scanf("%s", ch);

//     printf("Here's Your String : %s", ch);

// }

// <-------TAKE STRING FROM USER WITH ENTERING SPACE FORMAT ------>

// void main(){
//     char ch[20];
//     printf("Enter Your Input: ");
//     scanf("%[^\n]s", ch);

//     printf("Here's Your String : %s", ch);
// }


// <---- User Input BY GEts()------>

// void main(){
//     char s[30];
//     printf("Enter Your Input :");
//     gets(s);

//     printf("Your OutPut : %s", s);

// }



// <---- User Input BY GEts() and Execute BY Puts()------>

// void main(){
//     char s[30];
//     printf("Enter Your Input :");
//     gets(s);

//     puts(s);
// }


// <string Reverse Function---------->

// void main(){
//     char ch[20];
//     printf("Enter Input :");
//     gets(ch);

//     printf("Reverse String : %s", strrev(ch));
// }



// < --------------------------------- W3RESOURCE QUESTIONS -------------------------------------------->

// #Q 1. Write a program in C to input a string and print it.

// void main(){
//     char str[30];
//     printf("Enter Your Input Here :- ");
//     scanf("%s", str);

//     printf("%s", str);
// }

// #Q 2. Write a program in C to find the length of a string without using library functions.
// void main(){
//     char str[30];
//     printf("Enter Your Input : ");
//     scanf("%[^\n]s", str);
    
//     int count=0;
//     int i=0;

//     while (str[i] != '\0'){
//         count+=1;
//         i++;
//     }
//     printf("Length of String is : %d",count);
// }

// #Q 3. Write a program in C to separate individual characters from a string.

// void main(){
//     char str[30];
//     printf("Enter Input : ");
//     scanf("%s", str);

//     for(int i=0; str[i]!='\0'; i++){
//         printf("%c ", str[i]);
//     }
// }

// #Q 4. Write a program in C to print individual characters of a string in reverse order.

// void main(){
//     char str[30];
//     printf("Enter Input :");
//     scanf("%s", str);

//     int len = strlen(str);

//     for(int i=len ; i>=0; i--){
//         printf("%c ", str[i]);
//     }
// }

// #Q 5. Write a program in C to count the total number of alphabets, digits and special characters in a string.

// void main(){
//     char str[20];
//     printf("Enter Input :");
//     scanf("%s", str);
    
//     int alpha, intg, splch, i;
//     alpha = intg = splch= i= 0;

//     while(str[i] != '\0'){
//         if ((str[i]>='a' && str[i]<='z')||(str[i] >='A' && str[i]<='Z')){

//             alpha++;
//         }
//         else if (str[i] >='0' && str[i]<='9'){
//             intg++;
//         }
//         else{
//             splch++;
//         }
//         i++;
//     }

// printf("Number of Alphabets : %d \n",alpha);
// printf("Number of Digits : %d \n",intg);
// printf("Number of Special Character : %d",splch);
// }


// #Q 6: Write a Program in C to Copy a String in new String  without using string library functions. 
// void main(){
//     char n[10]= "Laptop";
//     char new[10];

//     int i=0;
//     while (n[i] != '\0'){
//         new[i]= n[i];
//         i++;
//     }
//     new[i]='\0';
//     printf("%s",new);
// }


// #Q 7: Write a program in C to compare two strings without using string library functions.

// void  main(){
//     char str1[10], str2[10];
//     printf("Enter String 1 :");
//     scanf("%s", str1);
//     printf("Enter String 2 :");
//     scanf("%s", str2);

//     int ls1 = strlen(str1);
//     int ls2 = strlen(str2);
//     int count =0;

//     for(int i=0; str1[i]!='\0' ; i++){
//         if (str1[i] == str2[i]){
//             count+=1;
//         }
//     }
//     if(count==ls2){
//         printf("Strings Are Equal");
//     }
//     else{
//         printf("Strings Are not Equal");
//     }
// }

// #Q 8: Write a Program in C to Cancatinate two string in a New String Without using Function .

// void main(){
//     char s1[]= "House";
//     char s2[]= "Home";
//     char new[10];
//     int i=0;

//     for(i; s1[i]!='\0'; i++){
//         new[i] = s1[i];
//     }
//     int j=i;
//     for(int i=0; s2[i] !='\0'; i++){
//         new[j] = s2[i];
//         j++;
//     }
//     new[j]='\0';
//     printf("Concatinated String : %s",new);
// }

// #Q 9:  Write a program in C to count the total number of vowels or consonants in a string.

// void main(){
//     char str[100];
//     printf("Enter String Input :");
//     scanf("%[^\n]s",str);

//     int i,conso, vowel;
//     conso = vowel = i =0;

//     while (str[i] != '\0'){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
//             vowel++;
//         }
//         else if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
//             vowel++;
//         }
//         else{
//             conso++;
//         }
//         i++;
//     }
//     printf("Vowel In String : %d\n",vowel);
//     printf("Consonants In String : %d",conso);
// }


// #Q 10:- Write a program in C to find the maximum number of characters in a string.

// void main(){
//     char str[50],value;
//     printf("Enter Your String :");
//     scanf("%s", str);
//     int count ,max ;
//     max=0;

//     for(int i=0; str[i]!='\0'; i++){
//         count=0;
//         for(int j=i; str[j]!='\0'; j++){
//             if(str[i] == str[j]){
//                 count+=1;
//             }
//         }
//         if(max < count){
//             value = str[i];
//             max = count;
//         }
//     }
//     printf("The Highest frequency of Character is :'%c'\n",value);
//     printf("Appear Number of Time : %d", max);
// }

// #Q 11:- Write a C program to sort a string array in ascending order.

// void main(){
//     char str[20];
//     printf("Input Your String : ");
//     scanf("%s", str);
//     int length = strlen(str);
//     int j;

//     for(int i=0; i<length ; i++){
//         for(j=0; j<length; j++){
//             if(str[i]<str[j]){
//                 char temp = str[i];
//                 str[i]= str[j];
//                 str[j] = temp;
//             }
//         }
//     }
//     for(int i=0; i<length; i++){
//         printf("%c ", str[i]);
//     }
// }

// #Q 12. Write a program in C to read a string from the keyboard and sort it using bubble sort.

// void main()
// {
//     char str[3][20]={"zero","one","two"},temp[25];
//     for(int i=0;i<3;i++)
//     for(int j=0;j<=3-i;j++)
//     {
//         if (strcmp((str[i]),(str[i+1]))>0)
//         {
//             strcpy(temp,str[j]);
//             strcpy(str[j],str[j+1]);
//             strcpy(str[j+1],temp);
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         printf("%s\n",str[i]);
//     }
// }

// #Q 13:-Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

// void main(){
//     char str[30];
//     printf("Enter Your Input :");
//     scanf("%[^\n]s" , str);
//     int len = strlen(str);

//     for(int i=0; i<len; i++){
//         if(islower(str[i])){
//             printf("%c",toupper(str[i]));
//         }
//         else{
//             printf("%c",tolower(str[i]));
//          }
//     }
// }

// #Q 14:- Check Whether a character is LowerCase or Not.

// void  main(){
//     char str = 'R';
//     if (islower(str)){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
// }

// #Q 15:- Write a program in C to remove characters from a string except alphabets.
// void main(){
//     char str[]="w3resource.com";
//     char Change_str[20];
//     int j=0;

//     for(int i=0; str[i]!='\0'; i++){
//         if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]>='Z'){
//             Change_str[j]= str[i];
//             j++;
//         }
//     }
//     Change_str[j]='\0';
//     printf("%s", Change_str);
// }

// void main(){
//     char str[]= "My 143! Name is &*";
//     char ch[20];
//     int len = strlen(str),j=0;

//     for(int i=0; i<len; i++){
//         if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122){
//             ch[j]=str[i];
//             j++;
//         }
//     }
//     ch[j]='\0';
//     printf("%s",ch);
// }

// #Q 16:- Write a program in C to find the frequency of characters.

// void main(){
//     char str[20];
//     printf("Enter Your String :");
//     gets(str);
//     char ch; 
//     printf("Enter the Character Do you want to find: ");
//     scanf("%c",&ch);
//     int count, len;
//     count =0;
//     len = strlen(str);

//     for(int i=0; i<len; i++){
//         if(str[i] == ch){
//             count++;
//         }
//     }
//     printf("Frequency of '%c' is :- %d", ch, count);
// }

// #Q 17:- Write a program in C to convert a string to uppercase.
// void main(){
//     // char str[]="the quick brown fox jumps over the lazy dog";
//     char str[20];
//     printf("Enter Your String Here : ");
//     gets(str);
//     int len = strlen(str);
//     char str_ch;

//     for(int i=0; i<len; i++){
//         str_ch = str[i];
//         printf("%c",toupper(str_ch));
//     }

// }

// #Q 18:- Write a program in C to convert a string to lowercase.

// void main(){
//     char str[20];
//     printf("Enter Your String Here : ");
//     gets(str);
//     int len = strlen(str);
//     char str_ch;

//     for(int i=0; i<len; i++){
//         str_ch = str[i];
//         printf("%c",tolower(str_ch));
//     }

// }

// #Q 19:-  Write a program in C to check whether a character is a Hexadecimal Digit or not.

// void main(){
//     char ch='1';
//     printf("Enter Your Character Here :");
//     scanf("%c",&ch);

//     if((ch>='1' && ch<='9') || (ch>='A' && ch<='F') || (ch>='a' && ch<='f')){
//         printf("Yes Your Character is HEXA-DECIMAL");
//     }
//     else{
//         printf("No Your Character is not HEXA-DECIMAL");
//     }
// }

// #Q 20:- Write a program in C to check whether a letter is uppercase or not.

// void main(){
//     char ch;
//     printf("Enter Your String :");
//     scanf("%c", &ch);

//     if(isupper(ch)){
//         printf("YES LETTER IS IN UPPER CASE");
//     }
//     else{
//         printf("NO Letter IS NOT IN  UpperCase");
//     }
// }

// #Q 21:-Write a program in C to replace the spaces in a string with a specific character.

// void main(){
//     char str[20], new_str[20];
//     printf("Enter Input :");
//     gets(str);
//     int j=0;
//     char star = '*';

//     int len= strlen(str);
//     for(int i=0; i<len; i++){
//         if(str[i]==' '){
//             new_str[j]= star;
//             j++;
//         }
//         else{
//             new_str[j] = str[i];
//             j++;
//         }
//     }
//     new_str[j]='\0';
//     printf("Replaceble String : %s", new_str);
// }