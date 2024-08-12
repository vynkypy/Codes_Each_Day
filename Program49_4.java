
//Write a program which accept matrix and check weather is identity matrix or not

// Identity matrix is square  matrix with 1's along the diagonal from upper left to lower right and 0's in all position
// IF it satisfies  the structure as explained before then matrix is called as identity matrix.

// Input       1    0   0   0
//             0    1   0   0
//             0    0   1   0
//             0    0   0   1   

// Output      True

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
    
    public boolean CheckIdentity() 
    {
        boolean flag = true;
        int i =0, j=0;
        
        if(iRow != iCol)
        {
            flag = false;
        }

        for(i= 0; i< iRow; i++)
        {
            for(j=0; j<iCol; j++)
            {
                if (i == j && Arr[i][j] != 1) 
                {
                    flag= false;
                } 
                else if (i != j && Arr[i][j] != 0) 
                {
                    flag= false;             
                }
            }
        }
        return flag;
    }
    
}

class Program49_4

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
        
        boolean bRet = false;

        bRet = mobj.CheckIdentity();
        if(bRet == true)
        {
            System.out.println("The matrix is Identity matrix");
        }
        if(bRet == false)
        {
            System.out.println("The matrix is NOT Identity matrix");
        }
        
        mobj = null;

        System.gc();
    }
}