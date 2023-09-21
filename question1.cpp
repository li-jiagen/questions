#include<stdio.h>
#include<string.h>
//输入二叉树的前序遍历和中序遍历
void hoge(char *pre,char *in,int length){
	char c=pre[0];
	if(length == 0){
		return;
	}
	if(length ==1){
		printf("%c",c);
		return;
	}
	int i=0;
	while(in[i]!=c){
		i++;
	}
	hoge(pre+1,in,i);
	hoge(pre+i+1,in+i+1,length-1-i);
	printf("%c",c);
}
//输出二叉树的后序遍历
int main(){
	char pre[30],in[30];
	int length;
	while(scanf("%s%s",pre,in)!=EOF){
		length = strlen(pre);
		hoge(pre,in,length);
	}
	return 0;
}
