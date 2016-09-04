#ifndef NUMBERS_H
#define NUMBERS_H

// Converts a number from decimal to binary
const char * convert_dec_to_bin(const char * to_convert);

// Converts a number from decimal to hexidecimal
const char * convert_dec_to_hex(const char * to_convert);

// Convert a number from binary to decimal
const char * convert_bin_to_dec(const char * to_convert);

// Convert a number from binary to hexidecimal
const char * convert_bin_to_hex(const char * to_convert);

// Convert a number from hexidecimal to decimal
const char * convert_hex_to_dec(const char * to_convert);

// Convert a number from hexidecimal to binary
const char * convert_hex_to_bin(const char * to_convert);

// Generates a randomm decimal number
const char * generate_decimal_number();

// Generates a random hexicidemal number
const char * generate_hexadecimal_number();

// Generates a random binary number
const char * generate_binary_number();

#endif // NUMBERS_H
