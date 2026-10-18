import java.util.Scanner;

class program59
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;


        Iteration iteration = new Iteration();

        System.out.println("Enter the frequeancy :");
        iValue = scanner.nextInt();

       iteration.Display(iValue);
    }
}

class Iteration
{
    public  void Display(int iNO)
    {
        int icnt = 0;

        // Input Updater
        if(iNO <0)
        {
            iNO = -iNO;
        }

        for(icnt = 1; icnt<=iNO; icnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
}
