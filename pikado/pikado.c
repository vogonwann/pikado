/* 
pikado program
Mita Mitic - 00/00
*/

#include <stdio.h>

int main() {
    int rezultat1 = 0;
    int rezultat2 = 0;

    int pogodak1 = 0;
    int pogodak2 = 0;

    int prviNaPotezu = 1;
    printf ("Pikado, by Mita Mitic\n\n");
    
    for (;;) {
        printf ("=============================\n\n");
        printf ("Prvi igrac ima %d bodova.\n", rezultat1);
        printf ("Drugi igrac ima %d bodova.\n\n", rezultat2);

        if (prviNaPotezu == 1) {
            printf ("Prvi igrac na potezu\n");
            printf ("Koje polje je pogodjeno? ");
            scanf ("%d", &pogodak1);

            if (pogodak1 > 20) {
                printf("Promasaj! Prihvatamo polja od 1 do 20.\n\n");       
            } 
            else {                
                int temp = pogodak1 + rezultat1;                
                if (temp == 100) {
                    printf ("\n=============================\n\nPobednik je PRVI igrac!\n");
                    break;
                }
                else if (temp > 100)
                {
                    printf ("\nPrekoracenje! Bodovi se ne racunaju.\n\n");
                }
                else {
                    rezultat1 = temp;
                    if (temp == rezultat2) {
                        rezultat2 = 0;
                        printf ("\nPrvi igrac obara drugog igraca.\nDrugi igrac sada ima 0 bodova.\n");
                    }  
                    printf ("\n");
                }                
            }   
        }
        else if (prviNaPotezu == 0)
        {
            printf ("Drugi igrac na potezu\n");
            printf ("Koje polje je pogodjeno? ");
            scanf ("%d", &pogodak2);

            if (pogodak2 > 20) {
                printf("Promasaj! Prihvatamo polja od 1 do 20.\n\n");       
            }
            else
            {
                int temp = pogodak2 + rezultat2;
                if (temp == 100) {
                    printf ("\n=============================\n\nPobednik je DRUGI igrac!\n");
                    break;
                }
                else if (temp > 100) {
                    printf ("\nPrekoracenje! Bodovi se ne racunaju.\n\n");
                }
                else {
                    rezultat2 = temp;
                    if (temp == rezultat1) {
                        rezultat1 = 0;
                        printf ("\nDrugi igrac obara prvog igraca.\nPrvi igrac sada ima 0 bodova.\n");
                    }
                    printf ("\n");
                }
            }
        }

        prviNaPotezu = prviNaPotezu == 1 ? 0 : 1;
    }

    return 0;
}
