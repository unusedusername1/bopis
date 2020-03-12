#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
//this is melon

int main(int argc, string argv[]){
    if (argc != 2){
        printf("Usage: ./caesar <shift>\n");
        return 1;

    }
    int k = atoi(argv[1])%26;
    printf("%i",k);
    string c = get_string("input: ");
    char b[strlen(c)];
    for(int i = 0; i < strlen(c); i++){
        int d = (int)c[i];
        //printf("%i%c",d,(char)d);
        if(isalpha(c[i]) != 0){
            d+=k;
            //printf("%i;", (int)b[i]);
            if(isupper(c[i]) && d > 90){
                d = d - 26;
                //printf("loop;");
            }
            if(islower(c[i]) && d > 122){
                //printf("loop;");
                d = d - 26;
            }
        }
        //printf("%i%c%c\n", i,c[i], b[i]);
        b[i] = (char)d;
    }
        //printf("%i ",b[i]);
    printf("ciphertext: %s\n", b);
    //printf("%c", e[strlen(c)]);
}
