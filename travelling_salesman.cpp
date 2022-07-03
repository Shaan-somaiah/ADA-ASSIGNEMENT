#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int v;
   cout<<"Enter the number of vertices : ";
   cin>>v;
   int grph[v][v];
   cout<<"Enter the graph in matrix form\n";
   for(int i=0;i<v;i++)
   {
    for(int j=0;j<v;j++)
    {
        cout<<"("<<i+1<<","<<j+1<<") = ";
        cin>>grph[i][j];
    }
   } 
   int p=0;
   vector<int> ver; 
   for (int i=0;i<v;i++)
      if (i!=p)
         ver.push_back(i);
         int m_p=INT_MAX; 
   do 
   {
      int cur_pth=0;
      int k=p;
      for(int i=0;i<ver.size();i++) 
      {
         cur_pth+=grph[k][ver[i]];
         k=ver[i];
      }
      cur_pth+=grph[k][p];
      m_p=min(m_p,cur_pth); 
   }while (next_permutation(ver.begin(),ver.end()));
   
   cout<< "\n The shortest possible path is : "<<m_p<< endl;
   return 0;
}