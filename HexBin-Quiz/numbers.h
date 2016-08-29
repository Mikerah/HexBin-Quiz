#ifndef NUMBERS_H
#define NUMBERS_H

// Generates a randomm decimal number
int generate_decimal_number();

// Generates a random hexicidemal number
int generate_hexidecimal_number();

// Generates a random binary number
int generate_binary_number();

// Converts a number from decimal to binary
int convert_dec_to_bin(int to_convert);

// Converts a number from decimal to hexidecimal
int convert_dec_to_hex(int to_convert);

// Convert a number from binary to decimal
int convert_bin_to_dec(int to_convert);

// Convert a number from binary to hexidecimal
int convert_bin_to_hex(int to_convert);

// Convert a number from hexidecimal to decimal
int convert_hex_to_dec(int to_convert);

// Convert a number from hexidecimal to binary
int convert_hex_to_bin(int to_convert);

#endif // NUMBERS_H
