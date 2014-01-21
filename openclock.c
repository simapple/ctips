#include <stdio.h>

#define NUMBER_MAX 10;

struct number{
	int tag;
	int *ns;
};
int main(){
	int pool[10] = {0,1,2,3,4,5,6,7,8,9};
	struct number *first;
	first.tag = 0;
	first.ns = pool;
	printf("%d",*(first.ns + 7));
	return 0;
}

int jisuan(){
	
}

int firstclick(){
	static int first;
	scroll(&first);
	scroll(&first);
	return first;
}

int secondclick(){
	static int second;
	static int fourth;
}

int thirdclick(){
	static int third;
	static int fourth;
	
}

int fourthclick(){
	static int;
	static int; 
}

void scroll(*p){
	if(*p < 9){
		*p++;
	}else{
		*p = 0;
	}	
}
