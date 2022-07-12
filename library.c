#include <mcheck.h>
#include <stdlib.h>
#include <malloc.h>

void *arr[];
int i = 0;
int j = 0;
void __attribute__((constructor)) constructor(void){
  
}
void *new(size_t type){
    arr[i] = malloc(type);
    i++;
    return arr[i-1];

}


void __attribute__((destructor)) destructor(void){
  for (j = 0; j <= i; j++){
    free(arr[j]);
  }
}