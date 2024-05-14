
#include<bits/stdc++.h>
using namespace std;
#define MAX_M 20
#define MAX_N 20

//typedef struct {
//    int x;
//    int y;
//} Point;
//
//typedef struct {
//    Point array[MAX_M * MAX_N];
//    int front;
//    int rear;
//} Queue;
//
//void initQueue(Queue *q) {
//    q->front = -1;
//    q->rear = -1;
//}
//
//bool isEmpty(Queue *q) {
//    return q->front == -1;
//}
//
//void enqueue(Queue *q, Point p) {
//    if (isEmpty(q)) {
//        q->front = 0;
//        q->rear = 0;
//    } else {
//        q->rear++;
//    }
//    q->array[q->rear] = p;
//}
//
//Point dequeue(Queue *q) {
//    Point p = q->array[q->front];
//    if (q->front == q->rear) {
//        q->front = -1;
//        q->rear = -1;
//    } else {
//        q->front++;
//    }
//    return p;
//}

	int directions[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int maxTime = 0;
int bfs(int start_x, int start_y,int m,int n, vector< vector<int> > &fortress) {
//        bool visited[MAX_M][MAX_N] = {false};
        vector< vector<bool> > visited(MAX_M, vector<bool> (MAX_N,0) );
//        int distance[MAX_M][MAX_N] = {0};
        vector< vector<bool> > distance(MAX_M, vector<bool> (MAX_N,0));
//        Queue q;
        queue< pair<int,int> > q; 
        
//        initQueue(&q);

//        Point start = {start_x, start_y};
        pair<int,int> start = make_pair(start_x, start_y);
        
//        enqueue(&q, start);
        q.push(start);
        visited[start_x][start_y] = true;

        while (!q.empty()) {
            pair<int,int> p = q.front();
            q.pop();
            int i;
            for (i = 0; i < 4; i++) {
                int nx = p.first + directions[i][0];
                int ny = p.second + directions[i][1];
                if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny] && fortress[nx][ny] == 0) {
                    distance[nx][ny] = distance[p.first][p.second] + 1;
                    visited[nx][ny] = true;

                    // Point newPoint = {nx, ny};
                    pair<int,int> newPoint = make_pair(nx, ny);
                    // enqueue(&q, newPoint);
                    q.push(newPoint);
                }
            }
        }

        return distance[m - 1][n - 1];
    }


int maxThiefTime(int m, int n, vector< vector<int> > &fortress) {
    
    int distance = bfs(0, 0,m,n,fortress);
    maxTime = distance;

	int i;
    for (i = 0; i < m; i++) {
    	int j;
        for (j = 0; j < n; j++) {
            if (fortress[i][j] == 0) {
                fortress[i][j] = 1;
                distance = bfs(0, 0,m,n,fortress);
                maxTime = max(maxTime, distance);
                fortress[i][j] = 0;
            }
        }
    }

    return maxTime + 1;
}

int main() {
    int m, n;
	cin>>m>>n;

//    int fortress[MAX_M][MAX_N];
    vector< vector<int> > fortress(MAX_M, vector<int> (MAX_N,0));
    int i;
    for (i = 0; i < m; i++) {
    	int j;
        for (j = 0; j < n; j++) {
            scanf("%d", &fortress[i][j]);
        }
    }

    int result = maxThiefTime(m, n, fortress);
    printf("%d", result);

    return 0;
}
