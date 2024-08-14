import java.util.*;
import util.java.Scanner;
class squareapplication
{
int no;
public void setno(int no)
{
this.no=no;
}
public int getsquare()
{
sq=no*no;
}
}
public class squareapp
{
public static void main(String []args)
{ 
squareapplication s=new squareapplication();
Scanner xyz=new Scanner(System.in);
System.out.println("enter number\n");
int no=xyz.nextInt();
s.setvalue(no);
s.getsquare();
}
}