
//Write a program which accept matrix and display addition of elements from each column

// Input       3   2   5   9
//             4   3   2   2
//             8   4   1   9
//             3   9   7   5

// Output      18   18  15  25

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

    public void ColAddition()
    {
        int i = 0, j = 0, iColSum = 0;

        System.out.println("The Addtion of columns is");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                iColSum = iColSum+ Arr[i][j];
            }

            System.out.print(iColSum+"\t");
            iColSum = 0;
        }
    }
}

class Program48_4

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

        int iRet = 0;
        mobj.ColAddition(); 
        // System.out.println("Max element form both diagonal is : "+iRet);

    }
}