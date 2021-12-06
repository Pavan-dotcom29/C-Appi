import java.util.*;

class ArrayDemo{
	public int arr[];
	public ArrayDemo(int iSize){
		arr=new int[iSize];
	}

	public void Accept(){
		Scanner sobj=new Scanner(System.in);
		int iCnt=0;
		System.out.println("ENTER THE NUMBER OF ELEMENTS:");
		for(iCnt=0;iCnt<arr.length;iCnt++){
			arr[iCnt]=sobj.nextInt();
		}

	}

	public void Display(){
		int iCnt=0;
		System.out.println("THE DIVISIBLE ELEMENTS ARE :");
		for(iCnt=0;iCnt<arr.length;iCnt++){
			if((arr[iCnt]%5==0)&&(arr[iCnt]%2==0)){
				//iCnt++;  //Count satthi
				System.out.println(arr[iCnt]);
			}
		}
		
	}
}


class Divisible_even{
	public static void main(String arg[]){
	Scanner sobj=new Scanner(System.in);
	int iLength=0,iRet=0;
	System.out.println("Enter the number");
	iLength=sobj.nextInt();

	Marvellous mobj=new Marvellous(iLength);	
	mobj.Accept();
	mobj.Display();
	
	}
}