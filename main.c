#include <stdio.h>

void main()
{
    int massiiv1[100], massiiv2[100];
    int i, n, t, size;
    
    
       printf("Kopeerige elemendid ühest massiivist teise :\n");
       
       printf("Sisestage massiivi salvestatavate elementide arv :");
       scanf("%d",&i);
   
       printf("Sisestage massiivi %d elementi :\n", t);
       for(i=0;i<n;i++)
        {
            scanf("%d", &t);
            printf("Massiivis on %d elementi.\n", t);
        }
    /* Kopeerige esimese massiivi elemendid teise massiivi.*/
    for(i=0; i<n; i++)
    {
        int massiiv1[i], massiiv2[n];
        massiiv2[i] = massiiv1[i];
    }

    // Prindib esimese massiivi elemendid
    printf("Esimesesse massiivi salvestatud elemendid on :\n");
    for(i=0; i<n; i++)
    {
        printf("%d", massiiv1[i]);
    }

    /* Prindib teise massiivi kopeeritud elemendid. */
    printf("Teise massiivi kopeeritud elemendid on :\n");
    for(i=0; i<n; i++)
    {
        printf("%d", massiiv2[i]);
    }
           printf("\n\n");
    
    
        
}
