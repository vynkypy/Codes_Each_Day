// write a code which accepts string and prints the following pattern

// Input :     "Marvellous"

// Output:     M   
//             M   a   
//             M   a   r  
//             M   a   r   v   
//             M   a   r   v   e 
//             M   a   r   v   e   l  
//             M   a   r   v   e   l   l   
//             M   a   r   v   e   l   l   o   
//             M   a   r   v   e   l   l   o   u
//             M   a   r   v   e   l   l   o   u   s

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

    for(i = 0; i < iCnt; i++)
    {
        for(j = 0; j <= i; j++)
        {
            cout << str[j] << "\t";
        }
        cout<< endl;
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