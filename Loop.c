#include <stdio.h>
#include <math.h>

 //    " LOOP IN C"

// 1. Write a C. Programe to find the sum of the first n natural numbers, where n is
//  any given integer.

// int main(){
// 	int n,i,sum;
// 	printf("Enter till where you want sum of natural number \n");
// 	scanf("%d", &n);
// 	sum = 0;
// 	for (i=1;i<=n;i++){
// 		sum+=i;
// 	}
// 	printf("Sum of %d natural number %d :",n,sum);
// }

// 2. Write a C program to find the sum of the first 15 even natural numbers.

// int main(){
//     printf("Here is the Sum of First 15 Even natural number \n");
//     int i,even,j;
//     j = 2;
//     even =0;
//     for (i=1; i<=15; i++){
//         even = even+j;
//         j+=2;
//     }
//     printf("%d",even);
// }


// 3. Write a C. program to show how consecutive even numbers starting from 2 are
// summed up until the sum just exceeds 1000 and then show the sum and the number of
// even numbers added.

// int main(){
//     printf("Here is the Sum of Consucetive Even natural number \n");
//     int i,even,j;
//     j = 2;
//     even =0;
//     for (i=1; i<=1000; i++){
//         even = even+j;
//         j+=2;
//     }
//     printf("%d",even);
// }


// 4. Write a C. Program to print the numbers below 100 that are divisible by 7.
// int main(){
// 	printf("Numbers below 100 that are divisible by 7 are:\n");
// 	int i;
// 	for (i=7;i<=100;i++){
// 		if (i%7==0){
// 			printf("%d \n",i);
// 		}
// 	}
// 	return 0;
// }


// 5. Write a C. Program to show how to find the product of n natural numbers.
// int main(){
// 	int n,i,Pro;
// 	printf("Enter till where Product of natural number Do You want \n ? ");
// 	scanf("%d", &n);
// 	Pro=1;

// 	for (i=1; i<=n;i++){
// 		Pro = Pro*i;
// 	}
// 	printf("Productuct of %d Natural number",Pro);
// }


// 6. Write a C.Program to show how to find all even natural numbers that are divisible by
//  7 in a given range. (Input lower and upper limit of the range from the user)

// int main(){

//     int l,u;
//     printf("Enter Lower & Upper limit \n");
//     scanf("%d %d", &l , &u);
//     while (l<=u){
//         if (l%2==0 && l%7==0){
//             printf("%d \n",l);    
//         }
//         l+=2;
//         }
// }

// 7. Write a C. Program to find the sum of the squares of the first 9 natural numbers that
// are divisible by 3.
// int main(){
// 	int i;
// 	for (i=1; i<=9; i++){
// 		if(i%3==0){
// 			printf("%d \n",i);
// 		}
// 	}
// 	return 0;
// }


// 8. Write a Program in C to calculate the sum of the following series where n is input. 1 +
// 1/2 + 1/3 + 1/4 + 1/5 +…………1/n

// int main(){
//     int i,n,sum,a;
//     printf("Enter range");
//     scanf("%d",&n);
//     i =1 ;
//     sum=0;
//     while (i<=n){
//         a=i/1;
//         sum+=a;
//         i+=1;}
//     printf("%d",sum);
// }

// 9. Write a Program C to show how to find the sum of all the numbers that are divisible
// by P but not divisible by Q within a given range. (Input lower limit, upper limit, P, and Q
// from the user)

// int main(){
//     int p,q,n,i,sum;
//     printf("Enter range N Number \n");
//     scanf("%d",&n);
//     printf("Enter Lower range \n");
//     scanf("%d",&p);
//     printf("Enter Upper range \n");
//     scanf("%d",&q);
//     sum=0;
//     i=1;

//     while (i<=n){
//         if (i%p==0 && i%q!=0){
//             printf("%d \n",i);
//             sum+=i; 
//         }
//         i+=1;
//     }
//     printf("%d Sum of all number between range",sum);
// }


// 10. Write a Program in C. to show how to obtain the HCF and LCM of two numbers. (input two
// numbers from the user)

// int main(){
//     int a,b,c;
//     printf("Enter Inputs \n");
//     scanf("%d %d", &a, &b);
//     c=b;
//     int Pro = a*b;
//     while (b>0){
//         int r =a%b;
//         a=b;
//         b=r;
//     }
//     int hcf= a;
//     int lcm= (Pro/hcf);
//     printf("HCF of %d & %d is %d :- \n",a,c,hcf);
//     printf("LCM of %d & %d is %d :-",a,c,lcm);
// }

// 11. Write a Program in C to show how the sum of the digits of a given number can be obtained.
// (Input the number from the user)

// int main(){
//     int n,sum,m;
//     printf("Enter Input \n");
//     scanf("%d",&n);
//     m=n;
//     sum=0;
//     while (n>0){
//         int r = n%10;
//         n/=10;
//         sum+=r;
//     }
//     printf("Sum of %d Digits is %d", m,sum);
// }

// 12 Write Programe in C.to show the logic of obtaining the reversed form of a given whole
// number. (Input the number from the user)

// int main(){
//     int rev,n,m;
//     printf("Enter Input \n");
//     scanf("%d", &n);
//     rev = 0;
//     m=n;
//     while (n>0){
//         int r= n%10;
//         rev = (rev*10)+r;
//         n/=10;
//     }
//     printf("Reverse of %d is %d :-",m,rev);
// }

// 13. Write a Program in C to show how the factors of a given number can be obtained.
// (Input the number from the user)

// int main(){
//     int n,i;
//     printf("Enter Input \n");
//     scanf("%d",&n);
//     i= 1;
//     while (i<=n){
//         if (n%i==0){
//             printf("Factor of %d is %d :- \n",n,i);
//         }
//         i+=1;
//     }
// }


// 14. write a Program to show how to determine whether a given number is a perfect
// number. (Input the number from the user)
// Note: A number is said to be a perfect number if the sum of its factors (except itself)
// equals the number

// int main(){
//     int n,sum,i;
//     printf("Enter Input\n");
//     scanf("%d",&n);
//     sum=0;
//     i=1;
//     while (i<n){
//         if(n%i==0){
//             sum+=i;
//         }
//         i+=1;
//     }
//     if (sum==n){
//         printf("%d Is a Perfect Number",n);
//     }
//     else{
//         printf("%d Is not Perfect Number",n);
//     }
// }

// 15. Write a Program to show how you can decide if a given number is prime or not.
// (Input the number from the user)

// int main(){
//     int n,i,flag;
//     printf("Enter Input \n");
//     scanf("%d",&n);
//     flag=0;

//     for(i=2;i<n/2;i++){
//         if (n%i==0){
//             flag=1;
//         }else{
//             flag=0;
//         }
//     }
//     if(flag==0){
//         printf("%d Is Prime No",n);
//     }
//     else{
//         printf("%d Is not Prime no",n);
//     }
// }

// 16. write a Programe In C to find out the sum of first N terms of the following series. 5 + 55 +
// 555 + 5555 + .......... up to N terms.

// int main(){
//     int n,m,change,sum,i;
//     printf("Enter Input \n");
//     scanf("%d", &n);
//     m=5;
//     change=sum= 0;
//     i=1;

//     while(i<=n){
//         sum+=change;
//         change = (change*10)+m;
//         i+=1;
//     }
//     printf("Sum of this series %d :-",sum);
// }

// 17. Write a Program in C to print multiplication tables from 1 to 5.

// int main(){
//     printf("Here is the table of 1 to 5 \n");
//     for (int i=1;i<=5;i++){
//         for (int j=1; j<=10;j++){
//             printf(" %d  X %d = %d \n",i,j,i*j);
//         }
//         printf("\n");
//     }
// }

// 18. Write a Program in C to show how to find all the perfect numbers under 10,000. 
// int main(){
//     printf("Here is the Perfect num under 10,000 \n");
//     int i,j,sum;
//     i=1;
//     while (i<=10000){
//         sum=0;
//         j=1;
//         while (j<i){
//             if (i%j==0){
//                 sum+=j;
//             }
//             j+=1;
//         }
//         if (sum==i){
//             printf("Perfect no %d \n",i);
//         }
//         i+=1;
//     }
// }


// 19. Write  a C. Program to show how to determine all the 3-digit Armstrong numbers. A
// number is called an Armstrong number if the sum of the values of the digits each raised
// to the power equal to the number of digits in the number equals the number. For
// example, 153 is an Armstrong number, because 153 = 13 + 53 + 33.

// int main(){
//     printf("Here is the all 3 digits Armstrong Numbers :\n");
//     int i,sum,new;
//     i=100;
//     while (i<=999){
//         sum=0;
//         new=i;
//         while(new>0){
//             int rem= new%10;
//             int  power = pow(rem, 3);
//             new/=10;
//             sum+=power;
//         }
//         if (sum==i){
//             printf("Armstrog number is %d \n",i);
//         }
//         i+=1;
//     }
// }


// 20. Some three-digit numbers show the property that the sum of the factorials of the digits
// equals the numbers, for example, 145 = 1! + 4! + 5!. write a code in C to show how to
// determine all such numbers.

// int main(){
//     int n,temp,i,fact,rem,sum;
//     printf("Enter Input \n");
//     scanf("%d", &n);
//     temp=n;
//     i=1;
//     sum=0;
//     rem = n%10;
//     while (n>0){
//         fact=1;
//         while (rem>1){
//             fact = fact*rem;
//             rem-=1;
//         }
//         sum+=fact;
//         n/=10;
//         rem= n%10;
//     }
//     if (sum==temp){
//         printf("%d Is Strong number",temp);
//     }
//     else{
//         printf("%d is not Strong number",temp);
//     }
// }

// 21.  write a code in C. to input a positive integer. If the number is even, add up its digits.
// Otherwise, multiply the individual digits and print the result.

// int main(){
//     int n,pro,sum;
//     printf("Enter Input : ");
//     scanf("%d",&n);
//     sum=0;
//     pro=1;

//     if (n%2==0){
//         while (n>0){
//             int rem = n%10;
//             sum+=rem;
//             n/=10;
//         }
//         printf("Sum of Digits is :  %d",sum);
//     }
//     else{
//         while(n>0){
//             int rem=n%10;
//             pro*=rem;
//             n/=10;
//         }
//         printf("Product of Digits is : %d",pro);
//     }
// }


// 22. write a Program in C  to determine the maximum and the minimum out of n given numbers.
// int main(){
//     int n,a,i,max,min;
//     printf("Enter Input :");
//     scanf("%d", &n);
//     scanf("%d",&a);
//     i=1;
//     max=a;
//     min=a;

//     while (i<=n-1){
//         int new;
//         scanf("%d",&new);

//         if (new >max){
//             max= new;
//         }
//         else{
//             min = new;
//         }
//         i+=1;
//     }
//     printf("Maximum Value :- %d\n",max);
//     printf("Maximum Value :- %d",min);
// }


// 23. write code in C  to input a number, N, and print first N prime numbers.

// int main(){
//     printf("Enter Input : ");
//     int n,i,j,count;
//     scanf("%d", &n);

//     for (i=1 ; i<=n;i++){
//         count=0;
//         for(j=2; j<=i; j++){
//             if (i%j==0){
//                 count+=1;
//             }
//         }
//         if (count==1){
//             printf("Prime no %d\n",i);
//         }
//     }
// }

// 24.  Write a C program to find the sum of all prime numbers between 1 to n. (n input from the user)

// int main(){
//     printf("Enter Input : ");
//     int n,i,j,count,sum;
//     scanf("%d", &n);
//     sum=0;
//     for (i=1 ; i<=n;i++){
//         count=0;
//         for(j=2; j<=i; j++){
//             if (i%j==0){
//                 count+=1;
//             }
//         }
//         if (count==1){
//             sum+=i;
//         }
//     }
//     printf("Sum of all upto %d Prime number :- %d",n,sum);
// }

// 25. Write a Programe in C to print only the prime factors of a given number N.

// int main(){
//     int n,i,j,count;
//     printf("Enter Number : ");
//     scanf("%d", &n);

//     for (i=1; i<=n; i++){
//         if (n%i==0){
//         count =0;
//         for (j=2; j<=i ; j++){
//             if (i%j==0){
//                 count+=1;
//             }
//         }
//         if (count == 1){
//             printf("prime factor %d \n",i);
//         }
//         }
//     }
// }

// 26.  Write a Program in C to show the logic of printing the first N Fibonacci numbers.

// int main(){
//     printf("Enter Input : ");
//     int n,cnt,n1,n2,fab;
//     scanf("%d",&n);

//     cnt=0;
//     n1=0;
//     n2=1;

//     while (cnt<=n){
//         printf("%d ,",n1);
//         fab= n1+n2;
//         n1=n2;
//         n2=fab;
//         cnt+=1;
//     }
// }

