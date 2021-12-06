

class finalchar
{
	public static void main(String arg[])
	{
		demo obj=new demo();
		System.out.println("value is j:"+obj.j);
	}
}

class demo
{
	public int i;
	public final int j;

	public demo()
	{
		i=20;
		j=30;
	}
}