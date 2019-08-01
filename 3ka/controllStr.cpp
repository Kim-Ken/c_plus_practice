#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
	char k[514]="Koishichan is ";
	char c[514]="cute . ";
	printf("%s %s\n",k,c);
	printf("%d \n",strlen(k));
	printf("%s \n",strcpy(c,"very cute."));
	printf("%s \n",strcat(k,c));
	printf("aa = aa ha %d\n",strcmp("aa","aa"));
	printf("a@a = aaa ha %d\n",strcmp("a@a","aaa"));
	printf("summomommommonouti in %d\n",strchr("summmomommommonouti",'m'));
	printf("summomommommonouti in %d\n",strrchr("summmomommommonouti",'m'));
}
