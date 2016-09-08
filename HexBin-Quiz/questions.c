#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "numbers.h"

/*
 * Generates random questions based off the the type of quiz wanted.
 * Possible Question Codes are:
 * D2B (Decimal to Binary)
 * B2D (Binary to Decimal)
 * D2H (Decimal to Hexadecimal)
 * H2B (Hexadecimal to Binary)
 * H2D (Hexadecimal to Decimal)
 * B2H (Binary to Hexadecimal)
 *
 */

void generate_questions(int number_of_questions, char * questions[number_of_questions], char question_code[4]) {
    srand(time(NULL));
    if(strcmp(question_code, "D2B") == 0) {
        for(int i=0; i< number_of_questions; i++) {
                char * question = malloc(sizeof(char) * 150);
                sprintf(question, "%s", generate_decimal_number());
                strcat(question," to binary: \n");
                questions[i] = question;
            }
    }
    else if(strcmp(question_code, "B2D") == 0) {
        for(int i=0; i< number_of_questions; i++) {
                char * question = malloc(sizeof(char) * 150);
                sprintf(question, "%s", generate_binary_number());
                strcat(question," to decimal: \n");
                questions[i] = question;
            }
    }
    else if(strcmp(question_code, "D2H") == 0) {
        for(int i=0; i< number_of_questions; i++) {
                char * question = malloc(sizeof(char) * 150);
                sprintf(question, "%s", generate_decimal_number());
                strcat(question," to hexadecimal: \n");
                questions[i] = question;
            }
    }
    else if(strcmp(question_code, "H2B") == 0) {
        for(int i=0; i< number_of_questions; i++) {
                char * question = malloc(sizeof(char) * 150);
                sprintf(question, "%s", generate_hexadecimal_number());
                strcat(question," to binary: \n");
                questions[i] = question;
            }
    }
    else if(strcmp(question_code, "H2D") == 0) {
        for(int i=0; i< number_of_questions; i++) {
                char * question = malloc(sizeof(char) *150);
                sprintf(question, "%s", generate_hexadecimal_number());
                strcat(question," to decimal: \n");
                questions[i] = question;
            }
    }
    else if(strcmp(question_code, "B2H") == 0) {
        for(int i=0; i< number_of_questions; i++) {
                char * question = malloc(sizeof(char) * 150);
                sprintf(question, "%s", generate_binary_number());
                strcat(question," to hexadecimal: \n");
                questions[i] = question;
            }
    }
}
