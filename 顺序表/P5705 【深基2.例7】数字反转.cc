#include<bits/stdc++.h>   //文件头
using namespace std;
string a;                 //定义字符串
int main() 
{
    cin>>a;               //输入
    reverse(a.begin(),a.end());  //反转
    cout<<a;              //输出
    return 0;             //养成好习惯
}


#include<bits/stdc++.h>
using namespace std;
string a;
signed main()
{
	cin>>a;
	int len=a.size();//读取长度
	for(int i=len-1;i>=0;i--)//反转
	cout<<a[i];
	return 0;
}
