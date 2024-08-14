import java.util.*;
import util.java.Scanner;
class square
{
int no;
public void set no(int no)
{
this.no=no;
}
int get square()
{
square=no*no;
}
}
public class squareapp
{
public static void main(String []args)
{ 
square s=new square();
Scanner xyz=new Scanner(System.in);
System.out.println("enter number\n");
int no=xyz.nextInt();
s.setvalue(no);
s.getsquare();
}
}