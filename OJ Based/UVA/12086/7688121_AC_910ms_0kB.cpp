#include <bits/stdc++.h>

using namespace std;
#define mx 1000002
int tree[3*mx];
int arr[mx];
int build(int node,int left,int right)
{
    if(left==right)
    {
        tree[node]=arr[left];
        return tree[node];
    }
    int mid=(left+right)/2;
    tree[node]=build(node*2,left,mid)+build(node*2+1,mid+1,right);
    return tree[node];
}
int query(int node,int left,int right,int i,int j)
{
    if(i>right||j<left)
        return 0;
    if(left>=i&&right<=j)
        return tree[node];
    int mid=(left+right)/2;
    return query(node*2,left,mid,i,j)+query(node*2+1,mid+1,right,i,j);
}

void up2(int node,int left,int right,int i,int v)
{
    if(i>right||i<left)
        return;
    if(left==right)
    {
        tree[node]=v;
        return;
    }
    int mid=(left+right)/2;
    up2(node*2,left,mid,i,v);
    up2(node*2+1,mid+1,right,i,v);
    tree[node]=tree[node*2]+tree[node*2+1];
}
int main()
{
    int t=1;
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        memset(tree,0,sizeof(tree));

        for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
        }
        build(1,1,n);
        if(t>1)
            printf("\n");
        printf("Case %d:\n",t);
        t++;
        while(1)
        {
            string a;
            cin>>a;
            if(a=="END")
                break;
            if(a=="S")
            {
                int i,v;
                scanf("%d %d",&i,&v);
                up2(1,1,n,i,v);
            }
            else
            {
                int i,j;
                scanf("%d %d",&i,&j);
                long long int ans=query(1,1,n,i,j);
                printf("%d\n",ans);
            }

        }

    }

    return 0;
}
