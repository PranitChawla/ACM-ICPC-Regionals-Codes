#include<stdio.h>
#include<stdlib.h>
long map[310][3],tot,n,m,hash[310],ans=0,num[310];
void dfs(long u,long fa,long num1){
    if(hash[u]){
        if(num1>1)ans+=(num1&1);
        return;
        }
    hash[u]=1;
    long i,v;
    for(i=1;i<=num[u];i++){
        v=map[u][i];
        if(v!=fa)
            dfs(v,u,num1+1);
        }
   return;
}
int main(){
    int i,x,y;
    scanf("%ld%ld",&n,&m);
    for(i=1;i<=m;++i){
        scanf("%ld%ld",&x,&y);
        map[x][++num[x]]=y;
        map[y][++num[y]]=x;
        }
    for(i=1;i<=n;++i)
        if(!hash[i]) 
            dfs(i,0,0);
    printf("%d\n",ans+((n-ans)&1));
    return 0;
}