#include <stdio.h>
#include "weather_info.h"

int generate_website() {
    char *str = "Weather report";
    char *title = "Main";
    printf("Content-type:text/html\n\n");
	printf("<html>\n<head>\n<title>\n%s\n", title);
    printf("</title>\n</head>\n<body>\n");
	printf("<center>\n");
    printf("<h1>%s</h1>\n", str);
    printf("<p>\n");
    printf("RETURN CODE: %d\n", get_weather_info());
	printf("</p>\n");
    printf("</body>\n</html>\n");
	printf("\n");
    return 0;
}