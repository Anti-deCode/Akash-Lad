// Topic: practice of loop example with if through goto label.

        /*
         This program contain some conditions, and they won't execute until they are correctly
         entered, if conditions don't meet! The program do not continues and result is
         loop until they meet.
        */

        // Date: 24 January 2023.
        // by Akash Lad.


        #include <stdio.h> // header file with library Functions


        int main() // Program execution starts here.
        {
            char n ; // variables with char data type declared,
            char b ; //   /* same from up above comment */

            input: // label of LOOP.

                putchar('\n'); // new line
            printf("Enter 'N' for first input and 'B' for second input without any 'Blank or whitespace'. \n");
                              /*
                                           prompt message

                              */

            n = getchar(); // reading first input.
            b = getchar(); // reading second input.

            if(n == 'N' && b == 'B') // condition checking
            {
                printf("your inputs are correct: first input = %c and second input = %c. \n", n, b); // result of correct inputs
            }
            else
            {

                printf("you first or second input is wrong! \n"); // result of wrong inputs
                goto input; // wrong input results 'LOOP'.
            }




            return 0; // End of Program.
        }
