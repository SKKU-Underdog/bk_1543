#include <stdio.h>
int same(char text[],char word[],int t_len,int w_len,int idx){
	if(idx+w_len-1>t_len) 
		return 0;
	for(int i=0;i<w_len;i++){
		if(text[idx+i]!=word[i])
			return 0;
	}
	return 1;
}

int main(){
	char text[2500],word[50],c;
	int t_len=0,w_len=0,result=0;
	while(1){
		scanf("%c",&c);
		if(c=='\n')
			break;
		text[t_len++]=c;
	}
	while(1){
		scanf("%c",&c);
		if(c=='\n'||c=='EOF')
			break;
		word[w_len++]=c;
	}
	text[t_len]='\0';
	word[w_len]='\0';

	for(int i=0;i<t_len;i++){
		if(same(text,word,t_len,w_len,i)){
			result++;
			i+=(w_len-1);
		}
	}
	printf("%d\n",result);
}
