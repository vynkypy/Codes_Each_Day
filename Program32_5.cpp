// write a code which accepts string and prints the following pattern

// Input :     "Marvellous"

// Output:     m   a   r    v     e   l    l   o   u     s
//             m   a   r    v     e   l    l   o   u     s
//             m   a   r    v     e   l    l   o   u     s
//             m   a   r    v     e   l    l   o   u     s
//             m   a   r    v     e   l    l   o   u     s
//             m   a   r    v     e   l    l   o   u     s
//             m   a   r    v     e   l    l   o   u     s
//             m   a   r    v     e   l    l   o   u     s
//             m   a   r    v     e   l    l   o   u     s
//             m   a   r    v     e   l    l   o   u     s


// Input :        PPA

// Output:        p    
//                p    p   
//                p    p   a

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
                if((str[j] >= 'A') && (str[j] <= 'Z'))
                {
                    str[j] = str[j]+32;
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
                if((str[j] >= 'A') && (str[j] <= 'Z'))
                {
                    str[j] = str[j]+32;
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