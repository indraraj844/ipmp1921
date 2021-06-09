#include<bits/stdc++.h>
using namespace std;

class graph{
     int arr[][];
     int v;
     public:
     graph(v)
     {    
         arr = new int [v][v];
         for(int i=0;i<v;i++)
         {
             for(int j=0;j<v;j++)
             arr[i][j]=0;
         }
     }
     void addEdge(int x,int y)
     {
         arr[x][y]=1;
         arr[y][x]=1;
     }
     int trace(int adj[][],int v)
     {
         for(int i=0;i<v;i++)
         {
             for(int j=0;j<v;j++)
             {
                 if(i==j)
                 sum+=adj[i][j];
             }
         }
     }
     void mul(int adj2[][],int adj1[][],int adj[][],int v)
     {
         
     }
     int number_of_triangle()
     { 
         int adj2[v][v],adj3[v][v];

         mul(adj2,arr,arr,v);
         mul(adj3,adj2,arr,v);

         int t=trace(adj3,v);

         return t/6;



     }
};

int main()
{
    graph g(6);
    g.addEdge(0,1);
     g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(0,3);
     g.addEdge(3,4);
      g.addEdge(4,5);
      
      cout<<"number of triangle=  "<<number_of_triangle();

      return; 

}
time complexity o(v^3)//cause of multipication 
  //we can reduce it using stareen's matrix multipication
  
  logic
  If we compute An for an adjacency matrix representation of graph, then
  a value An[i][j] represents number of distinct walks between vertex i to j in graph.
  In A3, we get all distinct paths of length 3 between every pair of vertices.
A triangle is a cyclic path of length three, i.e. begins and ends at same vertex.
   So A3[i][i] represents a triangle beginning and ending with vertex i. Since a 
   triangle has three vertices and it is counted for every vertex, we need to divide result by 3.
     Furthermore, since the graph is undirected, every triangle twice as i-p-q-j and i-q-p-j,
so we divide by 2 also. Therefore, number of triangles is trace(A3) / 6.
  thankyou
  
