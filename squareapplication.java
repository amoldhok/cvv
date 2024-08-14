import java.util.*;
import java.util.Scanner;
class squareapp
{
int no,square;
public void setvalue(int no)
{
this.no=no;
}

int getsquare()
{
square=no*no;
return square;
}
}

public class squareapplication
{
public static void main(String []args)
{ 
squareapp s=new squareapp();
Scanner xyz=new Scanner(System.in);
System.out.println("enter number\n");
int no=xyz.nextInt();
s.setvalue(no);
   System.out.println(s.getsquare());
}
}