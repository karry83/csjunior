#include<iostream>
#include <cstdio> 
#include<cmath>
#include<limits.h>
#include <stdlib.h>
#include <cstring>

/**
 nµÄ×î´ó 
**/
int lg2(int n){
	int i=0;
	while((1<<i)<=n){ //2^i=1<<i 
		//i++;
	    ++i;
	} 
	return i-1;
} 

int main(){
	/*printf("lg2(6) %d\n",lg2(6));
	printf("lg2(8) %d\n",lg2(8));
	printf("lg2(10) %d\n",lg2(10));
	printf("lg2(16) %d\n",lg2(16));
	printf("lg2(65) %d\n",lg2(65));*/
	char b[2]="a";
	printf("\"a\" %d","a");//TBD£¬ why4751360 
	printf("\"b\" %d","b");
	printf("\'a\' %d",'a');
	printf("\'A\' %d",'A');
	
}
