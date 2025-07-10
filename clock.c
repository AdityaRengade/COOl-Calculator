#include <stdio.h>
#include <time.h>
#include <unistd.h>  // For sleep function

int main() {
    int h, m, s;
    time_t now;
    struct tm *local;

    while (1) {
        time(&now);           
        local = localtime(&now); 

        h = local->tm_hour;    
        m = local->tm_min;     
        s = local->tm_sec;     

        printf("\r%02d:%02d:%02d", h, m, s); 
        fflush(stdout);                     
        sleep(1);                           
    }

    return 0;
}
    