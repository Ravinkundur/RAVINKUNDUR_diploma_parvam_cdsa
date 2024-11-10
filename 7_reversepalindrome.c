#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="aba";
    int start =0;
    int end=strlen(str)-1;
    char Temp;
    char org[20];
    strcpy(org,str);
    while(start<end){
    Temp=str[start];
    str[start]=str[end];
    str[end]=Temp;
    start++;
    end--;
    }
    printf("reversed string: %s\n",str);
    if(strcmp(org,str)==0){//.....
    printf("yes it's a pallindrome");

} else{

printf("No! it's not a pallindrome");
}
    return 0;
    }



