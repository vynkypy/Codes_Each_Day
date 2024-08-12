
//Write a program which accept matrix from user and display transpose of the matrix

//The transpose of a given matrix is formed by interchanging the rows and columns of a matrix   

// Input       3   2   5   9
//             4   3   2   2
//             8   4   1   9
//             3   9   7   5

// Output      3   4   8   3
//             2   3   4   9
//             5   2   1   7   
//             9   2   9   5   

import java.util.*;

class Matrix
{
    public int iRow, iCol;

    public int Arr[][];

    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];

    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the data : ");

        int i = 0, j = 0;

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Elements of the matrix : ");
        
        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    
    public void Transpose()
    {
        int TransposeArray[][] =  new int[iCol][iRow];
        
        int i = 0, j = 0;
        for(i=0; i<iRow; i++)
        {
            for(j = 0; j<iCol; j++)
            {
                TransposeArray[j][i] = Arr[i][j];
            }
        }

        System.out.println("Transposed matrix is");
        for(i=0; i<iRow; i++)
        {
            for(j = 0; j<iCol; j++)
            {
                System.out.print(TransposeArray[i][j]+"\t");
            }
            System.out.println();
        }


    }
}

class Program49_1

{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1,No2);
        
        mobj.Accept();

        mobj.Display();

        mobj.Transpose(); 
        
        mobj = null;

        System.gc();
    }
}