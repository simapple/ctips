#include <stdio.h>

#define NUMBER_MAX 10;

typedef struct number{
	int first;
	int second;
	int third;
	int fourth;
	int *ns;
} number2;
int main(){
	int pool[10] = {0,1,2,3,4,5,6,7,8,9};
	struct number pl;
	pl.first = 0;
	pl.second =0 ;
	pl.third = 0;
	pl.fourth = 0;
	pl.ns = pool;
	//printf("%d",*(first.ns + 7));
	int i = 0;
	while (i < 20){
		jisuan(&pl);
		printf("%d\n",pl.first);
		i++;	
	}

	return 0;
}

void jisuan(number2 *p){
	scroll(p);
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

void scroll(number2 *p){
	if(p->first < 9){
		p->first++;
	}else{
		p->first = 0;
	}	
}
