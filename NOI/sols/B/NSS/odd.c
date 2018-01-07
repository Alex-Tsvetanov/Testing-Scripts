#include <stdio.h>
#include <string.h>

int is_digit(char);
int to_integer(char *);
int is_odd(int);

int main(){
	int n;

	scanf("%d", &n);
	getchar();

	char str[100000];
	char small_str[100000];
	int result;

	int sign;
	int index;

	for (int i = 0; i < n; i++){
		result = 0;
		str[0] = '\0';
		small_str[0] = '\n';	

		fgets(str, 100000, stdin);
		
		for (int j = 0; j < strlen(str); j++){
			index = 0;
			
			small_str[1] = '\0';

			while (is_digit(str[j])){
				small_str[index] = str[j];
				index++;
				j++;
			}

			sign = str[j];

			for (int k = 0; k < strlen(small_str); k++){
				if (!is_digit(small_str[k])){
					small_str[k] = '\0';
				}
			}

			result += to_integer(small_str);

			/*if (sign == '+'){
				result += to_integer(small_str);
			}
			if (sign == '-'){
				result -= to_integer(small_str);
			}
			else{
				result += to_integer(small_str);
			}*/
		}
		printf("%d\n", result);
		printf("%d\n", is_odd(result));

	}

	return 0;
}	

int is_digit(char c){
	if (c >= '0' && c <= '9'){
		return 1;
	}
	return 0;
}

int to_integer(char * str){
	int result = 0;
	for (int i = 0; i < strlen(str); i++){
		if (!is_digit(str[i])){
			return -1;
		}

		result = result*10 + str[i] - '0';
	}	

	return result;
}

int is_odd(int num){
	for (int i = 2; i < num - 1; i++){
		if (num%i == 0){
			return 0;
		}
	}
	return 1;
}
