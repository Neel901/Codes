#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
    int size = 1001;
    /*
    n = 5
    1,2,3,4,5
    1 and 2,3,4,5 4
    2 and 3,4,5   3
    3 and 4,5     2
    4 and 5       1
    and array ka size - 10

    n - 1000
    1,2,3....1000
    and array ka size - 1000?
    */
    int and, or, xor, a[size], o[size], x[size], p = 0, q = 0, ma, mo, mx, m, ma2, mo2, mx2, pma, pmo, pmx;
    for (int z = 0; z < size; z++)
    {
        a[z] = 0;
        o[z] = 0;
        x[z] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        printf("i: %d\n",i);
        for (int j = i + 1; j <= n; j++)
        {
            and = i & j;
            or = i | j;
            xor = i ^ j;
            printf("q: %d\n",q);
            a[q] = and;
            o[q] = or ;
            x[q] = xor;

            q = q + 1;
        }
    }
    ma = 0;
    mo = 0;
    mx = 0;
    for (m = 0; m < size; m++)
    {
        if (a[m] > ma && a[m] < k)
        {
            ma = a[m];
        }
        if (o[m] > mo && o[m] < k)
        {
            mo = o[m];
        }
        if (x[m] > mx && x[m] < k)
        {
            mx = x[m];
        }
    }
    ma2 = 0;
    mo2 = 0;
    mx2 = 0;
    for (m = 0; m < size; m++)
    {
        if (a[m] >= ma2 && a[m] < ma)
        {
            ma2 = a[m];
        }
        if (o[m] >= mo2 && o[m] < mo)
        {
            mo2 = o[m];
        }
        if (x[m] >= mx2 && x[m] < mx)
        {
            mx2 = x[m];
        }
    }
    printf("%d\n%d\n%d",ma,mo,mx);
    
    

}

int main()
{
    int n=75, k=4;

    // scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
