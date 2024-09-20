#include <iostream>

using namespace std;

int main()
{

    cout<< " this program is capable of adding, subtracting and multiplying two Matrices \a"<<endl;
    point_01:
    int x,y,X,Y=0;
    cout<<endl<< "Please enter the dimensions for Matrix A: "<<endl;
    cout<< "number of rows: "; cin>>x;
    cout<< "number of columns: "; cin>>y;
    cout<<endl<< "please enter the dimensions for Matrix B: "<<endl;
    cout<< "number of rows: "; cin>>X;
    cout<< "number of columns: "; cin>>Y;
    double A [x][y];
    double B [X][Y];
    double AB [x][Y];
    cout<<endl<< "enter the values for Matrix A: "<<endl;
    for(int i_A=0;i_A<x;i_A++)
    {
        for(int j_A=0;j_A<y;j_A++)
        {
             cout<<endl<<"A["<<i_A+1<<"]"<<"["<<j_A+1<<"]:";
            cin>>A[i_A][j_A];
        }
    }

    cout<<endl<< "enter the values for Matrix B: "<<endl;

    for(int i_B=0;i_B<X;i_B++)
    {
        for(int j_B=0; j_B<Y; j_B++)
        {
             cout<<endl<<"B["<<i_B+1<<"]"<<"["<<j_B+1<<"]:";
            cin>>B[i_B][j_B];
        }
    }
    cout<<endl<< "Matrix A= "<<endl;
    for(int i_A=0;i_A<x;i_A++)
    {
        cout<<"\n";
        for(int j_A=0;j_A<y;j_A++)
        {
            cout<<A[i_A][j_A];
            cout<<" ";
        }
    }
    cout<<endl<<"================="<<endl;
    cout<< "Matrix B= "<<endl;
    for(int i_B=0;i_B<X;i_B++)
    {
        cout<<"\n";
        for(int j_B=0; j_B<Y; j_B++)
        {
            cout<<B[i_B][j_B];
            cout<<" ";
        }
    }
    if(X==x && Y==y){
    cout<<endl<<"================="<<endl;
        cout<< "Matrix (A+B)= "<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<"\n";
        for(int j=0;j<y;j++)
        {
            cout<<A[i][j] + B[i][j];
            cout<<" ";
        }
    }
    cout<<endl<<"================="<<endl;
    cout<< "Matrix (A-B)= "<<endl;
    for(int i_B=0;i_B<X;i_B++)
    {
        cout<<"\n";
        for(int j_B=0; j_B<Y; j_B++)
        {
            cout<<A[i_B][j_B] - B[i_B][j_B];
            cout<<" ";
        }
    }
    cout<<endl<<"================="<<endl;
        cout<< "Matrix (B-A)= "<<endl;
    for(int i_B=0;i_B<X;i_B++)
    {
        cout<<"\n";
        for(int j_B=0; j_B<Y; j_B++)
        {
            cout<<B[i_B][j_B] - A[i_B][j_B];
            cout<<" ";
        }
    } cout<<endl;
    }
    else
        {
        int decision=0;
        cout<<endl<< "the dimensions you entered can NOT be added or subtracted,would you like to enter again?\n \" 0= No , 1= Yes\"";
        cin>>decision;
        if(decision==1)
            {goto point_01;}
        else
            {goto point_02;}
    }
    point_02:
        if(y==X){
    cout<<endl<<"================="<<endl;
    cout<< "Matrix (A * B) = "<<"\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < Y; j++)
        {
           AB[i][j]=0;
            for (int k = 0; k < y; k++)
            {
                AB[i][j] += A[i][k] * B[k][j];
            }
            cout << AB[i][j] << " ";
        }
        cout << endl;
    }
        }
        else{
                int decision=0;
        cout<<endl<< "the dimensions you entered can NOT be multiplied, would you like to enter again?\n \" 0= No , 1= Yes\"";
        cin>>decision;
        if(decision==1)
            {goto point_01;}
        else
            {cout<< "thank you for your time \a"<<endl;}
        }
cout<<"\t\t\t\t designed by \'AbdoMP\'\a"<<endl;

return 0;
}