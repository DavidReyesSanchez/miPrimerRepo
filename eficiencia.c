#include<stdio.h>
int estaEN(int i,int cop[], int tamano);

int main(){

  int i,j, n=10, var,cont,guardar;
  int a[]={3,8,9,4,0,2,9,8,1,2};
  int cop[10];

  cont=0;

  for ( i = 0; i < n; i++)
  {
    var=a[i];
    for( j=1; j<=n-1; j++){
      if (var==a[j])
      {
         cop[cont]=j;
         cont++;
      }
    }
  }
  int c[n-cont], c_n=0;
  for ( i = 0; i < n; i++)
  {
    if (!(estaEN(i,cop,cont)))
    {
        c[c_n]= a[i];
        c_n++;
    }
    
  }
  for ( i = 0; i < 10; i++)
  {
    printf("%i ",c[i]);
  }
  

return 0;
}

int estaEN(int i,int cop[], int tamano){
int band = 0, j;
 j=0;
    while ((band == 0)&&(j<tamano))
    {
       if(cop[j]== i){
        band=1;
       }
    j++;   
    }    

    return band;

}