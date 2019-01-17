#include <bits/stdc++.h>

using namespace std;
#define mx 200005
int arr[mx];
struct info {
    long long int prop, sum;
} tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node].sum = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = tree[Left].sum + tree[Right].sum;
}
void update(int node, int b, int e, int i, int j, long long int x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;

}
int query(int node, int b, int e, int i, int j, int carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);
    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;
    int p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    int p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);
    return p1 + p2;
}

int main()
{
    memset(arr,0,sizeof(arr));
    int n,k,q;
    cin>>n>>k>>q;
    unordered_map<int,int>sm,em;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        sm[a]++;
        em[b]++;
    }
    n=mx-2;
    for(int i=1;i<n;i++)
    {
        arr[i]=arr[i-1]+sm[i]-em[i-1];
        //cout<<i<<" "<<arr[i]<<" "<<sm[i<<endl;
    }
    for(int i=1;i<n;i++)
    {
        //cout<<i<<" "<<arr[i]<<endl;
        if(arr[i]<k)
            arr[i]=0;
        else{
            arr[i]=1;
            }

    }
    init(1,1,n);
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        cout<<query(1,1,n,x,y,0)<<endl;
    }

    return 0;
}