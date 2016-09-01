#ifndef NUMBERS_H
#define NUMBERS_H

// Converts a number from decimal to binary
char * convert_dec_to_bin(char * to_convert);

// Converts a number from decimal to hexidecimal
char * convert_dec_to_hex(char * to_convert);

// Convert a number from binary to decimal
char * convert_bin_to_dec(char * to_convert);

char * convert_dec_to_hex(char * to_convert);
// Convert a number from binary to hexidecimal
char * convert_bin_to_hex(char * to_convert);

// Convert a number from hexidecimal to decimal
char * convert_hex_to_dec(char * to_convert);

// Convert a number from hexidecimal to binary
char * convert_hex_to_bin(char * to_convert);

// Generates a randomm decimal number
char * generate_decimal_number();

// Generates a random hexicidemal number
char * generate_hexadecimal_number();

// Generates a random binary number
char * generate_binary_number();

#endif // NUMBERS_H
