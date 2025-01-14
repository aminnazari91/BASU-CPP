#include <iostream>
using namespace std;
void Matrix_Addition(int A[][2], int B[][2], int C[][2], int rows){
    for (int i=0;i<rows;i++)
        for (int j=0;j<2; j++)
            C[i][j] = A[i][j] + B[i][j];
    
}
void Zeros(int A[2][2]){
    for (int i=0;i<2;i++)
        for (int j=0;j<=i; j++){
            A[i][j] = 0;
            A[j][i] = 0;
        }
}
void Matrix_Multipication(int A[2][2], int B[2][2], int C[2][2]){
    for (int i=0;i<2;i++)
        for (int j=0;j<2; j++)
            for (int k=0; k<2; k++)
                C[i][j] += A[i][k] * B[k][j];
}

bool Is_Symmetrical(int A[][2], int rows){
    for (int i=0;i<rows;i++)
        for (int j=0;j<2; j++)
            if (A[i][j] != A[j][i])
                return false;

    return true;
}

void Transpose(int A[2][2]){
    for (int i=0;i<2;i++)
        for (int j=0;j<i; j++){    
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
}

bool Is_Equal(int A[2][2], int B[2][2]){
    for (int i=0;i<2;i++)
        for (int j=0;j<i; j++)
            if(A[i][j] != B[i][j])
                return false;
    return true;
}

bool Is_Upper_Triangular(int A[2][2]){
    for (int i=0;i<2;i++)
        for (int j=0;j<i; j++)
            if(A[i][j] != 0)
                return false;

    return true;
}

bool Is_Lower_Triangular(int A[2][2]){
    for (int i=0;i<2;i++)
        for (int j=1;j>i; j--)
            if(A[i][j] != 0)
                return false;

    return true;
}

void Print(int A[2][2]){
    for (int i=0;i<2;i++){
        for (int j=0;j<2; j++)
            cout<<A[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int A[][2] = {{1, 2}, {3, 4}};
    int B[][2] = {1, 0, 8, 9};
    int rows = 2;
    int C[rows][2];

    cout<<"A: "<<endl;
    Print(A);

    cout<<"B: "<<endl;
    Print(B);

    cout<<"C: "<<endl;
    Print(C);
    
    Zeros(C);
    cout<<"C: "<<endl;
    Print(C);
    
    Matrix_Addition(A, B, C, rows);
    cout<<"A+B:"<<endl;
    Print(C);

    Zeros(C);
    Matrix_Multipication(A, B, C);
    cout<<"AxB:"<<endl;
    Print(C);

    cout<<"B: "<<endl;
    Print(B);
    cout<<"Is_Lower_Triangular:"<< Is_Lower_Triangular(B) <<endl;
    cout<<"Is_Upper_Triangular:"<< Is_Upper_Triangular(B) <<endl;

    Transpose(B);
    
    cout<<"B': "<<endl;
    Print(B);
    cout<<"Is_Lower_Triangular:"<< Is_Lower_Triangular(B) <<endl;
    cout<<"Is_Upper_Triangular:"<< Is_Upper_Triangular(B) <<endl;

    cout<<"B' "<<endl;
    Print(B);
    cout<<"Is_Symetrical:"<< Is_Symmetrical(B, 2) <<endl;


    cout<<"A == A"<<endl;
    Print(A);
    cout<<"Is_Equal:"<< Is_Equal(A, A) <<endl;

}