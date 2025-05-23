//
// Created by robot on 5/5/25.
//
#include "htmc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int generate_html_file(char* file, char* filename) {
    //writing to file
    FILE *fp= fopen(filename, "w+");
    int descriptor = fileno(fp);
    if (fp == NULL)
    {
        fprintf(stderr, "\nError opend file\n");
        fclose(fp);
        return -1;
    }
    else
    {
        //fprintf(fp, "This is testing for fprintf...\n");
        fputs(file, fp);
        printf("The file descriptor is %d\n", descriptor);
        fclose(fp);
    }
    //reading the file
    /*
    //char buff[1024];
    fp = fopen("index.html", "r");
    while (fgets(buff, sizeof(buff), fp))
    {
        printf("%s\n", buff);
    }
    fclose(fp);
    */
    return 0;
    /*while (!feof(fp))
    {
    fgets(buff, 255, (FILE*)fp);
    //fscanf(fp, "%s", buff);
    printf("%s\n", buff);
    }
    */
}

int generate_page(char* filename) {
    int i;
    char *pagefile = NULL;
    char* piscineweb = htmc(htmc_doctypehtml,
        html(head(), htmc_style("h1 {text-align: center;}" 
                                "td {text-align: center; align: center;}"),
             htmc_title("Piscine Web"),
             body(htmc_ccode(htmc_yield(
             h1("Piscine Web"), 
             htmc_table(htmc_tr(
             htmc_td(htmc_img("src=bsod_1.png")),
             htmc_td(htmc_img("src=bsod_2.png"))
             )), 
            );
             
)
)
)
);
    

    char *basics = htmc(htmc_doctypehtml,
            html(head(), htmc_style("h1 {color:Red; text-align: center;}" 
                                    "td {text-align: center; align: center;}" 
                                    "p {font-family: monospace; text-align:right;}"),
                 htmc_title("Basics"),
                 body(htmc_ccode(htmc_yield(
                 h1("Basic WebShop"), 
                 htmc_table(htmc_tr(htmc_td(htmc_img("src=https://assets.s-bol.com/nl/static/assets/images/giftcard/overview/saldochecker.png")),
                 htmc_td(htmc_img("src=https://easyfairsassets.com/sites/23/2022/11/210121_megekko_logo_2021_RGB_beeldmerk-boven-slogan_800x598.jpg"))
                 )), 
                 htmc_hr(),
                 htmc_p(htmc_i("© aalimov 2025"))
                );
                 
    )
    )
    )
    );

    char *tab = htmc(htmc_doctypehtml,
            html(head(), htmc_style("table {width: 750px; height: 150px; border: 1px solid black;}"
                                    "td {bgcolor: green;}" ),
                 htmc_title("Piscine Web"),
                 body(htmc_ccode(htmc_yield(
                 htmc_table(htmc_tr(htmc_td("First Cell"),
                 htmc_td("Second Cell")
                 )),
                );
                 
    )
    )
    )
    );

    if (strstr(filename, "basics") != NULL)
    {
        pagefile = basics;
    } else if (strstr(filename, "piscineweb") != NULL)
    {
        pagefile = piscineweb;
    } else if (strstr(filename, "tab") != NULL)
    {
        pagefile = tab;
    } else
    {
        printf("Unable to generate an HTML page because it is not implemented yet %s\n", __FILE__);
        printf("Exiting...\n");
        exit(EXIT_FAILURE);
    }

    generate_html_file(pagefile, filename);
    free(pagefile);
    return 0;
}

