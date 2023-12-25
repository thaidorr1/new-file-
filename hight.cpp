#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (){
	char a[100];
	fgets(a,100, stdin);
	
	if (strlen(a) % 3 ==0){
		printf("YES");
	}
	else {
		printf("NO");
	}
}
