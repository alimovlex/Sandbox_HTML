#include <stdio.h>
#include "weather_info.h"

int generate_website() {
    char *str = "Hello World!";
    char *title = "Piscine Web";
    get_weather_info();
    printf("Content-type:text/html\n\n");
	printf("<html><head><title>%s", title);
    printf("</title></head><body>");
	printf("<h1><center>%s", str);
    printf("</center></h1>");
	printf("</body></html>");
	printf("\n");
    return 0;
}