class finalclass
{
	public static void main(String args[])
	{
		base obj=new base();
		obj.fun();
		demo dobj=new demo();
		dobj.gun();

	}
}

final class base 
{
	public int i;
	public void fun()
	{
		System.out.println("bsae fuun");
	}
}
// class dervied extends base 
// {

// }

class demo
{
	public base obj;
	public demo()
	{
		obj=new base();
	}
	public void gun()
	{
		obj.fun();
	}
}