#include <stdio.h>

// #Q 1:- Write a program in C to show the basic declaration of a pointer

// int main(){
//     int num = 90;
//     int* ptr = &num;

//     printf("value of num : %d\n", num);
//     printf("Address of num :%p\n\n", &num);

//     printf("Value of Num : %p\n",ptr);
//     printf("Address of Num : %d", *ptr);

// }


// #Q 2:- Write a program in C to demonstrate how to handle pointers in a program..

// int main(){
//     int* ptr ;
//     int num = 20;

//     printf("Pointer : How to handle Pointer in the Program :\n");
//     printf("Value of Num : %d\n",num);
//     printf("Address of Num : %u\n\n", &num);

//     ptr = &num;
//     printf("Now ptr is assigned with the address of num.\n");
//     printf("Value of ptr Pointer = %d\n",*ptr);
//     printf("Address of ptr Pointer =%u\n\n",ptr);

//     printf("Change value of Num :\n ");
//     num = 89;
//     printf("Value of num :%d\n",*ptr);
//     printf("Address of num :%d\n\n",ptr);

//     printf("The pointer variable ptr is assigned the value 7 now.\n\n");
//     *ptr = 7;

//     printf("value of num :%d\n", num);
//     printf("Address of num : %d\n", &num);

// }  

// // #Q 3:-Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.

// int main(){
//     int intg = 12;
//     float flo = 2.45;
//     char chart = 'Z';

//     //  Empty Pointers...
//     int* I;
//     float* F;
//     char* C;

//     // Assinging value Address in Pointer ..
//     I = &intg;
//     F = &flo;
//     C = &chart;

//     printf("Pointer : Demonstrate the use of & and * operator : \n");
//     printf("----------------------------------------------------\n");
//     printf("value of INTIGER :- %d\n",intg);
//     printf("value of FLOAT :- %f\n",flo);
//     printf("value of CHAR :- %c\n\n",chart);

//     printf("USING & OPERATOR : \n");
//     printf("----------------------\n");
//     printf("Address of INTIGER :- %p\n",&intg);
//     printf("Address of FLOAT :- %p\n",&flo);
//     printf("Address of CHAR :- %p\n\n",&chart);

//     printf("USING & AND * OPERATOR : \n");
//     printf("---------------------------\n");
//     printf("value at Address of intg :%d\n",  *(&intg));
//     printf("value at Address of flo :%f\n" , *(&flo));
//     printf("value at Address of chart :%c\n\n", *(&chart));

//     printf("USING ONLY POINTER VARIABLE :\n");
//     printf("----------------------------------\n");
//     printf("value at Address of intg :%p\n", I );
//     printf("value at Address of flo :%p\n",  F);
//     printf("value at Address of chart :%p\n\n",C );

//     printf("USING ONLY POINTER OPERATOR : \n");
//     printf("---------------------------------\n");
//     printf("value at Address of intg :%d\n", *I );
//     printf("value at Address of flo :%f\n" ,*F);
//     printf("value at Address of chart :%c\n\n",*C );

// }

// 4. Write a program in C to add two numbers using pointers.
// int main(){
     
//     printf("Enter values of a : ");
//     int a ,b,c;
//     scanf("%d", &a);
//     printf("Enter Value of b : ");
//     scanf("%d", &b);
//     int* p;
//     int* q;  
//     p = &a;
//     q= &b;
//     c = *p + *q;
//     printf("Add of two Number : %d",c);
// }

// #Q 5:- Write a program in C to find the maximum number between two numbers using a pointer.

// int main(){

//     int a,b;
//     printf("Enter Value a: ");
//     scanf("%d", &a);
//     printf("Enter Value b: ");
//     scanf("%d", &b);

//     int* p = &a;
//     int* q = &b;

//     if (*p > *q){
//         printf("%d is a Maximum Number ",*p);
//     }
//     else{
//         printf("%d is a Maximum Number ",*q);
//     }
// }

// #Q 6:- Write a program in C to store n elements in an array and print the elements using a pointer.

// int main(){
//     int n;
//     printf("Enter Size of Array : ");
//     scanf("%d", &n);
//     int arr[n];
//     int* P_arr = &arr[0];

//     for(int i=0; i<n; i++){
//         scanf("%d", P_arr+i);
//     }

//     for(int i=0; i<n; i++){
//         printf("%d : Element %d\n",i, *(P_arr+i));
//     }
// }



// #Q 7:- Write a Program in C to store n elements in an array and Print the Maximum Element using Pointers.

// int main(){
//     int n,max;
//     printf("Enter Size of Array : ");
//     scanf("%d", &n);

//     int arr[n];
//     int* P = &arr[0];

//     for (int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     max = P[0];
//     for(int i=1; i<n; i++){
//         if (max < *(P+i)){
//             max = *(P+i);
//         }
//     }
//     printf("Maximum In Array By Pointer : %d",max);
// }


// #Q 8:-  Write a program in C to swap elements using call by reference. Go to the editor

// int main(){
//     int a,b,c,d ;
//     printf("Enter 1 value : ");
//     scanf("%d", &a);
//     printf("Enter 2 Value : ");
//     scanf("%d", &b);
//     printf("Enter 3 value : ");
//     scanf("%d", &c);

//     // INITILAIZE POINTER 
//     int* P; 
//     int *Q;
//     int *R;
//     P = &a;
//     Q = &b;
//     R = &c;

//     // SWAPING PROCESS
//     d = *P;
//     *P = *Q;
//     *Q = *R;
//     *R = d;

//     printf("The Value After Swaping \n");
//     printf("Element 1 = %d \n", *P);    
//     printf("Element 2 = %d \n", *Q);    
//     printf("Element 3 = %d \n", *R);
// }

// #Q 9:- Write a programe to Find a Smallest Number in Array Using Pointer .

// int main(){
//     int n,min;
//     printf("Enter Size of Array : ");
//     scanf("%d", &n);
//     int arr[n];
//     int* P = &arr[n];

//     for (int i=0; i<n; i++){
//         scanf("%d", P+i);
//     }
//     min = P[0];
//     for(int i=1; i<n; i++){
//         if (min > *(P+i)){
//             min = *(P+i);
//         }
//     }
//     printf("Minimun in Array : %d", min);
// }

// #Q 10:- Write a program in C to find the factorial of a given number using pointers.
// int main(){
//     int n;
//     printf("Input Number : ");
//     scanf("%d", &n);
//     int f= 1;
//     int* fact = &f;

//     for(int i=1; i<=n; i++){
//         *fact = *fact * i;
//     }
//     printf("factorial of %d is %d :", n,*fact);
// }


// #Q 11:- Write a Program in C to sort an Array Using Pointer.

// int main(){
//     int n,temp;
//     printf("Enter Size of Array : ");
//     scanf("%d", &n);
//     int arr[n];
//     int *P = &arr[0];

//     for(int i=0; i<n;i++){
//         scanf("%d", &arr[i]);
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if (*(P+i) < *(P+j)){
//                 temp  = *(P+i);
//                 *(P+i) = *(P+j);
//                 *(P+j) = temp ;
//             }
//         }
//     }
//     printf("Sorted Array : \n");
//     for(int i=0; i<n; i++){
//         printf("%d ,",*(P+i));
//     }
// }



// #Q 12:- Write a program in C to compute the sum of all elements in an array using pointers.

// int main(){
//     int n,sum=0;
//     printf("Enter Array Size : ");
//     scanf("%d", &n);
//     int arr[n];
//     int* P = &arr[0];

//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     for(int i=0; i<n; i++){
//         sum = sum + *(P+i);
//     }
//     printf("Sum of All Element an Array by Pointer : %d",sum);
// }


// #Q 13:- Write a program in C to print all the alphabets using a pointer

// #include <stdio.h>

// int main() {
//     char alphabets[26];
//     char *ptr = alphabets;  // Pointer to the array of alphabets
//     int i;

//     // Initialize the array with alphabets
//     for (i = 0; i < 26; i++) {
//         *ptr = 'A' + i;  // Assign the current alphabet to the memory location pointed by the pointer
//         ptr++;  // Move the pointer to the next memory location
//     }

//     ptr = alphabets;  // Reset the pointer to the beginning of the array

//     // Print the alphabets using the pointer
//     for (i = 0; i < 26; i++) {
//         printf("%c ", *ptr);  // Print the character at the memory location pointed by the pointer
//         ptr++;  // Move the pointer to the next memory location
//     }

//     printf("\n");

//     return 0;
// }

// <--------------------------------------------------------------------------------------->

                    // HIGH RIGOR  (ARRAY)


// #Q 1:- Reverse an Array Using Pointer .


// int main(){
//     int arr[5]= {9,8,7,3,4};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int *P = &arr[size-1];
   
//     for (int i =0 ; i< size; i++){
//         // printf("%d ", *P--);
//         printf("%d ", *P);
//         P--;
//     }
// }

// #Q MAKE ARRAY FROM USER INPUT AND PRINT IT IN REVERSE ORDER USING POINTER.

// int main(){
//   int n;
//   printf("Enter Size of Array :");
//   scanf("%d", &n);
//   int arr[n];

//  for(int i=0; i<n; i++){
//    scanf("%d", &arr[i]);
//  }
//   printf("Orignal Array :");
//   for(int i=0; i<n; i++){
//     printf("%d ", arr[i]);
//   }
//   printf("\n");

//   printf("Reverse Array : ");
//   int *P = &arr[n-1];

//   for(int i=0; i<n; i++){
//     printf("%d ", *P--);
//   }
  
// }


// #Q 2:- Find the mean in Array using Pointer.

// int main(){
//   int arr[7]= {2,5,6,7,8,9,1};
//   int sum=0;
//   int *P = &arr[0];

//   for(int i=0; i<7; i++){
//     sum+=*(P+i);
//   }
//   printf("Mean in Array :- %d", sum/7);
// }








