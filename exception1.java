import java.util.Scanner;
class exception1
{
	public static void main(String arg[])
	{
         int arr[]=new int[5];
         arr[0]=10;
         arr[1]=20;
         arr[2]=30;
         arr[3]=40;
         arr[4]=50;

         int index=0;
         Scanner sobj=new Scanner(System.in);

         System.out.println("eneter the index of aaray");
         index=sobj.nextInt();

         try
        {
         System.out.println("datat is :"+arr[index]);
     }
     catch(ArrayIndexOutOfBoundsException obj) 
     {
     	System.out.println("exceprtion occured:"+obj);
        }
        finally
        {
     	System.out.println("application gets treminated");

        }
        System.out.println("end of main");

	}

}