#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main( void) {
    for ( int loop = 0; loop < 4; ++loop) {
        for ( int each = 0; each < 4; ++each) {
            printf ( "\rloading%.*s   \b\b\b", each, "...");
            fflush ( stdout);//force printing as no newline in output
            sleep ( 1.4);
        }
    }
    printf ( "\n");
    return 0;
}
