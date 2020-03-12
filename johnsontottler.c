#include <stdio.h>

int NN, i, count=0;
int p[100], pi[100];      
int dir[100];            

void PrintPerm()
{
   int i;

   count = count + 1;
   printf( "[%8d] ", count );

   for (i=1; i <= NN; ++i)
      printf( "%d", p[i] );
}


void PrintTrans( int x, int y )
{
   // printf( " (%d %d)", x, y );
   printf( "\n" );
} 



void Move( int x, int d )
{
   int z;
   PrintTrans( pi[x], pi[x]+d );
   z = p[pi[x]+d];
   p[pi[x]] = z;
   p[pi[x]+d] = x;
   pi[z] = pi[x];
   pi[x] = pi[x]+d;
}  



void Perm ( int n )
{
   int i;
   if (n > NN)
      PrintPerm();
   else
   {
      Perm( n+1 );
      for (i=1; i<=n-1; ++i)
      {
         Move( n, dir[n] );
         Perm( n+1 );
      }
      dir[n] = -dir[n];
   }
} 
void main ()
{
   printf( "Enter n: " );
   scanf( "%d", &NN );
   printf( "\n" );
   for (i=1; i<=NN; ++i)
   {
      dir[i] = -1; p[i] = i;
      pi[i] = i;
   }
   Perm ( 1 );
   printf( "\n" );
   
} 