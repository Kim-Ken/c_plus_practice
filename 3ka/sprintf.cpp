#include<cstdio>
#include<iostream>

using namespace std;

int main(){
	char str[50];
	sprintf(str,"sprintf int %d",-514);
	printf("int %d\n",-514);
	printf("unsigned int %u\n",-514);
	printf("octal %o\n",-514);
	printf("hexadecimal %x\n",-514);
	printf("float %f\n",-514.514);
	printf("exponetial  %e\n",-51400.0);
	printf("char  %c\n",(unsigned char)51);
	printf("str %s\n",str);
}
