#include <stdio.h>
#include <stdlib.h>

int min(int **tab, int n)
{
    int min=tab[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(tab[i][j]<min)
            {
                min=tab[i][j];
            }
        }
    }
    return min;
}
int main()
{
    int **tab=malloc(sizeof(int));
    * tab=malloc(2*sizeof(int));
    *(tab+1)=malloc(2*sizeof(int));
    tab[0][0]=3;
    tab[0][1]=5;
    tab[1][0]=6;
    tab[1][1]=9;

    printf("%i",min(tab,2));
    return 0;
}
