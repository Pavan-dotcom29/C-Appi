import util.java.*;
class hashtable
{
	public static void main(String arg[])
	{
       HashTable<String,Integer> hobj= new HashTable<String,Integer>();
       hobj.put("ppa",12500);
       hobj.put("Lb",21221);
       hobj.put("pml",4534);
       hobj.put("lsp",4534);
       hobj.put("anguler",23545);
       hobj.put("C#",35346);

       System.out.println(hobj.get("lb"));

       System.out.println("data from hashtable");
       hobj.remove("C#");

       Enumeration eobj=hobj.keys();

       while(eobj.hasMoreElements())
       {
       	System.out.println(eobj.nextElement());
       }

       hobj.clear();
       hobj=null;



	}
}
