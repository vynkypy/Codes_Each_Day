
//Write a program which accept matrix and return largest number from both the digonals
// Input       3   2   5   9
//             4   3   2   2
//             8   4   1   9
//             3   9   7   5

// Output      9

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

    public int MaxInDiagonal()
    {
        int iMax = Arr[0][0];

        for (int i = 0; i < iRow; i++) 
        {
            if (Arr[i][i] > iMax) 
            {
                iMax = Arr[i][i];
            }
        }
    
        for (int i = 0; i < iRow; i++) {
            if (Arr[i][iCol - i - 1] > iMax) {
                iMax = Arr[i][iCol - i - 1];
            }
        }
    
        return iMax;
    }
}

class Program48_3

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
        iRet = mobj.MaxInDiagonal(); 
        System.out.println("Max element form both diagonal is : "+iRet);

    }
}