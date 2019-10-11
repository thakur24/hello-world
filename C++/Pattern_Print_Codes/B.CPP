#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int a[10][10],b[10][10],c[10][10],i,j,n,tc,min;
int t[10][10],v[10][10];
int k,l;
cout<<"enter no of nodes ";
cin>>n;
for(i=1;i<n+1;i++)
 for(j=1;j<n+1;j++)
   cin>>a[i][j];

for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
  {
   if(a[i][j]==0)
	c[i][j]=9999;
   else
	c[i][j]=a[i][j];
   b[i][j]=0;
  }
min=9999;

for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {
   if(c[i][j]<min)
	 min=c[i][j];
  }
for(i=1;i<=n;i++)
 { for(j=1;j<=n;j++)
  {
   if(c[i][j]==min)
       {
	b[i][j]=min;
	b[j][i]=min;
	k=i;
	l=j;
	c[i][j]=9999;
	c[j][i]=9999;
       }
   }
 }
tc+=min;
t[1][1]=k;
t[1][2]=l;
for(i=1;i<=n;i++)
{
if(c[i][l]<c[i][k])
  ne[i]=l;
else
  ne[i]=k;
ne[k]=0;
ne[l]=0;
for(i=2;i<=n;i++)
{
min=9999;
for(j=1;j<=n;j++)
  {
   if(cc[j][ne[j]]<min)
	 min=c[j][ne[j]];
  }
for(i=1;i<=n;i++)
 { for(j=1;j<=n;j++)
  {
   if(c[j][ne[j]]==min)
       {
	b[i][j]=min;
	b[j][i]=min;
	k=i;
	l=j;
	c[i][j]=9999;
	c[j][i]=9999;
       }
   }
 }

}
}

cout<<"the  :\n";
for(i=1;i<n+1;i++)
 {
  for(j=1;j<n+1;j++)
   cout<<c[i][j]<<" ";
  cout<<endl;
  }
  cout<<"the spinnig tree matrix is :\n";
for(i=1;i<n+1;i++)
 {
  for(j=1;j<n+1;j++)
   cout<<b[i][j]<<" ";
  cout<<endl;
  }
cout<<"the total cost is :"<<tc;

getch();
}