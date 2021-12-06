import Marvellous.PPA.mathematics;
import Marvellous.Python.demo;

class don
{
	public static void main(String arg[])
	{
		mathematics mobj = new mathematics();
		demo dobj = new demo();

		int ret = mobj.Add(10,11);
		System.out.println("Addition is : "+ret);

		dobj.fun();
	}
}