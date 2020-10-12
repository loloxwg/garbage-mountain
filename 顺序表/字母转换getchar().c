//小写转大写输出字符，askii码，内存大小

#include<stdio.h>
int main(){
    char ch; 
    printf("please input a lowercase:");
    ch=getchar();
    ch=ch-32;
    printf("%c %d %d",ch,ch,sizeof(ch));
}

