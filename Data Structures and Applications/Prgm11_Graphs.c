/* 11. Develop a Program in C for the following operations on Graph(G) of Cities   
a) Create a Graph of N cities using Adjacency Matrix.   
b) Print all the nodes reachable from a given starting node in a digraph using DFS/BFS 
method. */

#include <stdio.h>
#include <stdlib.h>

int a[50][50], n, visited[50];
int q[20], front = -1, rear = -1;
int s[20], top = -1;

void bfs(int v) {
    int i, cur;
    visited[v] = 1;
    q[++rear] = v;
    printf("%d ", v);

    while (front != rear) {
        cur = q[++front];
        for (i = 1; i <= n; i++) {
            if (a[cur][i] == 1 && visited[i] == 0) {
                q[++rear] = i;
                visited[i] = 1;
                printf("%d ", i);
            }
        }
    }
    printf("\n");
}

void dfs(int v) {
    int i;
    visited[v] = 1;
    printf("%d ", v);

    for (i = 1; i <= n; i++) {
        if (a[v][i] == 1 && visited[i] == 0) {
            dfs(i);
        }
    }
}

int main() {
    int ch, start, i, j;

    printf("\nEnter the number of vertices in the graph: ");
    scanf("%d", &n);

    printf("\nEnter the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    while (1) {
        for (i = 1; i <= n; i++) visited[i] = 0; // Reset visited array before each choice
        printf("\n==>1. BFS: Print all nodes reachable from a given starting node");
        printf("\n==>2. DFS: Print all nodes reachable from a given starting node");
        printf("\n==>3: Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter the starting vertex: ");
                scanf("%d", &start);
                printf("\nNodes reachable from starting vertex %d are: ", start);
                bfs(start);
                for (i = 1; i <= n; i++) {
                    if (visited[i] == 0) {
                        printf("\nThe vertex that is not reachable is %d", i);
                    }
                }
                break;
            case 2:
                printf("\nEnter the starting vertex: ");
                scanf("%d", &start);
                printf("\nNodes reachable from starting vertex %d are: ", start);
                dfs(start);
                printf("\n");
                break;
            case 3:
                exit(0);
            default:
                printf("\nPlease enter a valid choice.");
        }
    }

    return 0;
}
