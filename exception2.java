import java.util.Scanner;
class exception2
{
	public static void main(String arg[])
	{
         
         
         Scanner sobj=new Scanner(System.in);
         int no1=0,no2=0;
         float result=0.0f;

         System.out.println("eneter the first number");
         no1=sobj.nextInt();

          System.out.println("eneter the second number");
         no2=sobj.nextInt();
        
        try
        {
         result=no1/no2;
         System.out.println("division is :"+result);
     }
     catch(ArithmeticException obj)
     {
   System.out.println("arithmatix=c exception occur");
     }
      catch(ArrayIndexOutOfBoundsException obj)
      {
        System.out.println("array index");

         // System.out.println("datat is :"+result);
      }
      catch(Exception obj)
      {
        System.out.println("exception coocr");
      }
        finally
        {
            System.out.println("inside finally");
        }
	}
}

