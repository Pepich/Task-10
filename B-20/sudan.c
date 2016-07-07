/**********************************/
/* Benedikt Abel, Justus Faust    */
/* Gruppe: Di08                   */
/* Uebungsblatt: 10, Aufgabe B-20 */
/* Thema: Sudanfunktion           */
/* Version: v1.0.0                */
/* Datum: 20160630                */
/* Status: werks                  */
/**********************************/

#include <stdio.h>

// Recursive implementation of the sudan function
int sudan(int x, int y, int z)
{
    if (z == 0)
	return x+y;
    if (z > 0 && y == 0)
	return x;
    return sudan(sudan(x, y-1, z),sudan(x, y-1, z)+y,z-1);
}

int main(void)
{
    int x = 0, y = 0;
    // Printing output grid header
    printf("x\\y|   0   1   2   3   4   5\n");
    printf("----------------------------");
    for (x = 0; x <= 5; x++)
    {
	// Printing output grid first column entry
	printf("\n %i |", x);
	for (y = 0; y <= 5; y++)
	{
	    // Output the result of sudan(x,y,1) formatted to match the grid spacing
	    printf(" %3i",sudan(x, y, 1));
	}
    }
    // Clean finish \n output
    printf("\n");
    // End
    return 0;
}
