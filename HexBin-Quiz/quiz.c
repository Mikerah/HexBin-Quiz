#include <stdio.h>
#include <stdlib.h>
#include "questions.h"
#include "numbers.h"

int main()
{
    #ifdef __linux__
    system("clear");
    #elif _WIN32
    system("cls");
    #endif

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

    generate_questions(number_of_questions, questions ,question_code);


    for(int i=0; i<number_of_questions;i++){
        printf(questions[i]);
    }



    return 0;
}


