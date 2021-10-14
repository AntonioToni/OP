#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

struct matrix
{
    int m, n;
    int a, b;
};

void entermat(matrix *mat)
{
    cout << "Enter matrix dimensions: ";
    cin >> mat->m >> mat->n;
    cout << "Enter number span: ";
    cin >> mat->a >> mat->b;
    cout << endl;
}

void genmat(matrix mat, float *matrix)
{
    int i;
    for (i = 0; i < (mat.m * mat.n); i++)
    {
        matrix[i] = (rand() % (mat.b - mat.a + 1))+mat.a;
    }
}

void add(matrix mat, float *mat1, float *mat2, float *mat3)
{
    for (int cnt = 0; cnt < (mat.m * mat.n); cnt++)
    {
        mat3[cnt] = mat1[cnt] + mat2[cnt];
    }
}

void subtract(matrix mat, float *mat1, float *mat2, float *mat3)
{
    for (int cnt = 0; cnt < (mat.m * mat.n); cnt++)
    {
        mat3[cnt] = mat1[cnt] - mat2[cnt];
    }
}

void multiply(matrix mat, float *mat1, float *mat2, float *mat3)
{
    for (int cnt = 0; cnt < (mat.m * mat.n); cnt++)
    {
        mat3[cnt] = mat1[cnt] * mat2[cnt];
    }
}

void transposition(matrix mat, float *mat1, float *mat2, float *mat3)
{
    for (int i = 0; i < mat.m; i++)
    {
        for (int j = 0; j < mat.n; j++)
        {
            //position in matrix1
            int x = i * mat.n + j;
            //position in matrix3
            int y = j * mat.m + i;
            mat3[y] = mat1[x];
        }
    }
    int cnt = 0;
    for (int i = 0; i < mat.n; i++)
    {
        for(int j = 0; j < mat.m; j++)
        {
            cout << right << setw(5) << fixed << setprecision(4) << mat3[cnt] << " ";
            cnt++;
        }
        cout << endl;
    }
}

void printmat(matrix mat, float *matrix)
{
    int cnt = 0;
    for (int i = 0; i < mat.m; i++)
    {
        for(int j = 0; j < mat.n; j++)
        {
            cout << right << setw(5) << fixed << setprecision(4) << matrix[cnt] << " ";
            cnt++;
        }
        cout << endl;
    }
}

int main()
{
    srand(time(0));
    char op;
    matrix mat;
    entermat(&mat);
    // generate matrix 1
    float *matrix1 = new float[mat.m * mat.n];
    genmat(mat, matrix1);
    // generate matrix 2
    float *matrix2 = new float[mat.m * mat.n];
    genmat(mat, matrix2);
    printmat(mat, matrix1);
    cout << endl;
    printmat(mat, matrix2);
    cout << endl;
    float *matrix3 = new float[mat.m * mat.n];
    while(1)
    {
        cout << "Select operation +  -  *  t: ";
        cin >> op;
        cout << endl;
        if (op == '+')
        {
            add(mat, matrix1, matrix2, matrix3);
            printmat(mat, matrix3);
            break;
        }
        else if (op == '-')
        {
            subtract(mat, matrix1, matrix2, matrix3);
            printmat(mat, matrix3);
            break;
        }
        else if (op == '*')
        {
            multiply(mat, matrix1, matrix2, matrix3);
            printmat(mat, matrix3);
            break;
        }
        else if (op == 't' || op == 'T')
        {
            transposition(mat, matrix1, matrix2, matrix3);
            break;
        }
        else
        {
            cout << "You have not entered the correct operation!" << endl;
        }
    }
    
    system("pause");
}