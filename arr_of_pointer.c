#include<stdio.h>

main(){
	int a,i;
	int *box;
	box = (int *) malloc(4*sizeof(int));
	for(i=0;i<4;i++){
		scanf("%d",&a);
		box[i] = a;
	}
	for(i=0;i<4;i++){
		printf('%d',box);
		printf("%d ",box[i]);
	}
	
}
