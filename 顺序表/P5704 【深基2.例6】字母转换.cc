


#include <bits/stdc++.h>
int main (){
    char a ;
    scanf("%c",&a);
    printf("%c", char(int(a)-32));
}


#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	char a; //定义一个字符
	cin>>a; //输入
	cout<<(char)(a-('a'-'A'));
   //由于字符存储的是ASCII码，所以先用一个字符小写-大写做例子，再用a-这个差，强制类型转换，得出此值
	return 0;
}
