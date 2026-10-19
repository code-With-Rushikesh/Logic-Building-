#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
{
    int icnt = 0, isum = 0;


    for(icnt = 1; icnt <= iNo/2; icnt++)
    {
        if((iNo % icnt ) == 0)
        {
            isum = isum + icnt;
        }
    }

    if(isum == iNo)
    {
        printf("It is perfect number");
    }
    else
    {
        printf("it is not perfect number");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)