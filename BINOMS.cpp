#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
 
int main()
{
    int cnt;
    double n,k, result_n=1, result_k=1,result=1,result_n_k=1;
    scanf("%d\n", &cnt);
    while(cnt--)
    {
        result_n=1;
        result_k=1;
        result=1;
        result_n_k=1;
 
        scanf("%lf %lf", &n, &k);
        //printf("n!=%lf, k!=%lf, (n-k)!=%ld\n", result_n, result_k, result_n_k);
 
        if(n<k)
        {
            result=0;
        }
        else
        {
            if(k>n-k)
            {
                for(int i=k+1;i<=n;i++)
                {
                    result_n=result_n*i;
                }
                for(int i=1;i<=n-k;i++)
                {
                    result_n_k=result_n_k*i;
                }
            }
            else
            {
                for(int i=n-k+1;i<=n;i++)
                {
                    result_n=result_n*i;
                }     
                for(int i=1;i<=k;i++)
                {
                    result_k=result_k*i;
                }
            }
            //printf("n!=%ld, k!=%ld, (n-k)!=%ld\n", result_n, result_k, result_n_k);
            result = result_n/(result_k*result_n_k);
        }
        printf("%.0lf\n", result);
 
 
 
    }
 
 
    return 0;
}
