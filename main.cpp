#include <bits/stdc++.h>

using namespace std;

long long it;
int ctr;
int flag=0;

void affiche(int m[8][8])
{
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++)
     {
       if (m[i][j]==0)
        cout<<'.'<<" ";
       else
        cout<<'*'<<" ";
     }
  cout<<endl;
 }
}

void chess(int m[8][8], int x, int y,int *ctr, int *flag,long long *it)
  {
    cout<<'-'<<*it<<"-  "<<x+1<<" "<<y+1<<"   "<<*ctr<<endl;
    affiche(m);
    *it=*it+1;
    cout<<endl;
    *flag=0;
    for(int i=x-2 && !(*flag);i<=x+2;i++)
      for(int j=y-2;j<=y+2 && !(*flag);j++)
       if (i>=0 && i<8 && j>=0 && j<8 && (((abs(x-i)==2) && abs(y-j)==1) ||((abs(x-i)==1) && abs(y-j)==2)) && m[i][j]==0)
        {

          *flag=1;
          m[i][j]=1;
          (*ctr)=(*ctr)+1;
          if ((*ctr)<64)
           chess(m,i,j,ctr,flag,it);

        }
        if (!(*flag)){
          m[x][y]=0;
          (*ctr)=(*ctr)-1;
        }


  }


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);





  ctr=0;
   it=0;
  for(int i=0;i<1 && (ctr)<64;i++)
   for(int j=0;j<1 && (ctr)<64;j++){
      int m[8][8]={0};
      m[i][j]=1;
      cout<<endl<<endl<<endl<<"_________________"<<i<<" "<<j<<"_______________"<<endl<<"________________________________"<<endl;
     (ctr)=1;
     chess(m,i,j,&ctr,&flag,&it);
     cout<<endl<<ctr<<endl;}




}
