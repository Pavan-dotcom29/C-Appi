import java.awt.*;
import java.awt.event.*;
class gui9
{
	public static void main (String arg[])
	{
		marvellousWindow mobj=new marvellousWindow("first",500,500);
	}
}
class marvellousWindow
{
    
   Frame fobj;
	public marvellousWindow(String str,int x,int y)
	{

		fobj=new Frame(str);
		fobj.setSize(x,y);
		fobj.setVisible(true);

		fobj.addWindowListener(new WindowAdapter()
			{
				public void WindowClosing(WindowEvent obj)
				{
					System.exit(0);
				}
			});

}	
}