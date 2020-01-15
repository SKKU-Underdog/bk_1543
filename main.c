#include<stdio.h>
#define IN_MAX 2500

int _strlen(char ch[]){
	int cnt=0;

	while(ch[cnt] != '\0'){
		cnt++;
	}

	return cnt;
}

int main()
{
	char input[IN_MAX+1];
	int inlen,filen;
	char find[51];
	int cnt=0;

	gets(input);
	gets(find);

	inlen = _strlen(input);
	filen = _strlen(find);

	//printf("%d %d\n",inlen,filen);

	for(int i=0;i<inlen-filen+1;){
		int flag = 0;
		for(int j=0;j<filen;j++){
			if(input[i+j] != find[j]){
				flag = 1;
				break;
			}
		}
		if(flag){
			i++;
			continue;
		}
		i+=filen;
		cnt++;
	}

	printf("%d\n",cnt);

	return 0;
}
