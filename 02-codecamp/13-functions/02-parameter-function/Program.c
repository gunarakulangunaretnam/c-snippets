#include <stdio.h>
#include <stdlib.h>

int main(){

	sayHi("guna",5);
	return 0;

}


void sayHi(char name[],int age){

	printf("hello %s. and your age is %d\n",name,age);
}
