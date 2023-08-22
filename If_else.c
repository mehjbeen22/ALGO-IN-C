#include<stdio.h>
#include<string.h>
// 1. Write a C program to find the maximum between two number

// int main()
// {   
//     int a;
//     printf("Enter Input \n");
//     scanf("%d", &a);
//     int b ;
//     printf("Enter input \n");
//     scanf("%d",&b);

//     if ("%d", a>b){
//         printf(" A Is Greater");
//     }
//     else{
//         printf("B Is Greater");
//     }
//     return 0;
// }

// 2. Write a C program to find a maximum between three numbers. 
// int main(){
//     int a;
//     printf("Enter Input \n");
//     scanf("%d",&a);

//     int b;
//     printf("Enter Input \n");
//     scanf("%d",&b);

//     int c;
//     printf("Enter Input \n");
//     scanf("%d",&c);

//     if ("%d", a>b && a>c){
//         printf("A is Greater");
//     }
//     else if ("%d", b>a && b>c){
//         printf("B is Greater");
//     }
//     else{
//         printf("C is Greater");
//     }
// }


// 3. Write a C program to check whether a number is negative, positive or zero.

// int main(){
//     int n;
//     printf("Enter Number");
//     scanf("%d", &n);

//     if ("%d", n>0){
//         printf("Number is Positive");
//     }
//     else if("%d",n<0){
//         printf("Number is Negative");
//     }
//     else{
//         printf("Number is Zero");
//     }
// }


// 4. Write a C program to check whether a number is divisible by 5 and 11 or not.

// int main(){
//     int n;
//     printf("Enter Number");
//     scanf("%d",&n);

//     if ("%d",n%5==0 && n%11==0){
//         printf("Yes Number id Divisble By 5 and 11 ");
//     }
//     else{
//         printf(" Not Divisble");
//     }
// }

// 5. Write a C program to check whether a number is even or odd

// int main(){
//     int n;
//     printf("Enter User Input");
//     scanf("%d", &n);

//     if ("%d", n%2==0){
//         printf("Number Is Even");
//     }
//     else{
//         printf("Number Is Odd");
//     }
// } 

// 6. Write a C program to check whether a year is leap year or not.

// int main(){
//     int Year;
//     printf(" Enter Year");
//     scanf("%d", &Year);
 
//     if ("%d",Year%4==0 && Year%100 !=0 || Year%400==0) 
//     {
//         printf(" %d Leap Year :", Year);
//     }
//     else{
//         printf(" %d Not Leap Year. ", Year);
//     }
// }

// 7. Write a C program to check whether a character is an alphabet or not.

// int main() {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//         printf("%c is an alphabet.", c);
//     else
//         printf("%c is not an alphabet.", c);

//     return 0;
// }          

// 8. Write a C program to input any alphabet and check whether it is vowel or consonant.

// int main()
// {
//     char c;
//     printf("Enter Value :");
//     scanf("%c", &c);

//     if ((c=="A") || (c=="I") || (c=="O") || (c=="U") || (c=="E")){
//         printf("%c Is Vowel : ", c);
//     }
//     else if ((c=="a") || (c=="i") || (c=="o") || (c=="u") || (c=="e")){
//         printf("%c Is Vowel : ", c); 
//     }

//     else{
//         printf(" %c Is Consonants", c);
//     }

//     return 0;
// }


// 9. Write a C program to input any character and check whether it is alphabet, digit or special
// character

// int main()
// {
//     int  ch;
//     printf("Enter a Character :");
//     scanf("%c", &ch);

//     if (ch>=65 && ch <=90 || ch>=97 && ch<=122){
//         printf("%c Character Is an Alphabet", ch);
//     }
//     else if (ch>=48 && ch<=57){
//         printf("%c Character Is Digit," , ch);
//     }
//     else{
//         printf("%c Is a Special Character",ch);
//     }
//     return 0;
// }

// 10. Write a C program to check whether a character is uppercase or lowercase alphabet
// int main()
// {
//     char ch;
//     printf("Enter Character :");
//     scanf("%c",&ch);

//     if(ch>='a' && ch<='z'){
//         printf("%c Is lower Character",ch );
//     }
//     else{
//         printf("%c Is a UpperCase Character",ch);
//     }
//     return 0;
// }

// 11. Write a C program to input week number and print week day.

// int main(){
//     int week;
//     printf("Enter Week No :");
//     scanf("%d", &week);

//     if ("%d",week == 1){
//         printf("Monday");
//     }
//     else if ("%d",week == 2){
//         printf("Tuesday");
//     }
//     else if ("%d",week == 3){
//         printf("Wednesday");
//     }
//     else if ("%d",week == 4){
//         printf("Thursday");
//     }
//     else if ("%d",week == 5){
//         printf("Friday");
//     }
//     else if ("%d",week == 6){
//         printf("Saturday");
//     }
//     else if ("%d",week == 8){
//         printf("Saturday");
//     }
//     else{
//         printf("There is Only 8 Day in a week");
//     }
// }


// 12. Write a C program to input the month number and print the number of days in that month.

/*int main(){
    int Num;
    printf("Enter Month Number");
    scanf("%d", &Num);

    if ("%d", Num==1){
        printf("%d Month is January \n",Num);
        printf("Number Of days in Month:- 31");
    }
    else if ("%d", Num==2){
        printf("%d Month is Febrauary \n",Num);
        printf("Number Of days in Month:- 28/29");
    }
    else if ("%d", Num==3){
        printf("%d Month is March \n",Num);
        printf("Number Of days in Month:- 31");
    }
    else if ("%d", Num==4){
        printf("%d Month is April \n",Num);
        printf("Number Of days in Month:- 30");
    }
    else if ("%d", Num==5){
        printf("%d Month is May\n",Num);
        printf("Number Of days in Month:- 31");
    }
    else if ("%d", Num==6){
        printf("%d Month is June\n",Num);
        printf("Number Of days in Month:- 30");
    }
    else if ("%d", Num==7){
        printf("%d Month is July \n",Num);
        printf("Number Of days in Month:- 31");
    }
    else if ("%d", Num==8){
        printf("%d Month is August \n",Num);
        printf("Number Of days in Month:- 31");
    }
    else if ("%d", Num==9){
        printf("%d Month is September \n",Num);
        printf("Number Of days in Month:- 30");
    }
    else if ("%d", Num==10){
        printf("%d Month is October \n",Num);
        printf("Number Of days in Month:- 31");
    }
    else if ("%d", Num==11){
        printf("%d Month is November \n",Num);
        printf("Number Of days in Month:- 30");
    }
    else if ("%d", Num==12){
        printf("%d Month is January \n",Num);
        printf("Number Of days in Month:- 31");
    }
    else{
        printf("There is only 12 Month in A Year please Enter valid Input");
    }

} */


// 13. Write a C. program to count the total number of notes in a given amount.


// 14. Write a C. program to input angles of a triangle and check whether triangle is valid or not.

// int main(){
//     int a,b,c;
//     printf("Enter Angles");
//     scanf("%d" "%d" "%d", &a ,&b, &c);

//     int Sum = a+b+c ;
    
//     if( a>0 && b>0 && c>0 && Sum==180){
//         printf("Valid Triangle");
//     }
//     else{
//         printf("Un_valid Triangle");
//     }
// }


// 15. Write a C. program to input all sides of a triangle and check whether the triangle is valid or not.
// int main(){
//     int a,b,c;
//     printf("Enter Sides");
//     scanf("%d" "%d" "%d" , &a , &b , &c);
//     int sum = a+b+c;

//     if ("%d", sum==180){
//         printf("valid triangle");
//     }
//      else{
//         printf("UnValid Triangle");
//      }


// }
// 16. Write a C. program to check whether the triangle is equilateral, isosceles or scalene triangle.
// int main(){
//     int a,b,c;
//     printf("Enter Sides Of Triangle \n");
    
//     scanf("%d" "%d" "%d" , &a , &b , &c);

//     if (a==b && b==c){
//         printf("Equilateral Triangle");
//     }
//     else if (a==b && b!=c || b==c && c!=a || a==c && c!=b){
//         printf("Isosceles triangle");
//     }
//     else{
//     printf("Scalene Triangle");}

// }


// 17. Write a C. program to calculate profit or loss.

// int main(){
//     int sp ,cp;
//     printf("Enter Amount \n");
//     scanf("%d" "%d", &sp, &cp);

//     if (sp > cp){
//         int Profit = sp-cp ;
//         printf("%d Profit",Profit);
//     }
//     else{
//         int Loss = cp-sp;
//         printf("%d Loss",Loss);
//     }

// }


/*18. Write a C. program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and
Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D */

// int main()
// {
//     int p,c,b,m,co;
//     printf("Enter Marks of Subjects \n");
//     scanf("%d" "%d" "%d" "%d" "%d" , &p ,&c ,&b ,&m ,&co );
//     int Total_marks = p+c+b+m+co ;
//     int Per = Total_marks/5 ; 

//     if (Per >= 90){
//         printf("Grade A , and Percentage Is: %d ",Per);
//     }
//     else if (Per >= 80){
//         printf("Grade B , and Percentage Is: %d",Per);
//     }
//     else if (Per >= 70){
//         printf(" Grade C , and Percentage Is: %d",Per);
//     }
//     else if (Per >= 60){
//         printf("Grade D , and Percentage Is: %d",Per);
//     }
//     else{
//         printf("Grade E");
//     }
    
//     return 0;
// }


// 19. Write a C program to input basic salary of an employee and calculate its Gross salary according to
// following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

// int main(){
//     int bs;
//     printf("Enter Basic Salary : \n");
//     scanf("%d" ,&bs);

//     if (bs > 20000){
//         int hra = (bs*30)/100;
//         int  da = (bs*95)/100;
//         int  gs= bs+hra+da;
//         printf("Gross Salary %d",gs);
//     }
//     else if (bs <= 20000){
//         int hra = (bs*25)/100;
//         int  da = (bs*90)/100;
//         int  gs= bs+hra+da;
//         printf("Gross Salary %d",gs);
//     }
//     else if (bs <= 10000){
//         int hra = (bs*20)/100;
//         int  da = (bs*80)/100;
//         int  gs= bs+hra+da;
//         printf("Gross Salary %d",gs);
//     }
    
// }



//20. Write a C. program to input electricity unit charges and calculate total electricity bill according to the
// given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit

// int main(){
//     int n;
//     printf("Enter Electricity Unit \n");
//     scanf("%d", &n);

//     if ( n<=50){
//         printf("%f",n*0.50);
//     }
//     else if (n>50 && n<=150){
//         float b = 50*0.50;
//         float a =(n-50)*0.75;
//         printf("Electricity Bill is :- %f",a+b);
//     }
//     else if (n>150 && n<=250){
//         float b = 50*0.50;
//         float c = 100*0.75;
//         float a =(n-50)*1.20;
//         printf("Electricity Bill is :- %f",a+b+c);
//     }
//     else{
//         float b = 50*0.50;
//         float c = 100*0.75;
//         float d = 100*1.20;
//         float a = (n-250)*1.50;
//         printf("Electricity Bill is :-%f ",a+b+c+d);

//     }   
// }


// 21. A shop will give a discount of 10% if the cost of the purchased quantity is more than 1000. Ask the user
// for quantity, Suppose, one unit will cost 100. Judge and print total cost for use

// int main(){
//     int n;
//     printf("Enter Quantity Of Products \n");
//     scanf("%d" , &n);

//     int Cost = n*100;
//     if (Cost >=1000){
//         int per = (Cost*10)/100;
//         int remain = Cost - per;
//         printf("You have to  Pay\n");
//         printf("%d Discount Value :-",remain);
//     }
//     else{
//         printf("You have to Pay Total Amount, You Did'nt Get Discount \n");
//         printf(" Total Amount Is : %d",Cost);
//     }
// }

// 22. A company decided to give a bonus of 5% to an employee if his/her year of service is more than 5
// years. Ask users for their salary and year of service and print the net bonus amount.

// int main(){
//     int Year , Salary;
//     printf("Enter How Many Year You Serve For Organisation \n");
//     scanf("%d"  "%d",&Year ,&Salary);
//     int  bonus = (Salary*5)/100;
//     if (Year > 5){
//         printf("Congratulations You Got Bonus ! \n");
//         printf("Your Bonus Value %d \n", bonus);
//         printf("Your Total salary  is %d \n",Salary+bonus);
//         }
//     else{
//         printf("Upss ! You Didn't Get Bonus \n");
//         printf("Your Total Salary is %d", Salary);

//     }
// }

// 23. A school has following rules for grading system:
    // a. Below 25 - F
    // b. 25 to 45 - E
    // c. 45 to 50 - D
    // d. 50 to 60 - C
    // e. 60 to 80 - B
    // f. Above 80 - A
    // Ask user to enter marks and print the corresponding grade.

// int main(){
//     int marks;
//     printf("Enter Your Marks \n");
//     scanf("%d" ,&marks);
    
//     if (marks >80){
//         printf("A Grade");
//     }
//     else if (marks >60  && marks <=80){
//         printf("B Grade");
//     }
//     else if (marks > 50 && marks<=60){
//         printf("C Grade");
//     }
//     else if (marks >45 && marks <=50){
//         printf("D Grade");
//     }
//     else if (marks >25 && marks <=45){
//         printf("E Grade");
//     }
//     else if (marks <=25){
//         printf("F Grade");
//     }
// }


// 24. Take the age of 3 people by user and determine oldest and youngest among them.

// int main(){
//     int a,b,c;
//     printf("Enter Ages \n");
//     scanf("%d" "%d" "%d", &a, &b, &c);

//     if (a>b && a>c){
//         printf("%d Is Oldest  \n", a);
//     }
//     if (b>a && b>c){
//         printf("%d Is Oldest  \n", b);
//     }
//     if ( c>a && c>b){
//         printf("%d Is Oldest  \n", c);
//     }
//     if (a<b && a<c){
//         printf("%d Is Youngest  \n", a);
//     }
//     if (b<a && b<c){
//         printf("%d Is Youngest  \n", b);
//     }
//     if (c<a && c<b){
//         printf("%d Is Youngest \n",c);
//     }
// }


// 25. A student will not be allowed to sit in an exam if his/her attendance is less than 75%.Take following
// input from the user. Number of classes held. Number of classes attended. And print, percentage of
// class attended. Is the student is allowed to sit in the exam or not.

// int main(){
//     int ch,ca;
//     printf("Enter Number Of Class Held \n");
//     scanf("%d" , &ch);
//     printf("Enter Number of Class Attend \n");
//     scanf("%d",&ca);

//     int Per = (ch*ca)/100 ;
    
//     if (Per >= 75){
//         printf("You are Allow to Sit an Examination");
//     }
//     else{
//         printf("You are Not Allowed to Sit an Exam");
//     }
// }

// 26. Write a program to check whether a person is eligible for voting or not. (accept age from user)

// int main(){
//     int age;
//     printf("Enter Your Age \n");
//     scanf("%d" ,&age);

//     if (age >=18){
//         printf("You are Eligible for Voting");
//     }
//     else{
//         printf("You are Not Eligible for Voting");
//     }
// }


// 27. Write a program to check whether a number is divisible by 7 or not.

// int main(){
//     int num;
//     printf("Enter Input \n");
//     scanf("%d" ,&num);

// if (num%7==0){
//     printf("Yes %d is Divisble By 7 ",num);
// }
// else{
//     printf("Not Divisble by 7");
// }
// }


// 28. Write a program to display "Hello" if a number entered by user is a multiple of five , otherwise print
// "Bye"

// int main(){
//     int num;
//     printf("Enter Input \n");
//     scanf("%d",&num);

//     if (num%5==0){
//         printf("Hello");
//     }
//     else{
//         printf("Bye");
//     }
// }


// 29. Write a program to calculate the electricity bill (accept number of unit from user) according to the
//     following criteria :
//             Unit                                                        Price 
//         First 100 units                                                No charges
//         Next 100 units                                                 Rs 5 Per Unit
//         After 200 units                                                Rs 10 per unit
//     For example if input unit is 350 than total bill amount is Rs2000)

// int main(){
//     int Unit;
//     printf("Enter Unit \n");
//     scanf("%d", &Unit);

//     if (Unit <=100){
//         printf("No Charges");
//     }
//     else if(Unit >100 && Unit <=200){
//         int rem = Unit - 100;
//         int bill = rem *5 ;
//         printf("Your Electricity Bill Is %d",bill);
//     }
//     else {
//         int rem = Unit - 100;
//         int rem1 = (rem -100);
//         int a = (100 *5);
//         int final = rem1*10 ;
//         int bill = final+a;
//         printf("Your Total Electricity Bill is %d",bill);
//     }  
// }

// 30. Write a program to display the last digit of a number.

// int main(){
//     int num;
//     printf("Enter Number \n");
//     scanf("%d",&num);

//     int last = num%10; 
//     printf("Last Digit of the Number is :- %d",last);
    
// }


//31. Write a program to check whether the last digit of a number( entered by user ) is divisible by 3 or not.

// int main(){
//     int num;
//     printf("Enter Number");
//     scanf("%d",&num);

//     int last = num% 10;
//     if ("%d", last%3==0){
//         printf("%d Yes last Digit Divible By 3", num);
//     }
//     else{
//         printf(" %d No last digit is not Divisble By 3",num);
//     }
// }

// 32. Write a program to accept the cost price of a bike and display the road tax to be paid according to the
//         following criteria :
//            Cost price (in Rs)                                                Tax
//         a) > 100000                                                          15 %
//         b) > 50000 and <= 100000                                             10%
//         c) <= 50000                                                           5%

// int main(){
//     int cp  ;
//     int Per = 0;
//     printf("Enter Cost Price \n");
//     scanf("%d",&cp);

//     if ("%d",cp>100000){
//         Per = (cp*15)/100;
//         printf("Tax :- %d", Per);
//     }
//     else if ("%d", cp >50000 && cp <=100000){
//         Per = (cp*10)/100;
//         printf(" Tax :- %d", Per);
//     }
//     else{
//         Per = (cp*5)/100 ;
//         printf("Tax :- %d", Per);
//     }
      
//     }


// 33. Write the logical expression for the following: A is greater than B and C is greater than D

// int main(){
//     printf(" A > B and C > D");
//     return 0;
// }


// 34. Accept any city from the user and display the monument of that city.
//      City                                          Monument
//      Delhi                                        Red Fort
//      Agra                                         Taj Mahal
//      Jaipur                                       Jal Mahal

// int main(){
//     char City[20];
//     printf("Enter Input \n");
//     scanf("%s", City);
    
//     if (strcmp(City, "Agra")==0){
//         printf("Taj Mahal");
//     }
//     else if (strcmp(City,"Delhi")==0){
//         printf("Red Fort");
//     }
//     else if (strcmp(City,"Jaipur")==0){
//         printf("Jal Mahal");
//     }
//     else{
//         printf("Enter Given Input");
//     }
// }


// 35. Write a Programm to check whether a Person is Senior Citizen or not .

// int main(){
//     int age;
//     printf("enter Your Age \n");
//     scanf("%d", &age);

//     if (age>=50){
//         printf("Person is Senior Citizen");
//     }
//     else{
//         printf("Not Senior Citizen");
//     }
// }

// 36. Write a program to find the lowest number out of two numbers excepted from the user.
// int main(){
//      int a,b;
//      printf("Enter Inputs \n");
//      scanf("%d" "%d", &a ,&b);

//     if (a<b){
//         printf("%d Is  lowest",a);
//     }
//     else{
//         printf("%d is Lowest",b);
//     }
// }

// 37. Write a C. program to check whether a number entered is a three digit number or not.

// int main(){
//     int num;
//     printf("Enter Input \n");
//     scanf("%d",&num);

//     if (num >=100 && num<=999){
//         printf("This number Contains Three Digits");
//     }
//     else{
//         printf("This number Not Contains Three Digits");
//     }
// }

// 38. Accept the temperature in degree Celsius of water and check whether it is boiling or not (boiling point of
// water in 100 oC.

// int main(){
//     int Cel;
//     printf("Enter Celsius \n");
//     scanf("%d", &Cel);

//     if (Cel>=100){
//         printf("Water is Boiling");
//     }
//     else{
//         printf("water is Not Boiling");
//     }
// }


//39. Write a program to accept two numbers and mathematical operators and perform operation accordingly.
        // Like:
        // Enter First Number: 7
        // Enter Second Number : 9
        // Enter operator : +
        // Your Answer is : 16

// int main(){
//     int f,s;
//     char o;
//     printf("Enter Mathematical Operater \n");
//     scanf("%c", &o);
//     printf("Enter First Number \n");
//     scanf("%d", &f);
//     printf("Enter Second  Number \n");
//     scanf("%d", &s);

//     if (o == '+'){
//         printf("Your Result is (add) :- %d",f+s );
//     }
//     else if (o == '-'){
//          printf("Your Result is  (subtract):- %d",f-s );
//     }
//     else if (o == '*'){
//          printf("Your Result is (Multiplication) :- %d",f*s );
//     }
//     else{
//          printf("Your Result is (Divide) :- %d",f/s );
//     }
// }


// 40 . Accept the age, sex (‘M’, ‘F’), number of days and display the wages accordingly
// If age does not fall in any range then display the following message:  “Enter appropriate age”
// Age                               Sex                                    Wage/day
// >=18 and <30                       M                                       700
//                                    F                                       750
// >=30 and <=40                      M                                       800
//                                    F                                       850

// int main(){
//     int age , days;
//     char sex;
//     printf("Enter Sex : \n");
//     scanf("%c" , &sex);
//     printf("Enter Your Age \n:");
//     scanf("%d", &age);
//     printf("Enter Working Days : \n");
//     scanf("%d", &days);

//     if (sex == 'M' && age>=10 && age<=30){
//         int wage = 700/days;
//         printf("Your Wage is %d", wage);
//     }
//     else if (sex == 'F' && age>=10 && age<=30){
//         int wage = 750/days;
//         printf("Your Wage is %d", wage);
//     }   
//     else if (sex == 'M' && age>=30 && age<=40){
//         int wage = 800/days;
//         printf("Your Wage is %d", wage);
//     }   
//     else if (sex == 'F' && age>=30 && age<=40){
//         int wage = 850/days;
//         printf("Your Wage is %d", wage);
//     } 
//     else{
//         printf(" Enter Appropriate Age");
//     }     
// }


// 41.  Accept three numbers from the user and display the second largest number.

// int main(){
//     int a,b,c;
//     printf("Enter Numbers");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a>b && a<c || a<b && a>c){
//         printf("Second Largest Number is %d",a);
//     }
//     else if (b>a && b<c || b<a && b>c){
//         printf("Second Largest Number is %d",b);
//     }
//     else{
//         printf("Second Largest Number is %d",c);
//     }
// }


// 42. Accept the number of days from the user and calculate the charge for library according to following :
        // First five days : Rs 2/day.
        // Six to ten days : Rs 3/day.
        // Ten to 15 days : Rs 4/day
        // After 15 days : Rs 5/day

// int main(){
//     int days;
//     printf("Enter Number of days : \n");
//     scanf("%d",&days );

//     if (days <=5){
//         int rs = 2*days;
//         printf("Your Charges is : %d", rs);
//     }
//     else if (days >=6 && days<=10){
//         int rs = 3*days;
//         printf("Your Charges is : %d", rs);
//     }
//     else if (days >=10 && days<=15){
//         int rs = 4*days;
//         printf("Your Charges is : %d", rs);
//     }
//     else{
//         int rs = 5*days;
//         printf("Your Charges is %d", rs);
//     }
// }


// 43. Write a C program that reads two integers representing a month and day and prints the season
//      for that month and day.
//      a. Expected Output:
//      Input the month (e.g. January, February , july etc.)
//      Input the day: 31
//      Season is autumn

// int main(){
//     int day;
//     printf("Enter Day \n");
//     scanf("%d",&day);
//     char mth[20];
//     printf("Enter Month Name \n");
//     scanf("%s", &mth);

//     if ((strcmp(mth, "january")==0) && day>=1 && day<=31){
//         printf(" Season is WINTER");
//     }
//     else if ((strcmp(mth, "feburary")==0 && day>=1 && day<=29)){
//         printf("Season is SPRING");
//     }
//      else if ((strcmp(mth, "march")==0 && day>=1 && day<=31)){
//         printf("Season is SPRING");
//     }
//      else if ((strcmp(mth, "april")==0 && day>=1 && day<=31)){
//         printf("Season is SUMMER");
//     }
//      else if ((strcmp(mth, "may")==0 && day>=1 && day<=31)){
//         printf("Season is SUMMER");
//     }
//      else if ((strcmp(mth, "june ")==0 && day>=1 && day<=31)){
//         printf("Season is SUMMER");
//     }
//      else if ((strcmp(mth, "july")==0 && day>=1 && day<=31)){
//         printf("Season is MONSOON");
//     }
//      else if ((strcmp(mth, "august")==0 && day>=1 && day<=31)){
//         printf("Season is MONSOON");
//     }
//      else if ((strcmp(mth, "september")==0 && day>=1 && day<=31)){
//         printf("Season is MONSOON");
//     }
//      else if ((strcmp(mth, "october")==0 && day>=1 && day<=31)){
//         printf("Season is AUTUMN");
//     }
//      else if ((strcmp(mth, "november")==0 && day>=1 && day<=31)){
//         printf("Season is AUTUMN");
//     }
//      else if ((strcmp(mth, "december")==0 && day>=1 && day<=31)){
//         printf("Season is WINTER");
//     }
//     else{
//         printf("Enter Appropriate Month name \n");
//         printf("Or Number of days between 1- to - 31");
//     }
// }


// 44.  . Write a C program to find the median of three values. Go to the editor
        // i. Expected Output:
        // ii. Input first number: 15
        // iii. Input second number: 26
        // iv. Input third number: 29
        // v. The median is 26.0

// int main(){
//     int first , second , third;
//     printf("Enter Inputs \n");
//     scanf("%d %d %d", &first, &second , &third);

//     if (first > second && first<third || first> third && first <second){
//         printf("The Median is  %d ", first);
//     }
//     else if (second > first &&  second < third || second > third && second < first){
//         printf("The Median is  %d ", second);
//     }
//     else{
//         printf("The Median is %d", third);
//     }
// }


// 45. Write a C program to get the next day of a given date.
        // Expected Output:
        // Input a year: 2016
        // Input a month [1-12]: 08
        // Input a day [1-31]: 23
        // The next date is [yyyy-mm-dd] 2016-8-24

        
// int main(){
//     int day;
//     printf("Enter Day [1-31] \n");
//     scanf("%d" , &day);
    
//     int month;
//     printf("Enter Month [1-12] \n");
//     scanf("%d" , &month);
    
//      int year;
//     printf("Enter Year \n");
//     scanf("%d" , &year);

//     int max_days;
//     if (month == 2){
//         if ((year %4== 0 && year %100 !=0) || year %400 == 0){
//             max_days = 29;
//         } else{
//             max_days = 28;
//         }
//     }

//     else if (month == 4 || month== 6 || month == 9 || month==11){
//         max_days = 30;
//     }else {
//         max_days = 31;
//     }
//     day++;
    
//     if (day > max_days){
//         day = 1;
//         month++;
//         if (month>12){
//             month =1 ;
//             year++;
//         }
//     }
//     printf("The next date is [yyyy-mm-dd] %d-%d-%d\n",  day , month , year);   
// }



// 46.  Write a C program to create the multiplication table (from 1 to 10) of a number

// int main(){
//     int Input;
//     printf("Enter which table do you Want .? \n");
//     scanf("%d", &Input);

//     int i = 1;

//     while (i<=10){
//         printf("\n %d*%d = %d", Input,i,(Input*i));
//     i= i+1;
//     }
// }


// 47. Write a C program to calculate the length of a string.

// int main(){
//     char string[30];
//     printf("Enter Your Word without Space \n");
//     scanf("%s", &string);

//     int i;
//     for (i = 0; string[i] != '\0'; ++i);
  
//     printf("Length of Str is %d", i);
  
//     return 0;
// }

