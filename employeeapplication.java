import java.util.*;
class employee 
{
	private int id;
	private String name;
 	private int sal;
	
	public void setId(int id)
	 {
		this.id = id;
	}
	public int getId() 
	{
		return id;
	}

	public void setName(String name)
	 {
		this.name = name;
	}
	public String getName() 
	{
		return name;
	}

	public void setSal(int sal) 
	{
		this.sal = sal;
	}
	public int getSal() 
	{
		return sal;
	} 	

	public employee(int id, String name, int sal) 
	{
		this.id = id;
		this.name = name;
		this.sal = sal;
	}
}

public class employeeapplication
 {
	public static void main(String[] args)
	 {  
 Vector v=new Vector();   
 

 employee e1=new employee();
		e1.setid(2);
		e1.setname("abhii");
		e1.setsal(10000);

 employee e2=new employee();
		e2.setid(3);
		e2.setname("pratik");
		e2.setsal(40000);

 employee e3=new employee();
		e3.setid(4);
		e3.setname("gopal");
		e3.setsal(900000);

 employee e4=new employee();
		e4.setid(5);
		e4.setname("oam");
		e4.setsal(80000000);
employee e5=new employee();
		e5.setid(1);
		e5.setname("Amol");
		e5.setsal(500000);

	      v.add(e1);
	      v.add(e2);
	      v.add(e3);
	      v.add(e4);
	     v.add(e5);
	     
	      
	      for(Object obj:v) 
              {
	    	  employee em=(employee)obj;
	    	  System.out.println(v.getid()+"\t"+v.getname()+"\t"+v.getsal());
	      }
}
}

