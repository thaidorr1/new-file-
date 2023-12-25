#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

void ch (char a[]){
    a[0] = toupper(a[0]);
    for(int i=1 ; i < strlen(a);i++){
        a[i] = tolower(a[i]);
    }
}
int main (){
    char a[100];
    fgets(a, 100, stdin);

    char b[100][100];
    int n;
    char *token = strtok (a," ");
    while (token != NULL){
        strcpy(b[n], token);
        ++n;
        token = strtok(NULL," ");
    }
    for(int i=0; i <n;i++){
        ch(b[i]);
        printf("%s", b[i]);
    }
}