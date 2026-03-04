#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int graph[MAX][MAX], visited[MAX];
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int v) {
    if(rear == MAX-1)
        return;
    if(front == -1)
        front = 0;
    queue[++rear] = v;
}

int dequeue() {
    if(front == -1)
        return -1;
    int item = queue[front++];
    if(front > rear)
        front = rear = -1;
    return item;
}

void bfs(int start, int n) {
    int i, v;

    enqueue(start);
    visited[start] = 1;

    while(front != -1) {
        v = dequeue();
        printf("%d ", v);

        for(i=0;i<n;i++) {
            if(graph[v][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int n, i, j, start;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    printf("Enter adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    printf("Enter starting node: ");
    scanf("%d",&start);

    bfs(start,n);

    return 0;
}
