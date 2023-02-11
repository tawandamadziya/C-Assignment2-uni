#include<iostream>
#include<conio.h>
using namespace std;
const int x=5;
int votesForA=0;
int votesForB=0;
int votesForC=0;
int spoiltvotes=0;
char v;
int main()
{
 int i;
// begin outer loop
for (i=1;i<=x ;i++ )

//begin inner while loop

while( v!='x')
{   cout<<"\n Enter your vote:\t";
    cin>>v;
switch(v)
{
   case 1: votesForA++;
       break;

   case 2:votesForB++;
       break;
   case 3:votesForC++;
       break;
   default:spoiltvotes++;
}
cout<<"\n Input your vote:\t";
cin>>v;
}
 cout<<"Number of votes for candidate\n\tA:"<<votesForA;
 cout<<"Number of votes for candidate B:";
 cout<<votesForB<<"\n\tNumber of votes for candidateC:"<<votesForC;
 cout<<"\n\nNumber of spoilt votes:\t"<<spoiltvotes;

 getch();
 return 0;
}
