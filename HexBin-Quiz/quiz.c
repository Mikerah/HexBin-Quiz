#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
#include "questions.h"
#include "numbers.h"

int main()
{
    #ifdef __linux__
    system("clear");
    #elif _WIN32
    system("cls");
    #endif
    printf("%d\n",convert_dec_to_bin("10"));

    printf("This program is a quiz so that you can practive converting between binary, decimal and hexadecimal bases.\n");

    printf("Types of quizzes:\n");
    printf("\tDecimal -> Binary (D2B)\n");
    printf("\tHexadecimal -> Binary (H2B)\n");
    printf("\tDecimal -> Hexadecimal (D2H)\n");
    printf("\tBinary -> Hexadecimal (B2H)\n");
    printf("\tBinary -> Decimal (B2D)\n");
    printf("\tHexadecimal -> Decimal (H2D)\n");


    char question_code[4];
    printf("Which type of quiz would you like to do? ");
    scanf("%s", question_code);

    int number_of_questions;
    printf("How many questions do you want? ");
    scanf("%d", &number_of_questions);

    printf("**********************************************************************************************************\n\n");


    char * questions[number_of_questions];
    memset(questions, "", number_of_questions*sizeof(char));

    srand(time(NULL));
    generate_questions(number_of_questions, questions ,question_code);

    int counter = 0;


    for(int i=0; i<number_of_questions;i++){
        printf(questions[i]);
        char * number_to_convert = (char *)malloc(sizeof(char) * 150);
        char * number_given = (char *)malloc(sizeof(char) * 150);
        sscanf(questions[i], "%s", number_to_convert);
        convert_dec_to_bin(number_to_convert);
        scanf("%s", number_given);

        if(strcmp(question_code, "B2D") == 0){
            if(strcmp(number_given, convert_bin_to_dec(number_to_convert)) == 0){
                counter++;
            }
            else{
                printf("\nWrong!\n");
            }
        }
        else if(strcmp(question_code, "D2B") == 0){
            if(strcmp(number_given, convert_dec_to_bin(number_to_convert)) == 0){
                counter++;
            }
            else{
                printf("\nWrong!\n");
            }
        }
        else if(strcmp(question_code, "B2H") == 0){
            if(strcmp(number_given, convert_bin_to_hex(number_to_convert)) == 0){
                counter++;
            }
            else{
                printf("\nWrong!\n");
            }
        }
        else if(strcmp(question_code, "D2H") == 0){
            if(strcmp(number_given, convert_dec_to_hex(number_to_convert)) == 0){
                counter++;
            }
            else{
                printf("\nWrong!\n");
            }
        }
        else if(strcmp(question_code, "H2D") == 0){
            if(strcmp(number_given, convert_hex_to_dec(number_to_convert)) == 0){
                counter++;
            }
            else{
                printf("\nWrong!\n");
            }
        }
        else if(strcmp(question_code, "H2B") == 0){
            if(strcmp(number_given, convert_hex_to_bin(number_to_convert)) == 0){
                counter++;
            }
            else{
                printf("\nWrong!\n");
            }
        }

    }

    printf("You got %d/%d!", counter,number_of_questions);


    return 0;
}


