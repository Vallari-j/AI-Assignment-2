#include <stdio.h>

#define MAX 10

int graph[MAX][MAX], visited[MAX];

void dfs(int v, int n) {
    int i;

    printf("%d ", v);
    visited[v] = 1;

    for(i=0;i<n;i++) {
        if(graph[v][i] && !visited[i]) {
            dfs(i,n);
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

    dfs(start,n);

    return 0;
}
