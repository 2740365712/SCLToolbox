#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <windows.h>
using namespace std;
typedef long long ll;
int cmd,len;
int knowit(char a[100]);
int main() {
	char input[100];
	while(1) {
		cout<<"---------------------------------------------------------------\n简易命令行工具箱-SCLToolbox v0.5.0\n功能指令菜单:\n0.退出\n1.关于\n2.清屏\n3.ping测试\n4.帮助\n---------------------------------------------------------------\n请输入指令：";
		cin>>input;
		len=strlen(input);
		len<100 ? cmd=knowit(input) : cmd=0;
		if(cmd==0) {
			cout<<"Goodbye!";
			break;
		} else if(cmd==1) {
			system("cls");
			cout<<"------------------------------------------------------------------\n软件版本：v0.5.0(20210630)\n作者：梦里徜徉（星夜Starlit-Night）\n编写日期：2021年6月30日\n\n";
		} else if(cmd==2) {
			system("cls");
		} else if(cmd==3) {
			system("cls");
			while(1) {
				int a;
				printf("ping测试（版本20210630）\n-----------------------------------------\n功能列表：\n[1]开始ping测试\n[2]退出\n-----------------------------------------\n请输入：");
				scanf("%d",&a);
				if(a==1) {
					system("cls");
					printf("现在开始ping......");
					system("ping www.magicyan.xyz");
					cout<<endl;
					system("ping www.luogu.com.cn");
					cout<<endl<<endl;
				} else if(a==2) break;
				else cout<<"No such command!";
			}
		} else if(cmd==4) {
			cout<<"帮助中心\n"<<"暂无内容，请等待更新。"<<endl;
		} else cout<<"No such command!\n";
	}
	return 0;
}
int knowit(char a[100]) {
	if(len==1&&a[0]>='0'&&a[0]<='9') {
		return a[0]-'0';
	}
	return 00000;
}



