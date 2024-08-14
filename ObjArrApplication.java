import java.util.*;
class Employee {
	private int id;
	private String name;
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getSal() {
		return sal;
	}
	public void setSal(int sal)
        {
		this.sal = sal;
	}
	private int sal;
}

public class ObjArrApplication {
	public static void main(String[] args) {
	   
		  Vector v = new Vector();
	      Employee emp1 = new Employee();
	       emp1.setId(1);
	       emp1.setName("ABC");
	       emp1.setSal(10000);
	      
	       Employee emp2 = new Employee();
	       emp2.setId(2);
	       emp2.setName("MNO");
	       emp2.setSal(20000);
	       
	       Employee emp3 = new Employee();
	       emp3.setId(3);
	       emp3.setName("PQR");
	       emp3.setSal(30000);
	       
	       Employee emp4 = new Employee();
	       emp4.setId(4);
	       emp4.setName("PQR");
	       emp4.setSal(40000);
	       
	       Employee emp5 = new Employee();
	       emp5.setId(5);
	       emp5.setName("STV");
	       emp5.setSal(60000);
	       
	      v.add(emp1); 
	      v.add(emp2);
	      v.add(emp3);
	      v.add(emp4);
	      v.add(emp5);
	      
	      for(Object obj:v) {
	    	  Employee e=(Employee)obj;
	    	  System.out.println(e.getId()+"\t"+e.getName()+"\t"+e.getSal());
	      }
	}
}