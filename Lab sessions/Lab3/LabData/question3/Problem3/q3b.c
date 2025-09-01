#include <stdio.h>
#include <stdlib.h>
#define e0 8.85e-12

int main() {
	FILE *file;
	FILE *file2;
	double col1[100];
	double col2[100];
	int n = 0;

	file = fopen("Field.dat", "r");
	file2 = fopen("Density.dat", "w");

	if (file == NULL || file2 == NULL) {
		printf("Error: Could not open file.\n");
		return 1;
	}

	// Read until EOF or 100
	while (n < 100 && fscanf(file, "%lf %lf", &col1[n], &col2[n]) == 2) {
		n++;
	}

	if (n < 2) {
		printf("Error: Not enough data.\n");
		fclose(file);
		fclose(file2);
		return 1;
	}

	double density[100];

	// forward difference for first point
	density[0] = (col2[1] - col2[0]) / (col1[1] - col1[0]);

	// central difference for middle points
	for (int i = 1; i < n - 1; i++) {
		density[i] = (col2[i+1] - col2[i-1]) / (col1[i+1] - col1[i-1]);
	}

	// backward difference for last point
	density[n-1] = (col2[n-1] - col2[n-2]) / (col1[n-1] - col1[n-2]);

	// write output
	for (int i = 0; i < n; i++) {
		fprintf(file2, "%lf %lf\n", col1[i], e0*density[i]);
	}

	fclose(file);
	fclose(file2);

	return 0;
}
