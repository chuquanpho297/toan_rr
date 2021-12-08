#include <bits/stdc++.h>
using namespace std;
const int N = 100;

vector<int> A[N],B[N];// A[v] is the list of adjacent node to v
int n, m;// number of nodes and edges
bool visited[N]; // visited[v] = true means that node v was visited, visited[v] = false, otherwise
int p[N];// p[v] is the predecessor (parent) of the node v during BFS
//int d[N]; // d[v] is the level (distance) from the source node to v in a BFS
int t;//global variable representing discrete time points
int d[N];//time point when v is visited
int f[N];//time point when DFS from v is finished
queue<int> P;
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        A[u].push_back(v);
        A[v].push_back(u);
        //B[v].push_back(u);
        //d[v]+=1;
    }
}
void BFS(int s){
    queue<int> Q;
    visited[s] = true; Q.push(s);
    p[s] = 0;
    d[s] = 0;// level-0
    cout << s << " ";
    while(!Q.empty()){
        int u = Q.front(); // access to the element at the front of the queue
        Q.pop(); // remove the element at the front of the queue
        for(int i = 0;i < A[u].size(); i++){
            int v = A[u][i];
            if(!visited[v]){
                visited[v] = true;
                cout << v << " ";
                p[v] = u;
                d[v] = d[u] + 1;
                Q.push(v);
            }
        }
    }
}
void DFS(int s){
    t=t+1; visited[s]=true; d[s]=t;
    for(int i=0; i<A[s].size();i++){
        int v=A[s][i];
        if(!visited[v]){
            p[v]=s;
            visited[v]=true;
            DFS(v);
        } 
    }
    t+=1; f[s]=t;
}
/*void topo_sort(){
    for(int i=1;i<=n;i++){
        d[i]=B[i].size();
        //cout<<d[i]<<" ";
        if(d[i]==0) P.push(i);
    }

    // for(int i=1;i<=n;i++){
    //     if(d[i]==0) P.push(i);
    // }
    while(!P.empty()){
       int u=P.front(); P.pop();
        cout<<"The path:"<<u<<" "<<;
        for(int i=0; i<A[u].size();i++){
            int v=A[u][i];
            d[v]=d[v]-1;
            if(d[v]==0) P.push(v);
        }
    }
}*/
void printGraph(){
    for(int v = 1; v <= n; v++){
        cout << "A[" << v << "]: ";
        for(int i = 0; i < A[v].size(); i++) cout << A[v][i] << " ";
        cout << endl;
    }
}
/*void findPath(int s, int v){// find a path from s to v using BFS
    for(int v = 1;  v <= n; v++) visited[v] = false;
    BFS(s);
    if(visited[v] == false){
        cout << "not found the path from s to v" << endl;
    }else{
        stack<int> S;
        //cout << "path from s to v (reverse order): ";
        int x = v;
        while(p[x] > 0){
            //cout << x << " ";
            S.push(x);
            x = p[x];
        }
        //cout << x << endl;
        S.push(x);
        cout << "Path from " << s << " to " << v <<  " is: ";
        while(!S.empty()){
            int x = S.top(); S.pop();
            cout << x << " ";
        }

    }
}*/
int main(){
//    freopen("graph_topo.txt","r",stdin);
    freopen("graph.txt","r",stdin);
    input();
//   topo_sort();
    printGraph();
    for(int v = 1; v <= n; v++) visited[v] = false;
    for(int v = 1; v <= n; v++){
        if(!visited[v]){
        //BFS(s);
        DFS(v);
        }
    //findPath(1,7);
    }
    for(int v=1; v<=n; v++){
        cout<<"Node: "<<v<<" "<<"Destination: d["<<d[v]<<"] "<<"Finish: f["<<f[v]<<"] "<<"Parent: p["<<p[v]<<"] "<<endl;
    }
    return 0;
    
}
