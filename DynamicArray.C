
            // This Program used to fetch static arrays into dynamic array.
            // Date: 25 January 2023.
            // By: Akash Lad.

            #include <stdio.h>  // I/O files
            #define Loop 1      // constant integer
            #include <string.h> // file used for creating dynamic array.

            int main() // Program starts here.
            {


                 int var = 1;    // control variable for loop.
                 char text[10]; // static array declaration.
                 char end[2] = {'n'}; // static array declaration.


                    do
                    {
                        printf("Enter your nationality: \n");  // loop contain one execution with prompt massege.
                        var++;

                    }while(var == Loop); // loop can not be necessary for this part of illustration.

                    scanf("%s", text); // input of array string.
                for(var = 1; var == Loop; var++) // loop with one execution and can not be necessary for this part of illustration.
                {
                    printf("you are "); // Final output.
                    strcat(text, end); // concatenation of array strings.
                    puts(text);       // fetching dynamic array into first line in loop.
                }

                return 0; // program execution terminal.
            }
