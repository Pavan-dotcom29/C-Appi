class finalmethod
{
	public static void main(String arg[])
	{
		base bobj=new dervied();
		bobj.fun();

	}
}
class base
{
	public void fun()
	{
		System.out.println("base fun");
	}

	public final void gun()
	{
		System.out.println("base fun");
	}
}

class dervied extends base 
{
	public void fun()
	{
		System.out.println("dervied fun");
	}

	// public final void fun()
	// {
	// 	System.out.println("dervied fun");
	// }
}