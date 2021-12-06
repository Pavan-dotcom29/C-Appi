import java.awt.*;
import java.awt.event.*;
class gui1
{
	public static void main (String arg[])
	{
		marvellousWindow mobj=new marvellousWindow("first",500,500);
	}
}
class marvellousWindow extends Frame implements WindowListener
{
    
   
	public marvellousWindow(String str,int x,int y)
	{
		super();
		setTitle(str);
		setSize(x,y);
		addWindowListener(this);
		setVisible(true);
	}

	public void WindowDeactivated(WindowEvent obj){}
	public void WindowActivated(WindowEvent obj){}
	public void WindowDeiconified(WindowEvent obj){}
	public void WindowIconified(WindowEvent obj){}
	public void WindowClosed(WindowEvent obj){}
	public void WindowClosing(WindowEvent obj){
    System.exit(0);

	}
	public void WindowOpened(WindowEvent obj){}
}