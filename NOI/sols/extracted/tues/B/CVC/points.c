#include <stdio.h>

struct point_t{
	int Xi;
	int Yi;
};

struct rectangle_t{
	int Wi;
	int Hi;
	struct point_t top_left;
	struct point_t bottom_left;
	struct point_t top_right;
	struct point_t bottom_right; 
};

int is_in(struct rectangle_t, struct point_t);

int main(){
	int N, M, Wi, Hi, Xi, Yi;
	scanf("%d %d", &N, &M);
	struct rectangle_t rectangles[N];
	struct point_t points[M];
	int Ox = 0;
	for(int i=0; i<N; i++){
		scanf("%d %d", &Wi, &Hi);
		rectangles[i].Wi = Wi;
		rectangles[i].Hi = Hi;
	}
	for(int i=0; i<M; i++){
		scanf("%d %d", &Xi, &Yi);
		points[i].Xi = Xi;
		points[i].Yi = Yi;
	}
	for(int i=0; i<N; i++){
		struct point_t top_left_point = {Xi = Ox, Yi = rectangles[i].Hi};
		struct point_t bottom_left_point = {Ox, 0};
		struct point_t top_right_point = {rectangles[i].Wi, rectangles[i].Hi};
		struct point_t bottom_right_point = {rectangles[i].Wi+Ox, 0};
		
		rectangles[i].top_left = top_left_point;
		rectangles[i].bottom_left = bottom_left_point;
		rectangles[i].top_right = top_right_point;
		rectangles[i].bottom_right = bottom_right_point;
		Ox += rectangles[i].Wi;
	}
	int count = 0;
	for(int i = 0; i<M; i++){
		for(int j = 0; j<N; j++){
			if(is_in(rectangles[j], points[i])==1){
				count++;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}

int is_in(struct rectangle_t rect, struct point_t point){
	if(rect.top_left.Yi>=point.Yi && point.Yi<=rect.top_right.Yi && rect.bottom_left.Xi<=point.Xi && point.Xi <=rect.bottom_right.Xi){
		return 1;
	}
	else{
		return 0;
	}



}
