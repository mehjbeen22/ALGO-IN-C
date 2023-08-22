#include <stdio.h>

                    //  P A T T E R N

// Q 1:-  Create a pyramid of numbers consisting of a given number of lines. For example, if the
// given number is 5, then we should see the following:  (PASCAL TRIANGLE)
// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1


// int main() {
//     int n, i, j, k;

//     printf("Enter the number of lines for the pyramid: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         // print spaces
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // print numbers in increasing order
//         for (j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }

//         // print numbers in decreasing order
//         for (k = i - 1; k >= 1; k--) {
//             printf("%d ", k);
//         }

//         printf("\n");  // move to the next line
//     }

//     return 0;
// }


// Q 2:- Write a Program in C to print the left angle Triangle patterns with flexible dimensions as supplied
//     by the user.
                            //     *
                            //    **
                            //   ***
                            //  ****
                            // *****
// int main(){
//     printf("Enter the number of lines for the Pattern: ");
//     int n,i,j,k;
//     scanf("%d",&n);

//     for (i=1; i<=n; i++){
//         for(j=1 ; j<=n-i; j++){
//             printf(" ");
//         }
//         for(k=1 ; k<=i ; k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


                    //  PYRAMID TRIANGLE
// B)      *                       
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

// int main() {
//    int i, space, n, k = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &n);
//    for (i = 1; i <= n; ++i, k = 0) {
//       for (space = 1; space <= n - i; ++space) {
//          printf("  ");
//       }
//       while (k != 2 * i - 1) {
//          printf("* ");
//          ++k;
//       }
//       printf("\n");
//    }
//    return 0;
// }


                            // SQUARE PATTERN
// C)  * * * * *                
//     * * * * *
//     * * * * *
//     * * * * *

// int main(){
//      printf("Enter the number of rows: ");
//      int i,j,n;
//      scanf("%d", &n);

//     for (i=1; i<=n; i++){
//         for (j=1; j<=n ; j++){
//             printf("*  ");
//         }
//         printf("\n");
//     }
// }



//                 RIGHT ANGLE TRI-ANGLE

// *
// **
// ***
// ****
// *****

// int main(){
//     int n,i;
//     printf("Enter the Number of Row : ");
//     scanf("%d", &n);

//     for (i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//               printf("* ");
//         }
//         printf("\n");
//     }
// }


            // INVERTED RIGTH HALF TRI-ANGLE

// *****
// ****
// ***
// **
// *


// int main(){
//     int n,i;
//     printf("Enter the Number of Row : ");
//     scanf("%d", &n);
//     i=1;
//     for (n; n>=i; n--){
//         for(int j=1 ; j<=n; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


                    //   INVERTED LEFT HALF TRIANGLE
// *****
//  ****
//   ***
//    **
//     *
//  int main(){
//     printf("Enter Number of rows :");
//     int n,i;
//     scanf("%d", &n);
//     i=1;

//      for (i=0; i<n; i++){
//         for(int j=0; j< 2*i; j++){
//             printf(" ");
//         }
//         for(int k=0; k<n-i; k++){
//             printf("* ");
//         }
//         printf("\n");
//      }
//  }