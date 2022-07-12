#include <stdio.h>
#include <mcheck.h>
int main(){
	mtrace();
	void *ptr = new(0x15);
	void *arr = new(0x20);
}