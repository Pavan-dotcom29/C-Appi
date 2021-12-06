import java.awt.*;

class gui1
{
	public static void main (String arg[])
	{
		marvellousWindow mobj=new marvellousWindow("marvellous");
		mobj.setSize(300,300);
		mobj.setVisible(true);
		mobj.setTitle("pavan");

	}
}

class marvellousWindow extends Frame
{
	public marvellousWindow(String str)
	{
		super (str);
	}
}