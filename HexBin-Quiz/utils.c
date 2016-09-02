#include <stdio.h>
#include <stdlib.h>
#include "utils.c"


void save_question_to_file(FILE * fp, char * question, char * file_name) {
    fp = fopen(file_name, "w+");
    fprintf(fp, "%s\n", question);
    fclose(fp);
}
