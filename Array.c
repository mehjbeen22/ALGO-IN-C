#include <stdio.h>
#include <math.h>
#include <string.h>

// #Q 1:-Write C a program to create a array of natural numbers till 20 and print it.

// int main(){
//     printf("natural Number Till 20 :\n");
//     int arr[20];
//     int j=1;

//     for(int i=0; i<20; i++){
//         arr[i]=j;
//         j+=1;
//     }

//     for(int i=0; i<20; i++){
//         printf("%d \n",arr[i]);
//     }
// }

// #Q 2:- Write a C program to input 5 names from the user and print them.
// int main(){

//     printf("Enter Input for Array : \n");
//     char names[5][10];
    
//    for (int i=0; i<5; i++){
//     printf("Enter name  %d:",i+1);
//     scanf("%s",names[i]);
//    }

//    for(int i=0; i<5; i++){
//     printf("%d. %s \n",i+1 , names[i]);
//    }
// }

// #Q 3:-Given a array and its size, print the list in reverse order. (l=[5,4,9,2,1,0])

// int main(){
//     printf("Reverse Array :");
//     int n=6;
//     int arr[]={5, 4, 9, 2, 1, 3};
//     int rev[n];
     
//     for (int i=0; i<6; i++){
//         rev[i]=arr[n-1];
//         n=n-1;
//     }

//     for(int i=0; i<6; i++){
//         printf("%d, ", rev[i]);
//     }
// }

// #Q 4:-Given a array and its size, print alternate elements from the last.(l=[5,4,9,2,1,0])

// int main(){
//     printf("Alternate Element From the last \n");
//     int n = 6;
//     int arr[]= {5,4,9,2,1,0};

//     for(int i=0; i<n+1; i++){
//         printf("%d ,", arr[n-1]);
//         n-=2;
//     }
// }

// #Q 5:-Given a list [‘a’, '1', ‘2’, '5', ‘b’, ‘q’]. Print the last ‘i’ elements of any given list.
//     ‘i’ accepted from the user.

// int main(){
//     int n=6;
//     char arr[]={'a' , '1', '2', '5', 'b', 'q'};
//     printf("How many Element Do you want from the last : \n");
//     int i,j;
//     scanf("%d",&i);
//     j=1;
//     while (j<=i){
//         printf("%c ,", arr[n-1]);
//         j+=1;
//         n-=1;
//     }
// }


// #Q 6:- Given a list ([1,2,3,4,5,6,7]), take a number from the user and check whether it exists in the list or not.

// int main(){
//     int size = 7;
//     int arr[]= {1,2,3,4,5,6,7};
//     printf("Enter Elemnet Do You want to check in Array : ");
//     int n,ans,i;
//     scanf("%d",&n);
//     ans=0;
//     for(int i=0; i<size; i++){
//         if(arr[i]==n){
//             ans =1;
//         }   
//         }
//     if (ans==1){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }   
// }


// #Q 7:-Write a program to create a list of 7 numbers from the user, and print true 
// #if the complete list consists of consecutive numbers or not.

// int main(){
//     printf("Enter Size of Array :");
//     int size ,a,con,s;
//     scanf("%d", &size);
//     int arr[size];
//     con=s=0;

//     //  Inisilaize Array from User 
//     for (int i=0; i<size; i++){
//         printf("Enter Array element :");
//         scanf("%d", &arr[i]);
//     }

//     //  Sort Array in Assending Order
//     for (int i=0; i<size; i++){
//         for (int j=0; j<size; j++){
//             if (arr[i]> arr[j]){
//                 a= arr[i];
//                 arr[i]=arr[j];
//                 arr[j]= a;
//             }
//         }
//     }

//     //  Execute Array Element 
//     printf("Array in Assending Order : ");
//     for(int j=0; j<size; j++){
//         printf("%d ,",arr[j]);
//     }

//     //  Check Conscutive Or Not 
//     int i,j;
//     i=0;
//     while (i<size){
//         j=1;
//         while (j<size){
//             if (arr[i]-arr[j]==1){
//                 con =1;
//                 s+=1;
//                 i=j;
//             }
//             else{
//                 s=0;
//                 break;
//             }
//             j+=1;
//         }
//         i+=1;
//     }
   
//     if (con==1 && s!=0){
//         printf("Array is Consecutive");
//     }
//     else{
//         printf("Array is Not Consecutive");
//     }

// }


// #Q 8:-Find the sum and average of elements in a list. Take elements as input from the user.

// int main(){
//     printf("Enter Size or Array : ");
//     int size,sum;
//     scanf("%d", &size);
//     int arr[size];
//     sum=0;

//     for(int i=0; i<size; i++){
//         printf("Enter Array Element : ");
//         scanf("%d", &arr[i]);
//         sum+=arr[i];
//     }
//     printf("Sum of Array is : %d\n",sum);
//     printf("Average of array is : %d",sum/size );

// }

// #Q 9:-Count the total occurrences of a number in the Array. Input the numbers from the user.

// int main(){
//     int size;
//     printf("Enter Size of Array : ");
//     scanf("%d", &size);
//     int arr[size];

//     for (int i=0; i<size; i++){
//         printf("Enter Array Element : ");
//         scanf("%d", &arr[i]);
//     }
    
//     printf("Enter the Number to count Occurance of : ");
//     int target,count,value;
//     scanf("%d",&target);
//     count =0;

//     for (int i=0; i<size; i++){
//         if (arr[i]==target){
//             count+=1; 
//             value = arr[i];
//         }
//     }
//     if (count>=1){
//         printf("Value %d and Occurance %d", value, count);
//     }
//     else{
//         printf("Upss ! You have Enter Wrong Input %d is Not in  Array",target);
//     }
// }

// #Q 10:-Count positive and negative elements in a Array. Take elements as input from the user.

// int main(){
//     printf("Enter Size of Array : ");
//     int size,Pos, Neg;
//     scanf("%d", &size);
//     int arr[size];
//     Pos=Neg=0;

//     for (int i=0; i<size; i++){
//         printf(" Enter Elements of Array : ");
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0; i<size; i++){
//         if(arr[i]>=0){
//             Pos+=1;
//         }
//         else{
//             Neg+=1;
//         }
//     }
//     printf("Count of Postive Number in Array is %d \n",Pos);
//     printf("Count of Negetive Number in Array is %d",Neg);
// }


// #Q 11:-Print duplicates in a list.   ????????????????????????????????????

// int main(){
//     int arr[]={2,3,2,6,7,8,2,3,6,9};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int dup[size],j;
//     printf("size %d",size);

//     for (int i=0; i<size; i++){
//         for (int j=1; j<size; j++){
//             if (arr[i]==arr[j]){
//                 dup+=arr[i];
//             }
//         }

//     }
//     for(int i=0; i<='\0',i++){
//         printf("%d",dup[i]);
//     }

// }

// #Q 12:-Create a list that stores first n even numbers. Take n as input from the user.

// int main(){
//     printf("Enter Size of Array : ");
//     int n;
//     scanf("%d", &n);
//     int arr[n],j;
    
//     j=2;
//     for (int i=0; i<n; i++){
//         arr[i]=j;
//         j+=2;
//     }
//     printf("First %d Even Natural Numbers are : \n",n);

//     for(int i=0; i<n; i++){
//         printf("%d ,",arr[i]);
//     }
// }

// #Q 13:-Create a list that stores first n odd numbers. Take n as input from the user.

// int main(){
//     printf("Enter Size of Array : ");
//     int n;
//     scanf("%d", &n);
//     int arr[n],j;
    
//     j=1;
//     for (int i=0; i<n; i++){
//         arr[i]=j;
//         j+=2;
//     }
//     printf("First %d Odd  Natural Numbers are : \n",n);

//     for(int i=0; i<n; i++){
//         printf("%d ,",arr[i]);
//     }
// }

// #Q 14:-Create a list that stores all the factors of a number n. Take n as input from the user.

// int main() {
//     int n, i;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     printf("Factors of %d are: ", n);
//     for (i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             printf("%d ,", i);
//         }
//     }
//     return 0;
// }

// #Q 15:-Create a list that stores all the prime numbers up to n. Take n as input from the user.

// int main(){
//     int n,count;
//     printf("Enter Input: ");
//     scanf("%d", &n);

//     for(int i=1; i<n; i++){
//         count=0;
//         for(int j=1; j<=i; j++){
//             if (i%j==0){
//                 count+=1;
//             }
//         }
//         if (count==2){
//             printf("%d ,",i);
//         }
//     }
// } 

// #Q 16:-Create a Array that stores perfect numbers up to n. Take n as input from the user.

// int main(){
//     int n,sum;
//     printf("Enter range Input : ");
//     scanf("%d", &n);

//     for(int i=1; i<=n; i++){
//         sum=0;
//         for(int j=1; j<i; j++){
//             if (i%j==0){
//                 sum+=j;
//             }
//         }
//         if (sum==i){
//             printf("%d ,",i);
//         }
//     }
// }

// #Q 17:- Create a Array that stores Armstrong numbers up to n. Take n as input from the user.

// int main(){
//     int n,count,i,it,k,j,sum;
//     printf("Enter range Input : ");
//     scanf("%d", &n);
//     i=1;
//     for ( i; i<=n; i++){
//         count =0;
//         j=it=k=i;

//         while (it>0){
//             it/=10;
//             count+=1;
//         }
//         sum=0;
//         while (k>0){
//             int rem = k%10;
//             sum+= pow(rem, count);
//             k/=10;    
//         }
//         if (sum==j){
//             printf("%d ,",j);
//         }
//     }
// }

// #Q 18:-Create a Array that stores the factorial of first n natural numbers. Take n as input from the user.

// int main(){
//     int n,fact;
//     printf("Enter range Input : ");
//     scanf("%d", &n);

//     for(int i=1; i<=n; i++){
//         fact=1;
//         for(int j=1; j<=i; j++){
//             fact*=j;
//         }
//         printf("factor of %d is %d \n",i, fact);
//     }
// }

// #Q 19:- Write a program to create a list of 10 numbers from the user, and sum the elements on
//      odd positions as odds and on even positions as evens.

// int main(){
    
//     int arr[10],evens,odds;
//     evens=odds=0;

//     for(int i=0; i<10; i++){
//         printf("Enter Array Element : ");
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0; i<10; i++){
//         if (i%2==0){
//             evens+=arr[i];
//         }
//         else{
//             odds+=arr[i];
//         }
//     }
//     printf("Sum of Elements on Even Positon : %d\n",evens);
//     printf("Sum of Elements on Odd Position : %d \n",odds);

// }

// #Q 20:- Print the names input by the user in reverse order in Array   .

// int main(){
//     printf("Enter Size of Array : ");
//     int size;
//     scanf("%d", &size);

//     char arr[size][20];

//     //  Make Orignal Array
//     for(int i=0; i<size; i++){
//         printf("Enter Element of Array : ");
//         scanf("%s", arr[i]);
//     }
//     // Execute Origanl Array
//     printf("Your Orignal Array : \n");
//     for (int i=0; i<size; i++){
//         printf("%s ,",arr[i]);
//     }
//    printf("\n");
//     //  Execute Reverse Array 
//     printf("Here is Your Reverse Array \n");

//     while (size>0){
//         printf("%s ,",arr[size-1]);
//         size-=1;
//     }    
// }

// #Q 21. Show how to rearrange the elements in an array so that they appear in reverse order.

// int main(){
    
//     int arr[]={2,3,7,8,9,13};
//     int size = sizeof(arr)/sizeof(arr[0]);
    
//     printf("Orignal Array \n");
//     for (int i=0; i<size; i++){
//         printf("%d ,", arr[i]);
//     }
//         printf("\n");

//     printf("Arrange Array In Reverse Order \n");

//     while (size>0){
//         printf("%d ,", arr[size-1]);
//         size-=1;
//     }
// }

// #Q 22 :- Input n numbers from the user. Store them in a Array, Then show how to determine the maximum number i.

// int main(){
//     printf("Enter Size of Array : ");
//     int size;
//     scanf("%d",&size);
//     int arr[size];

//     for(int i=0; i<size; i++){
//         printf("Array Element : ");
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0];
//     for(int i=0; i<size; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     printf("Maximum Number in Array : %d",max);
// }


// #Q 23:- Show how to store the first 100 natural numbers in an array and then show them in the reverse sequence.

// int main(){
//     int size=100;
//     int arr[size];

//     int j=1;
//     for(int i=0; i<size; i++){
//         arr[i]=j;
//         j+=1;
//     }
//     printf("First 100 Natural Number in reverse Order : \n");
//     while (size>0){
//         printf("%d ,", arr[size-1]);
//         size-=1;
//     }
// }

// #Q 24:-  Write a program to find the smallest element in a array accepted from the user.

// int main(){
//     printf("Enter Size of Array : ");
//     int size;
//     scanf("%d",&size);
//     int arr[size];

//     for(int i=0; i<size; i++){
//         printf("Array Element : ");
//         scanf("%d", &arr[i]);
//     }
//     int min = arr[0];
//     for(int i=0; i<size; i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     printf("Minimum Number in Array : %d",min);
// }

// #Q 25:- Find Median In Array.

// int main(){
//   int n,median;
//   printf("Enter Size of Array : ");
//   scanf("%d", &n);
//   int arr[n];

//   // Intilaize Array By User  :
//   for(int i=0; i<n; i++){
//     scanf("%d", &arr[i]);
//   }

//      //  Sort Array in Assending Order :
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             if (arr[i] < arr[j]){
//                 int sort= arr[i];
//                 arr[i]=arr[j];
//                 arr[j]= sort;
//             }
//         }
//     }

//   //  Print Sorted Array :
//   for(int i=0; i<n; i++){
//     printf("%d ,", arr[i]);
//   }
//   printf("\n");
  
//   // Now Find Median In Array :
//   if (n%2==0){
//     int m1 = arr[n/2];
//     int m2 = arr[n/2-1];
//     median = (m1 + m2)/2;
//   }

//   else{
//     median = arr[n/2];
//   }
//   printf("Median in Array : %d", median );
// }


// #Q 26:- Find Mode in Array.

// int main(){
//     printf("Enter Size of Array :");
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     int value, max = 2;

//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i<n ; i++){
//         int count = 1;
//         for (int j=1; j<n; j++){
//             if(arr[i]== arr[j]){
//                 count+=1;
//             }
//         }
//         if(count >max){
//             max = count;
//             value = arr[i];
//         }
//     }
//     printf("Mode in Array : %d", value);
// }



// #Q 27:- Merge two sorted arrays into a single sorted array Using Pointer..

// int main(){
//   printf("Enter Size of Array -1 : ");
//   int n,merge_arr[50],a,i,j;
//   scanf("%d", &n);
//   int arr1[n];
  
//   // Intilaize First Array ;
//   for(i=0; i<n; i++){
//     scanf("%d", &arr1[i]);
//     merge_arr[i]= arr1[i];
//   }

//   // Intilaize Second Array:
//   printf("Enter Size of Array -2 : ");
//   int n2;
//   scanf("%d", &n2);
//   int arr2[n2];
//   j=i;

//   for(i=0; i<n2; i++){
//     scanf("%d", &arr2[i]);
//     merge_arr[j]= arr2[i];
//     j++;
//   }
//   //  Sort Merge Array ;

//   for(i=0; i<j; i++){
//     for(int k=0; k<j; k++){
//       if(merge_arr[i]< merge_arr[k]){
//         int sort = merge_arr[i];
//         merge_arr[i]= merge_arr[k];
//         merge_arr[k] = sort;
//       }
//     }
//   }
//   // Execute 2 Merge Sorted Array ;

//   for(i=0; i<j; i++){
//     printf("%d ", merge_arr[i]);
//   }
// }
