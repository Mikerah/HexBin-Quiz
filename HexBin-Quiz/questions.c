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

char * generate_questions(int number_of_questions, char * question_code) {
    char * questions = malloc(sizeof(char *) * number_of_questions);
    switch(question_code){
        case "D2B":
            for(int i=0; i< number_of_questions; i++) {
                questions[i] = strcat(generate_decimal_number()," to binary: ");
            }
        case "B2D":
            for(int i=0; i< number_of_questions; i++) {
                questions[i] = strcat(generate_binary_number()," to decimal: ");
            }
        case "D2H":
            for(int i=0; i< number_of_questions; i++) {
                questions[i] = strcat(generate_decimal_number()," to hexadecimal: ");
            }
        case "H2B":
            for(int i=0; i< number_of_questions; i++) {
                questions[i] = strcat(generate_hexadecimal_number()," to binary: ");
            }
        case "H2D":
            for(int i=0; i< number_of_questions; i++) {
                questions[i] = strcat(generate_hexadecimal_number()," to decimal: ");
            }
        case "B2H":
            for(int i=0; i< number_of_questions; i++) {
                questions[i] = strcat(generate_binary_number()," to hexadecimal: ");
            }
    }
    return questions;

}
