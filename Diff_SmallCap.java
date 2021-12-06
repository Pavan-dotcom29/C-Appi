import java.util.*;

class StringDemo{  //Parent class
	
	public String str;  //characteritics

	public void Accept(){        //Behavoiuur
		Scanner sobj=new Scanner(System.in);		
		System.out.println("Enter String: ");
		str=sobj.nextLine();
	}

	public void Display(){   //Behavoiur
		
		System.out.println("The String is : " +str);
		
	}
}

class Marvellous extends StringDemo{  //child class with parent class
	
	public int Diff(){
		char Arr[] = str.toCharArray();
		int iCountS=0,iCountC=0,i=0;
		for(i=0;i<Arr.length;i++){
			if((Arr[i]>='A')&&(Arr[i]<='Z')){
				iCountC++;
			}
			else if((Arr[i]>='a')&&(Arr[i]<='z')){
				iCountS++;
			}
			
		}
		//return iCnt;*/
		/*while(i<Arr.length){
			if((Arr[i]>='A') && (Arr[i]<='Z')){
				iCountC++;
			}
			else if((Arr[i]>='a') && (Arr[i]<='z')){
				iCountS++;
			}
		i++;	
		}*/
		return iCountS-iCountC;
	}
}

class Diff_SmallCap{
	public static void main(String str[]){

		Marvellous mobj=new Marvellous();
		int iRet=0;
		mobj.Accept();
		mobj.Display();
		
		iRet=mobj.Diff();
		System.out.println("The diff betwwen of capital letter and small letter is :"+iRet);

	}
} 