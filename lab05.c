
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
        double start = gettimeofday(&tstart, NULL);
        printf("start: %f \n", start);
        loop(arr, size);
        double end = gettimeofday(&tend, NULL);
        printf("end: %f \n", end);
        double diff = end - start;

        printf("Size: %d, Time for loop: %f\n", size, diff);
        printf("It works\n");
        return 0;
      }
