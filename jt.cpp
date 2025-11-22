# include <stdio.h>
int main()
{
    char ch;
    int first, k, n, x; 

    scanf("%d", &n);
    
first =  1;

    for(k = 1; k <= n; k++){
        scanf("%d", &x); 
        if 
(x%2 == 0)
{
            if ( first == 1 ){ 
                printf("%d", x); 
                
first = 0;

            }else{ 
                
printf(" %d",x);

            }
        }
    }

    return 0;
}
