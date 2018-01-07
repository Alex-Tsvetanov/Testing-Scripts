#include <cstdio>

struct Rectangle
{
	int Width;
	int Height;
};

struct Point
{
	int X;
	int Y;
};

Rectangle A[10000];

Point B[100001];

int main()
{
	int N, M, i, j, count = 0;
	scanf(" %d %d", &N, &M);
	
	for(i = 0; i < N; ++i)
	{
		Rectangle tmp;
		scanf(" %d %d", &(tmp.Width), &(tmp.Height));
		A[i] = tmp;
	}
	
	for(i = 0; i < M; ++i)
	{
		Point tmp;
		scanf(" %d %d", &(tmp.X), &(tmp.Y));
		B[i] = tmp;
	}
	
	int reached_distance;
	for(i = 0; i < M; ++i) // for each point
	{
		reached_distance = 0; // distance to previous
		for(j = 0; j < N; ++j) // check triangle
		{
			if(B[i].X < reached_distance) break;
			reached_distance += A[j].Width;
			if(B[i].X > reached_distance) continue;
			if(B[i].X <= A[j].Height)
			{
				++count;
				break;
			}
		}
	}
	
	printf("%d\n", count);
}