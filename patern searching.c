#include<stdio.h>
#include<string.h>
main(){
	char wd[100],wdCheck[100];
	scanf("%s",wd);
	scanf("%s",wdCheck);
	int i,j,n=0;
	for(i=0;i<strlen(wd)-strlen(wdCheck)+1;i++){
		for(j=0;j<strlen(wdCheck);j++){
			if(wd[i+j] != wdCheck[j]){
				break;
			}
		}
		if(j==strlen(wdCheck)){
			n++;
			//printf("%d\n",i);
		}
	}
	printf("%d",n);
}
