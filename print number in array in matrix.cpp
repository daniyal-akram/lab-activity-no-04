#include<iostream>
using namespace std;
int main()
{  int i,j,sum,a[3][2]={{6,3},{7,8},{4,5}};
   cout<<"{6,3}   {7,8}   {4,5}\n";
   for(i=0;i<3;i++)
   for(j=0;j<2;j++)
   sum=sum+a[i][j];
   cout<<"Sum of Numbers is :"<<sum<<endl;   
}
