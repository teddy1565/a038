#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define strLeng 15

int main(){
    char keyin[strLeng];
    char rev[strLeng];
    int i,m,l,s;
    while(fgets(keyin,strLeng,stdin)!=NULL){
        for(i=0;keyin[i]!='\n'&&keyin[i]!='\0';i++);
        rev[i]='\0';
        for(m=0,l=i-1;m<i;m++,l--){
            rev[l] = keyin[m];
        }
        for(m=0;m<i;m++)if(rev[m]!='0')break;
        if(i==m){
            printf("%s\n","0");
        }
        else{
            for(l=0;l<i;l++,m++){
                keyin[l]=rev[m];
            }
            keyin[l]='\0';
            printf("%s\n",keyin);
        }
    }
    return 0;
}