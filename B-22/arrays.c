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

// Subroutine to read values with a single line
double readVal(int n)
{
    double d = 0;
    printf("Bitte den %i-ten Wert eingeben: ", n+1);
    scanf("%lf", &d);
    return d;
}

// Funktion to calculate the average as return value, as well as min/max as referenced parameters
double avg(double values[], int size, double *min, double *max)
{
    // Initializing counter variable
    int i = 0;
    // Initializing variables to have a starting value for proper comparison
    double val = values[0], total = val;
    *min = val;
    *max = val;
    for (i = 1; i < size; i++)
    {
	// Grabbing the next value into a temp variable for faster access
	val = values[i];
	
	// Finding the smalles value
	if (val < *min)
	    *min = val;
	// Finding the biggest value
	if (val > *max)
	    *max = val;
	// Adding the current value to the total value
	total += val;
    }
    // Average is total/amount
    return total/size;
}

int main(void)
{
    // Initializing variables
    int n = 0, i = 0;
    double min = 0, max = 0, avg = 0;
    // Requesting length of array input
    printf("Bitte länge des Feldes eingeben: ");
    scanf("%i", &n);
    //Creating proper sized array
    double values[n];
    
    // Fill the array with values using the "readVal()" subroutine
    for (i = 0; i < n; i++)
	values[i] = readVal(i);
    
    // Compute the average, as well as min and max of the array using the avg() function
    avg = avg(values, n, &min, &max);

    //  Final output
    printf("Die Anzahl der Einträge ist: %i\n"
	   "Der größte Eintrag hat den Wert: %g\n"
	   "Der kleinste Eintrag hat den Wert: %g\n"
	   "Der Durchschnitt aller Werte beträgt: %g\n", n, max, min, avg);
    // End
    return 0;
}
