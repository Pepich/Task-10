/**********************************/
/* Benedikt Abel, Justus Faust    */
/* Gruppe: Di08                   */
/* Uebungsblatt: 10, Aufgabe B-22 */
/* Thema: Arrays                  */
/* Version: v1.0.0                */
/* Datum: 20160630                */
/* Status: werks                  */
/**********************************/

#include <stdio.h>

double readVal(int n)
{
    double d = 0;
    printf("Bitte den %i-ten Wert eingeben: ", n+1);
    scanf("%lf", &d);
    return d;
}

double minmax(double values[], int size, double *min, double *max)
{
    int i = 0;
    double val = values[0], avg = val;
    *min = val;
    *max = val;
    for (i = 1; i < size; i++)
    {
	val = values[i];
	if (val < *min)
	    *min = val;
	if (val > *max)
	    *max = val;
	avg += val;
    }
    return avg/size;
}

int main(void)
{
    int n = 0, i = 0;
    double min = 0, max = 0, avg = 0;
    printf("Bitte länge des Feldes eingeben: ");
    scanf("%i", &n);
    double values[n];
    for (i = 0; i < n; i++)
    {
	values[i] = readVal(i);
    }
    avg = minmax(values, n, &min, &max);
    printf("Die Anzahl der Einträge ist: %i\n"
	   "Der größte Eintrag hat den Wert: %g\n"
	   "Der kleinste Eintrag hat den Wert: %g\n"
	   "Der Durchschnitt aller Werte beträgt: %g\n", n, max, min, avg);
    return 0;
}
