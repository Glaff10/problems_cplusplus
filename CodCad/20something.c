#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <assert.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>


int main(){

    char c[6] = "DAISY", c_aux[6];
    int n = strlen(c), i, tam = 1;

    for(i = 0; i<n; tam++, i++){

        strncpy(c_aux, c, tam);
        c_aux[tam]='\0';
        strlwr(c_aux);
        printf("%s\n", c_aux);
    }
    int j;
    strlwr(c);
    tam = n-1;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            printf("%c", c[j]);
        }
        printf("\n");
    }

    return 0;

}
