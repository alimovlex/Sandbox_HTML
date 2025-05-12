#include <stdio.h>

int generate_website() {
    printf("Content-type:text/html\n\n");
	printf("<html><head><title>Piscine Web</title></head><body>");
	printf("<h1>Hello World!</h1>");
	printf("</body></html>");
	printf("\n");
    return 0;
}