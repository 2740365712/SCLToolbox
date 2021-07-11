#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <windows.h>
using namespace std;
typedef long long ll;
char ca[100]="plus";
int cmd,len;
int knowit(char a[100]);
void pingtool();
int main() {
	char input[100];
	while(1) {
		cout<<"---------------------------------------------------------------\n简易命令行工具箱-SCLToolbox v0.6\n功能指令菜单:\n0.退出\n1.关于\n2.清屏\n3.ping测试\n4.帮助\n---------------------------------------------------------------\n请输入指令：";
		cin>>input;
		len=strlen(input);
		len<100 ? cmd=knowit(input) : cmd=0;
		if(cmd==0) {
			cout<<"Goodbye!";
			break;
		} else if(cmd==1) {
			system("cls");
			cout<<"------------------------------------------------------------------\n软件版本：v0.6(20210711)\n作者：梦里徜徉（星夜Starlit-Night）\n编写日期：2021年7月11日\n\n";
		} else if(cmd==2) {
			system("cls");
		} else if(cmd==3) {
			system("cls");
			pingtool();
		} else if(cmd==4) {
			cout<<"帮助中心\n"<<"整数加法运算指令（实验性）：plus n a1 a2 a3 …… an"<<"\n";
		} else if(cmd==101) {
				int n;
				double num[10000],sum=0;
				cin>>n;
				for(int i=0; i<n; i++) {
					cin>>num[i];
					sum+=num[i];
				}
				printf("%.2f\n",sum);
			}
		else cout<<"No such command!\n";
	}
	return 0;
}
int knowit(char a[100]) {
	if(len==1&&a[0]>='0'&&a[0]<='9') {
		return a[0]-'0';
	}else{
		if(!strcmp(a,ca)){
			return 101;
		}
	}
	return 99999;
}
void pingtool(){
	while(1) {
		int a,pto=1;
		cout<<"ping测试（版本20210711）\n-----------------------------------------\n功能列表：\n[1]开始ping测试\n[2]退出\n[3]调整ping设置\n-----------------------------------------\n请输入：";
		scanf("%d",&a);
		if(a==1) {
			system("cls");
			cout<<"现在开始ping......";
			switch (pto){
				case 1:system("ping www.luogu.com.cn");break;
				case 2:system("ping www.baidu.com");break;
				case 3:system("ping www.ithome.com");break;
				default:system("ping www.luogu.com.cn");
			}			
			cout<<"\n\n";
		} else if(a==2) break;
		else if(a==3){
			cout<<"\n-----------------------------------------\n设置要ping的网站：\n[1]洛谷（默认）\n[2]百度\n[3]IT之家\n请输入：";				
			cin>>pto;
			continue;
		}
		else cout<<"No such command!";
	}
}


