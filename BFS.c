#include<stdio.h>
#include<stdlib.h>

int n,r, adj[10][10], vis[10], st, top=-1, q[10], i, j, p;

void insert(int item)
{
if(r==9)
{
printf("\nQueue is full");
}
else
{
r++;
q[r]=item;
if(f==-1)
    f++;
}
}

int delete()
{
if(f==-1)
return 0;
else
{
p=q[f];
f++;
return p;
}
}

void bfs(int s, int n)
{
insert(s);
vis[s]=1;
p=delete();
if(p!=0)
printf("%d ",p);
while(p!=0)
{
for(i=1;i<=n;i++)
{
if(adj[p][i]==1 && vis[i]==0)
{
insert(i);
vis[i]=1;
}
}
p=delete();
if(p!=0)
printf("%d ",p);
}
}

int main()
{
  printf("\nEnter the no of vertices:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    
    
    printf("\nEnter starting vertex: ");
    scanf("%d",&st);
    printf("\nBFS ORDER: \n");
    bfs(st,n);
    printf("\n");
    return 0;
}
