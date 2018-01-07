#include <stdio.h>
#include <string.h>

int is_odd(int);
int str_conv(char arr[]);
int char_conv(char);
char  int_conv(int);

int main(){
	int n;
	scanf("%d", &n);
	char number[100000][n];
	int returner[n];
	int i=0;
	while(i<n){
		scanf("%s", number[i]);
		returner[i] = is_odd(str_conv(number[i]));
		i++;
	}
	for(int i=0; i<n; i++){
		printf("%d\n", returner[i]);
	}
	return 0;
}

int is_odd(int a){
	if(a%2==0){
		return 0;
	}
	else{
		return 1;
	}
}

int str_conv(char arr[]){
	int size = strlen(arr);
	int num = 0;
	for(int i=0; i<size; i++){
		if(arr[i]=='*'){
			num += char_conv(arr[i-1])*char_conv(arr[i+1]);
			arr[i-1] = '0';
			arr[i] = '+';
			arr[i+1] = int_conv(char_conv(arr[i-1])*char_conv(arr[i+1]));
		}
	}
	for(int i=0; i<size; i++){
		if(arr[i]=='+'){
			num+= char_conv(arr[i-1])+char_conv(arr[i+1]);
			arr[i-1] = '0';
			arr[i] = '+';
			arr[i+1] = int_conv(char_conv(arr[i-1])+char_conv(arr[i+1]));
		}
	}
	return num;
}

int char_conv(char c){
	return c-'0';
}
char int_conv(int a){
	return a+'0';
}
