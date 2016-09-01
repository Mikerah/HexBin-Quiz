#include "numbers.h"
#include <time.h>
#include <stdlib.h>
#include <math.h>

char * convert_dec_to_bin(char * to_convert) {
    int num_in_bin = strtol(to_convert, NULL, 2);
    char num = num_in_bin + '0';
    return num;

}

char * convert_dec_to_hex(char * to_convert) {
    char hex[50];
    sprintf(&hex, "%x", input);
    return hex;
}

char * convert_bin_to_dec(char * to_convert) {
    int num_in_dec = strtol(to_convert, NULL, 10);
    char num = num_in_dec + '0';
    return num;
}

// Convert a number from binary to hexidecimal
char * convert_bin_to_hex(char * to_convert) {
    int num = strtol(to_convert, NULL, 2);
    char hex[50];
    sprintf(&hex, "%x", num);
    return hex;
}

// Convert a number from hexidecimal to decimal
char * convert_hex_to_dec(char * to_convert) {
    char hex[50];
    sprintf(&hex, "%x", to_convert);
    int num_in_dec = strtol(hex, NULL, 10);
    char num = num_in_dec + '0';
    return num;

}

// Convert a number from hexidecimal to binary
char * convert_hex_to_bin(char * to_convert) {
    char hex[50];
    sprintf(&hex, "%x", to_convert);
    int num_in_bin = strtol(hex, NULL, 2);
    char num = num_in_bin + '0';
    return num;
}

char * generate_decimal_number() {
    srand(time(NULL));
    return rand() + '0';
}

// Generates a random hexicidemal number
char * generate_hexadecimal_number() {
    srand(time(NULL));
    return convert_dec_to_hex(rand() + '0');
}

// Generates a random binary number
char * generate_binary_number() {
    srand(time(NULL));
    return convert_dec_to_bin(rand() + '0');
}

