#include <stdio.h>

int main(){
	int n, m, T, L;
	int time = 0;
	
	scanf(" %d %d %d %d", &n, &m, &T, &L);

	int films_id[n];

	for (int i = 0; i < n; i++){
		films_id[i] = i;
	}

	for (int i = 0; i < n; i++){
		scanf(" %d ", &films_id[i]);
	}
	
	int i = 0;
	do{
		time+= T + L;
		for (int j = i + 1; j < m; j++){
			if (films_id[i] == films_id[j]){
				time+= T + L;
			}
		}
		i+=m;
	}while(i < n);

	printf("Time: %d\n", time);

	return 0;
}

