#include "numbers.h"
#include <time.h>
#include <stdlib.h>
#include <math.h>

const char * convert_dec_to_bin(const char * to_convert) {
    int num_in_bin = strtol(to_convert, NULL, 2);
    static char num[100];
    sprintf(num, "%d", num_in_bin);
    return num;

}

const char * convert_dec_to_hex(const char * to_convert) {
    static char hex[100];
    sprintf(&hex, "%x", to_convert);
    return hex;
}

const char * convert_bin_to_dec(const char * to_convert) {
    int num_in_dec = strtol(to_convert, NULL, 10);
    static char num[100];
    sprintf(num, "%d", num_in_dec);
    return num;
}

// Convert a number from binary to hexidecimal
const char * convert_bin_to_hex(const char * to_convert) {
    int num = strtol(to_convert, NULL, 2);
    static char hex[100];
    sprintf(&hex, "%x", num);
    return hex;
}

// Convert a number from hexidecimal to decimal
const char * convert_hex_to_dec(const char * to_convert) {
    char hex[100];
    sprintf(&hex, "%x", to_convert);
    int num_in_dec = strtol(hex, NULL, 10);
    static char num[100];
    sprintf(num, "%d", num_in_dec);
    return num;

}

// Convert a number from hexidecimal to binary
const char * convert_hex_to_bin(const char * to_convert) {
    char hex[100];
    sprintf(&hex, "%x", to_convert);
    int num_in_bin = strtol(hex, NULL, 2);
    static char num[100];
    sprintf(num, "%d", num_in_bin);
    return num;
}

// Generate a random decimal number
const char * generate_decimal_number() {
    srand(time(NULL));
    static char num[100];
    sprintf(num, "%d", rand());
    return num;
}

// Generates a random hexicidemal number
const char * generate_hexadecimal_number() {
    srand(time(NULL));
    static num[100];
    int dec_num = strtol(generate_decimal_number(), NULL,10);
    sprintf(num, "%x", dec_num);
    return num;
}

// Generates a random binary number
const char * generate_binary_number() {
    /*
    srand(time(NULL));
    static char num[100];
    sprintf(num, "%s", convert_dec_to_bin(generate_decimal_number()));
    return num;
    */

    srand(time(NULL));
    char * one_or_zero[2] = {"1", "0"};
    static char num[100];
    int num_digits = (rand() % 99) + 1;
    for(int i=0; i<num_digits;i++) {
        int which_digit = (rand() % 2);
        strcat(num, one_or_zero[which_digit]);
    }
    return num;

}

