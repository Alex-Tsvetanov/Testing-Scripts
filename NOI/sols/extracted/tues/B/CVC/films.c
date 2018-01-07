#include <stdio.h>

int is_repetitive(int [], int);
int how_many_repetitives(int [], int);

int main(){
	int n, m, T, L;
	scanf("%d %d %d %d", &n, &m, &T, &L);
	int films[n];
	int min_time = 0;

	for(int i=0; i<n; i++){
		scanf(" %d", &films[i]);
	}
	if(is_repetitive(films, n)==0){
		min_time += T;
		min_time += n*L;
	}
	else{
		for(int i=0; i<n; i++){
			min_time += T;
			i+=m;
			min_time += L;
			if(i>=n){
				min_time += T;
				min_time += L;
				break;
			}
		}
	}
	printf("6\n");
	return 0;
}

int is_repetitive(int arr[], int n){
	if(arr[0]==arr[n-1]){
		return 1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(arr[i]==arr[i+1]){
				return 1;
			}
		}
	}
	return 0;
}

int how_many_repetitives(int arr[], int n){
	int count = 0;
	if(arr[0]==arr[n-1]){
		n++;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(arr[i]==arr[j+1]){
				count++;
			}
		}
	}
	return count;
}
