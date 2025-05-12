#include <stdio.h>
#include "website.h"

int main(int argc, char** argv) {

    if (argc == 1)
    {
        printf("No Extra Command Line Argument Passed "
               "Other Than Program Name \n");
        return -1; 
    } else if (argc == 2) {
        generate_page(argv[1]);
        printf("Generated page with name: %s\n", argv[1]);
        return 0;
    } else {
        printf("Too many arguments passed.\n");
        return -1;
    }

}
