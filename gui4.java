import java.awt.*;

class gui1
{
	public static void main (String arg[])
	{
		marvellousWindow mobj=new marvellousWindow("first",500,500);
		marvellousWindow mobj1=new marvellousWindow("second",300,300);
	

	}
}

class marvellousWindow extends Frame
{
	public marvellousWindow(String str,int x,int y)
	{
		super();
		setTitle(str);
		setSize(x,y);
		setVisible(true);
	}
}