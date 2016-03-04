/* csv_log.c */
#include <stdio.h>
#include <stdlib.h>

int main() {
        FILE *datei;
        char vorname[30], nachname[30], strasse[50], stadt[30];
        int hausnummer, plz;

        datei = fopen("kunden.txt", "r");
        if(NULL == datei) {
                fprintf(stderr, "Fehler beim Oeffnen ...\n");
                return EXIT_FAILURE;
        }

        /* Nun lesen Sie formatiert von der Datei ein ... */
        while((fscanf(datei,"%s & %s & %s & %d & %d & %s\n",&vorname, &nachname, &strasse, &hausnummer, &plz, &stadt)) != EOF )
                fprintf(stdout,"%s %s %s,%d %d %s\n", vorname, nachname, strasse, hausnummer, plz, stadt);
   return EXIT_SUCCESS;
}
