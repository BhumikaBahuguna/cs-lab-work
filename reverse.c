REVERSE AN ARRAY........

#include<stdio.h>
int main()
{
    int a[10],n,i,j,temp;
    printf("enter limit:\n");
    scanf("%d",&n);
    printf("input element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        for(i=0,j=n-1;i<n/2;i++,j--){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }
    return 0;  
    }


1)To arrange elements of all rows in ascending order 


#include <stdio.h>
void sortRow(int row[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (row[j] > row[j+1]) {
                temp = row[j];
                row[j] = row[j+1];
                row[j+1] = temp;
            }
        }
    }
}
void arrangeRowsAscending(int arr[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        sortRow(arr[i], n);
    }
}
void printArray(int arr[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    printf("Enter the number of rows and columns (m x n): ");
    scanf("%d %d", &m, &n);

    int arr[100][100];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    arrangeRowsAscending(arr, m, n);

    printf("\nArray with rows arranged in ascending order:\n");
    printArray(arr, m, n);

    return 0;
}











2) To arrange elements of all columns in ascending order


#include <stdio.h>
void sortColumn(int arr[][100], int m, int col) {
    int i, j, temp;
    for (i = 0; i < m-1; i++) {
        for (j = 0; j < m-i-1; j++) {
            if (arr[j][col] > arr[j+1][col]) {
                temp = arr[j][col];
                arr[j][col] = arr[j+1][col];
                arr[j+1][col] = temp;
            }
        }
    }
}
void arrangeColumnsAscending(int arr[][100], int m, int n) {
    for (int j = 0; j < n; j++) {
        sortColumn(arr, m, j);
    }
}
void printArray(int arr[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    printf("Enter the number of rows and columns (m x n): ");
    scanf("%d %d", &m, &n);

    int arr[100][100];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    arrangeColumnsAscending(arr, m, n);

    printf("\nArray with columns arranged in ascending order:\n");
    printArray(arr, m, n);

    return 0;
}








3)  To perform following operation : R3=2R2-R1=5R3




#include <stdio.h>
void performOperation(int arr[][100], int m, int n) {
    if (m < 3 || n < 1) {
        printf("Array size too small to perform the operation.\n");
        return;
    }

    for (int j = 0; j < n; j++) {
        arr[2][j] = 2 * arr[1][j] - arr[0][j] + 5 * arr[2][j];
    }
}
void printArray(int arr[][100], int m, int n) {
    printf("Resultant array after operation:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    printf("Enter the number of rows and columns (m x n): ");
    scanf("%d %d", &m, &n);

    int arr[100][100];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    performOperation(arr, m, n);

    printArray(arr, m, n);

    return 0;
}






4) TO INPUT A 2D ARRAY OF SIZE MXN AND PERFORM MIRROR REVERSAL OPERATION HORIZONTALLY:


#include <stdio.h>
void mirrorReverse(int arr[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][n - j - 1];
            arr[i][n - j - 1] = temp;
        }
    }
}
int main() {
    int m, n;
    printf("Enter the number of rows and columns (m n): ");
    scanf("%d %d", &m, &n);
    int arr[100][100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Original array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    mirrorReverse(arr, m, n);
    printf("Array after mirror reversal operation horizontally:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
  return 0;
}








5)  TO INPUT A 2D ARRAY OF SIZE MXN AND PERFORM MIRROR REVERSAL OPERATION VERTICALLY:



#include <stdio.h>
void mirrorReverse(int arr[][100], int m, int n) {
    for (int i = 0; i < m / 2; i++) {
        for (int j = 0; j < n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[m - i - 1][j];
            arr[m - i - 1][j] = temp;
        }
    }
}
int main() {
    int m, n;
    printf("Enter the number of rows and columns (m n): ");
    scanf("%d %d", &m, &n);
    int arr[100][100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Original array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
   mirrorReverse(arr, m, n);
   printf("Array after mirror reversal operation vertically:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}







6) TO INPUT A 2D ARRAY OF SIZE MXN AND PERFORM MIRROR REVERSAL OPERATION DIAGONALY:



#include <stdio.h>
void mirrorReverseDiagonal(int arr[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}
int main() {
    int m, n;
    printf("Enter the number of rows and columns (m n): ");
    scanf("%d %d", &m, &n);
    int arr[100][100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Original array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    mirrorReverseDiagonal(arr, m, n);
    printf("Array after mirror reversal operation diagonally:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

