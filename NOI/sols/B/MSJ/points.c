#include <stdio.h>

int n, m;

typedef struct point_t{
	int x,y;
} point_t;

int is_in_rect(point_t, point_t *);

int main(){
	int points_in = 0;
	scanf("%d %d", &n, &m);
	point_t rectangles[n];
	point_t tmp;
	scanf("%d %d", &rectangles->x, &rectangles->y);
	for(int i = 1; i < n; ++i){	
		scanf("%d %d", &tmp.x, &tmp.y);
		tmp.x += rectangles[i-1].x;
		rectangles[i] = tmp;
	}
	for(int i = 0; i < m; ++i){
		scanf("%d %d", &tmp.x, &tmp.y);	
		points_in += is_in_rect(tmp, rectangles);
	}
	printf("%d", points_in);
}

int is_in_rect(point_t p, point_t *rects){
	if(p.x > rects[n-1].x) return 0;
	int i = 0;
	while(rects[i].x < p.x) i++; 
	if(p.y <= rects[i].y) return 1;
	return 0;
}


