import java.util.*;
import java.util.Scanner;
class rev
{
int rem,rev,no;
void acceptnumber(int no)
{
this.no=no;
}
int getreverse()
{
while(no>0)
{
rem=no%10;
no=no/10;
rev=(rev*10)+rem;
}
return rev;
}
}
public class revapplication
{
public static void main(String []args)
{
rev r=new rev();
Scanner xyz=new Scanner(System.in);
System.out.println("enter number\n");
int no=xyz.nextInt();
r.acceptnumber(no);
System.out.println(r.getreverse());
}
}
