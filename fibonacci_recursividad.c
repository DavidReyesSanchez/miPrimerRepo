//numero 49

#include<stdio.h>
long fibonacci(int n);

int main(){
    int n;

    printf("Digite el numero de series: ");
    scanf("%i",&n);
    
    for (int i = 0; i <= n; i++)
    {
    printf("%li, ", fibonacci(i));
    }
    

    return 0;
}

long fibonacci(int n){
if (n<=1)
{
    return 1;
}
else{
    return (fibonacci(n-1)+fibonacci(n-2));
}


}