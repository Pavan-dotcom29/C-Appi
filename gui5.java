import java.awt.*;
class gui1
{
	public static void main (String arg[])
	{
		marvellousWindow mobj=new marvellousWindow("first",500,500);
	}
}
class marvellousWindow extends Frame
{
    Button b1;
    TextField t1;

	public marvellousWindow(String str,int x,int y)
	{
		super();
		setTitle(str);
		setSize(x,y);
		
		b1=new Button("submit");
        t1=new TextField();

		b1.setBounds(50,50,100,50);
		t1.setBounds(50,150,100,50);
        

        add(b1);
        add(t1);
        setLayout(null);
        setVisible(true);
	}
}