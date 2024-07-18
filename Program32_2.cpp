// write a code which accepts string and prints the following pattern

// Input :     "Marvellous"

// Output:     M   a   r   v   e   l   l   o   u   s
//             M   a   r   v   e   l   l   o   u   
//             M   a   r   v   e   l   l   o   
//             M   a   r   v   e   l   l  
//             M   a   r   v   e   l   
//             M   a   r   v   e   
//             M   a   r   v   
//             M   a   r   
//             M   a  
//             M  

// Input :        PPA

// Output:        P    P   A
//                P    P   
//                P    

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
        for(j = 0; j < iCnt - i; j++)
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