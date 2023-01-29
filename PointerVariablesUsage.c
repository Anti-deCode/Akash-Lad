



            /* This program illustrates arithmetic operations between two numbers */
            // Program contains functions and 'Pointer variables'.
            // operations are sum, difference, product, quotient, remainder of division.
            // Date 29 January 2023
            /* Created by "Akash Lad" . */

            #include <stdio.h>

            void calculation(int a, int b, float *s, float *d, float *p, double *q, int *r);
            void main()  // function execution with no return value.
            {

                int a, b, r;   // Two variable and one pointer variable reference to function body.
                float s, d, p; // pointer variables with actual arguments and type float.
                double q;      // Pointer variable with type double.

                printf("Enter two number for their sum and difference. \n"); // prompt message.
                scanf("%d %d", &a, &b);  // Reading numbers.
                calculation(a,b, &s, &d, &p, &q, &r); // function called.

                printf("sum = %.2f \ndifference = %.2f \nproduct = %.2f \n", s, d, p); // output of data manipulation.
                printf("quotient = %lf \nreminder = %d \n", q, r); // 2 output of data manipulation.

            }


            void calculation(int a, int b, float *sum, float *diff, float *product, double *quotient, int *reminder) // function body.
            {

                *sum      = a + b;
                *diff     = a - b;
                *product  = a * b;                      /* Arithmetic Operations */
                *quotient = a / b;
                *reminder = a % b;
            }
