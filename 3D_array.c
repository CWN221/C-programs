/*
Author: CWN221
Date: 22/6/2024
RegNo: BSE-01-0032/2024
Description: Addition, subtraction & multiplication of matrices using 3D Array
*/

#include <stdio.h>

int main()
{
    int i, j, k;
    int a[1][2][3], b[1][2][3], sum[1][2][3];


/*User Input*/

/*First Matrix */
printf("Enter first Matrix(values): \n");
for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 3; k++) {
            printf("Enter row%d column%d: ", j + 1, k + 1);
            scanf("%d", &a[i][j][k]);
        }
    }
}

/*Second Matrix*/
printf("Enter second Matrix(values): \n");
for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 3; k++) {
            printf("Enter row%d column%d: ", j + 1, k + 1);
            scanf("%d", &b[i][j][k]);
        }
    }
}


/*Output*/
    
/*Matrix 1 Output*/
printf("\nMatrix 1 values are: \n");
for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 3; k++) {
            printf("%d ", a[i][j][k]);
        }
        printf("\n");
    }
}

/*Matrix 2 Output*/
printf("\nMatrix 2 values are: \n");
for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 3; k++) {
            printf("%d ", b[i][j][k]);
        }
        printf("\n");
    }
}


/*Calculations*/

/*Addidion of Matrices*/
for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 3; k++) {
            sum[i][j][k] = a[i][j][k] + b[i][j][k];
        }
    }
}

/*Results*/
printf("\nThe sum is: \n");
for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 3; k++) {
            printf("%d ", sum[i][j][k]);
        }
        printf("\n");
    }
}

/*Subtraction of Matrices*/
for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 3; k++) {
            sum[i][j][k] = a[i][j][k] - b[i][j][k];
        }
    }
}

/*Results*/
printf("\nThe subtraction is: \n");
for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 3; k++) {
            printf("%d ", sum[i][j][k]);
        }
        printf("\n");
    }
}

/*Multiplication of Matrices*/
for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 3; k++) {
            sum[i][j][k] = a[i][j][k] * b[i][j][k];
        }
    }
}

/*Results*/
printf("\nThe multiplication is: \n");
for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 3; k++) {
            printf("%d ", sum[i][j][k]);
        }
        printf("\n");
    }
}


    return 0;

}
