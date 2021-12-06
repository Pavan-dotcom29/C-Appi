import java.awt.*;

class gui1
{
	public static void main (String arg[])
	{
		marvellousWindow mobj=new marvellousWindow();
		marvellousWindow mobj1=new marvellousWindow();
	

	}
}

class marvellousWindow extends Frame
{
	public marvellousWindow(String str)
	{
		super();
		setTitle("marvellous");
		setSize(400,400);
		setVisible(true);
	}
}