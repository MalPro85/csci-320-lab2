#include <sys/time.h>
#include <stdio.h>
#include <math.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.
    

    double e_seconds = end_time->tv_sec - start_time->tv_sec;
    double e_mseconds = end_time->tv_usec - start_time->tv_usec;
    e_mseconds = e_mseconds / pow(10, 6);

    return e_seconds + e_mseconds;
}
