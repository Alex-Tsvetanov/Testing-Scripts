#include <stdio.h>
#include <stdlib.h>

int n;

int to_int(char *);

int main(){
	scanf("%d", &n);
	char *input = (char *)malloc(100000*sizeof(char));
	int *number = (int *)malloc(sizeof(int));
	char sum[n];
	for(int j = 0; j < n; ++j){
		int index_prev_op = -1;
		int current_index = 0;
		scanf("%s", input);
		for(int i = 0;; ++i){
			if(input[i] == '+' || input[i] == '*' || input[i] == '\0'){
				number[current_index++] = to_int(input+index_prev_op+1);
				index_prev_op = i;
				number = (int *)(realloc(number, sizeof(int)*current_index+1));
				if(input[i] =='\0') break;
			}
		}
		current_index = 0;
		for(int i = 0; input[i]; ++i){
			if(input[i] == '+') current_index++;
			else if(input[i] == '*'){
				number[current_index+1] *= number[current_index];
				number[current_index++] = 0;
			}	
		}
		sum[j] = 0;
		while(current_index >= 0) sum[j] += number[current_index--];
	}
	for(int i = 0; i < n; ++i) printf("%d\n", sum[i]%2);
	return 0;
}


int to_int(char *str){
	int num = 0;
	while(*str != '+' && *str != '*' && *str != '\0'){
		num = num * 10 + *str - '0';
		str++;
	}
	return num;	
}



