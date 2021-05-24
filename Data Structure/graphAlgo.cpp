#include <bits/stdc++.h>
using namespace std;
bool detectCycleUsingBFS(vector<int > graph[10000],int i,vector<bool > &visited){
       queue<pair<int,int>  > q;
    q.push(make_pair(i,-1));
   
    visited[i]=true;
    while(q.size()>0){
        
        pair<int,int > k=q.front();
         cout<<k.first<<"->";
        q.pop();
       
        for(int j=0;j<graph[k.first].size();j++){

            if(visited[graph[k.first][j]]==false){
                 q.push(make_pair(graph[k.first][j],k.first));
                 visited[graph[k.first][j]]=true;

            }
            else{
                if(k.second!=graph[k.first][j]){
                    return true;
                }

            }
            
                
        }

    }
    return false;
    
    

}
bool detectCycleUsingDFS(vector<int > graph[10000],int v,int parent,vector<bool > &visited){
    
    visited[v]=true;
     vector<int > curr=graph[v];
    for(int i=0;i<curr.size();i++){
        if(visited[curr[i]]==false){
             if(detectCycleUsingDFS(graph,curr[i],v,visited)){
                 return true;
             }
             
            
        }
        else if(visited[curr[i]]==true && curr[i]!=parent){
                    return true;
              }
        
       
    }
    return false;
}
void  adjacencyMatrix(int graph[1000][1000],int n,int m){
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
        
    }
    return;

}
void  adjacencyList(vector<int> graph[10000],int n,int m){
      for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        
    }

}

void BFS(vector<int> graph[10000],int i, vector<bool > &visited){
    queue<int > q;
    q.push(i);
    visited[i]=true;
    while(q.size()>0){
        
        int k=q.front();
         cout<<k<<"->";
        q.pop();
       
        for(int j=0;j<graph[k].size();j++){
            if(visited[graph[k][j]]==false){
                 q.push(graph[k][j]);
                 visited[graph[k][j]]=true;

            }
                
        }

    }

}
void BFSHelper(vector<int> graph[10000],int n){
    vector<bool > visited(n+1,false);
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
           // BFS(graph,i,visited);
          bool b= detectCycleUsingBFS(graph,i,visited);
          if(b==true){
              cout<<"Cycle Detected"<<endl;
              return;
          }
            cout<<endl;
        }
        
    }
}
void DFS(int v,vector<int > graph[10000],vector<bool > &visited){
    if(visited[v]==true){
        return ;
    }
    visited[v]=true;
    cout<<v<<"->";
    vector<int > curr=graph[v];
    for(int i=0;i<curr.size();i++){
        if(visited[curr[i]]==false){
             DFS(curr[i],graph,visited);
            
        }
       
    }
    return;

}
void DFSHelper(vector<int > graph[10000],int n){
     vector<bool > visited(n+1,false);
  
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
           // DFS(i,graph,visited);
           if( detectCycleUsingDFS(graph,5,-1,visited)){
               cout<<i<<"Cycle Detected"<<endl;
               return ;
              
           }
            cout<<endl;
        }
        
    }

}
int main() {
    int n;//no of nodes
    cin>>n;
    int m; //no of edges 
    cin>>m;
    int graph[1000][1000];
   // adjacencyMatrix(graph,n,m);
    vector<int> graph1[10000];
     adjacencyList(graph1,n,m);
   
   // BFSHelper(graph1,n);
   DFSHelper(graph1,n);

    
}
