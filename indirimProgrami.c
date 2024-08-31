#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    float toplamTutar, vade;
    srand(time(NULL));
    toplamTutar = (float)(rand() % 10000);
    char kullaniciSecimi;

    printf("Alışverişlerinizin toplam tutarı %.2f TL'dir.\n", toplamTutar);
    printf("Vade yapmak ister misiniz?(E/H): ");
    kullaniciSecimi = getchar();
    getchar();

    if (kullaniciSecimi == 'e' || kullaniciSecimi == 'E')
    {
        printf("Vade sayısını seçin (3-6-9)\n");
        scanf("%f", &vade);
        getchar();

        switch ((int)vade)
        {
        case 3:
            toplamTutar += toplamTutar * 0.03;
            printf("%.0f taksitli olarak toplam %.2f TL'dir.\n", vade, toplamTutar);
            break;
        case 6:
            toplamTutar += toplamTutar * 0.06;
            printf("%.0f taksitli olarak toplam %.2f TL'dir.\n", vade, toplamTutar);
            break;
        case 9:
            toplamTutar += toplamTutar * 0.09;
            printf("%.0f taksitli olarak toplam %.2f TL'dir.\n", vade, toplamTutar);
            break;

        default:
            printf("Belirtilen sayıda vade seçeneği yoktur.\n");
        }
    }
    else
    {
        printf("Vade seçeneği olmadan devam ediliyor.\n");
    }

    printf("Üye kartınız var mı?(E/H):");
    kullaniciSecimi = getchar();
    getchar();

    if (kullaniciSecimi == 'E' || kullaniciSecimi == 'e')
    {
        toplamTutar -= toplamTutar * 0.05;
        printf("Üye kartınız olduğundan dolayı ekstra indrim kazandınız.\n");
    }
    else
    {
        printf("Uye olmadığınızdan dolayı indirim uygulanmamıştır.\n");
    }

    printf("Alışverişlerinizin toplam tutarı %.2f TL'dir.", toplamTutar);

    return 0;
}