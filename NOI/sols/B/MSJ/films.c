#include <stdio.h>
#include <stdlib.h>

int n, m;

int all_watched(int *);
void watch_step(int *);

int main(){
	int t, l, time = 0;
	scanf("%d %d %d %d", &n, &m, &t, &l);

	int films[n];
	for(int i = 0; i < n-1; ++i) scanf("%d ", films + i);
	scanf("%d", films + n -1);

	int counter[n];
	for(int i = 0; i < n; ++i) counter[i] = 0;
	for(int i = 0; i < n; ++i) counter[films[i]-1]++;
	while(!all_watched(counter)){
		time = time + l + t;
		watch_step(counter);
	}
	printf("%d", time);
	return 0;
}

int all_watched(int *counter){
	for(int i = 0; i < n; ++i)
		if(counter[i] > 0) return 0;
	return 1;
}

void watch_step(int *counter){
	for(int j = 0; j < m; ++j){
		int max_element = 0;
		for(int i = 1; i < n; ++i)
			if(counter[max_element] < counter[i]) max_element = i;
		counter[max_element]--;
	}
}
