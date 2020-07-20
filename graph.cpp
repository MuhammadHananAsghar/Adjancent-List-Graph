// CREATED BY MUHAMMAD HANAN ASGHAR
// PYTHONIST
#include<vector>
#include<iostream>
using namespace std;
 
void addEdge(vector<int> graph[],int u, int v){
 graph[u].push_back(v);
 graph[v].push_back(u);
}
 
void Display(vector<int> graph[],int n){
 // It is used to traverse in Vector
 vector<int>::iterator it;
 for(int i=0;i<n;i++){
   cout<<"Vertex : "<<i;
   for(it = graph[i].begin();it != graph[i].end();it++){
     cout<<" ---> "<<*it;
   }
   cout<<endl;
 }
}
 
int main(){
 int n,e,u,v;
 cout<<" ENTER NUMBER OF VERTICES : ";
 cin>>n;
 vector<int> graph[n];
 addEdge(graph, 1, 2);
 addEdge(graph, 1, 4);
 addEdge(graph, 1, 5);
 addEdge(graph, 2, 3);
 addEdge(graph, 2, 1);
 Display(graph,n);
}
