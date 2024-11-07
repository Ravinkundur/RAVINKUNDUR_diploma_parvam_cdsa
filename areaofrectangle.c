#include<stdio.h>
int main()
{
    int b=50 ,h=12;
    int res=area(b,h);
    printf("%d",res);
    return 0;

}
int area(int b,int h){
    int c=b*h;
    return c;
}