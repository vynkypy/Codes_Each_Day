// write a code which accepts string and prints the following pattern

// Input :     "Marvellous"

// Output:     M   A   R   V   E   L   L   O   U   S
//             M   A   R   V   E   L   L   O   U   S
//             M   A   R   V   E   L   L   O   U   S
//             M   A   R   V   E   L   L   O   U   S
//             M   A   R   V   E   L   L   O   U   S
//             M   A   R   V   E   L   L   O   U   S
//             M   A   R   V   E   L   L   O   U   S
//             M   A   R   V   E   L   L   O   U   S
//             M   A   R   V   E   L   L   O   U   S
//             M   A   R   V   E   L   L   O   U   S


// Input :        PPA

// Output:        P    
//                P    P   
//                P    P   A

#include<iostream>

using namespace std;

void Pattern(char *str)
{
    int iCnt = 0, i =0, j = 0;
    char *temp = str;
    while(*temp != '\0')
    {
        iCnt++;
        temp++;

    }
    if(iCnt >= 5)
    {
        for(i = 0; i < iCnt; i++)
        {
            for(j = 0; j < iCnt; j++)
            {
                if((str[j] >= 'a') && (str[j] <= 'z'))
                {
                    str[j] = str[j]-32;
                }
                cout << str[j] << "\t";
            }
            cout<< endl;
        }
    }

    else if(iCnt < 5)
    {
        for(i = 0; i < iCnt; i++)
        {
            for(j = 0; j <= i; j++)
            {
                if((str[j] >= 'a') && (str[j] <= 'a'))
                {
                    str[j] = str[j]-32;
                }
                cout << str[j] << "\t";
            }
            cout<< endl;
        }       
    }
}

int main() 
{    
    char Arr[30];

    cout << "Enter the source string: " << endl;
    cin.getline(Arr, 30);

    Pattern(Arr); 
       
    return 0;
}