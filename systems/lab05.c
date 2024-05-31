
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

      void loop(int a[], int size) {
      	for (int i=0; i <size; i++) {
           a[i] = i;
        }
      }
      
      int main() {
      	int size = 100000;
        struct timeval tstart, tend;
        int *arr = malloc(size * sizeof(int));
        gettimeofday(&tstart, NULL);
        loop(arr, size);
        gettimeofday(&tend, NULL);
        printf("tendusec: %ld\n", tend.tv_usec);
        printf("tstart: %ld\n", tstart.tv_usec);
        // long timer = tend.tv_sec - tstart.tv_sec + (tend.tv_usec - tstart.tv_usec)/1.e6;
        // long timer = tend.tv_sec - tstart.tv_sec + (tend.tv_usec - tstart.tv_usec);
        long timer = (tend.tv_sec - tstart.tv_sec) * 1000000 + tend.tv_usec-tstart.tv_usec;
        printf("Size: %d, Time for loop: %ld usec\n", size, timer);
        printf("It works\n");
        return 0;
      }
