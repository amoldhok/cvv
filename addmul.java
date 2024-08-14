import java.util.*;
class value
{
int a,b;
void setvalue(int a,int b)
{
this.a=a;
this.b=b;
}

class add extends value
{ 
int getadd();
}
return a+b;
class mul extends value
{
int getmul();
}
return a*b;
}
public class addmul
{
public static void main(String[] args)
{ 
mul m=new mul();
add a=new add();
Scanner xyz=new Scanner(System.in);
System.out.println("enter frist number\n");
int no1=xyz.nextInt();
System.out.println("enter second number\n");
int no2=xyz.nextInt();
a.setvalue(a,b);
int result=a.getadd();
System.out.println("addition is"+result);

a.setvalue(a,b);
int result=a.getmul();
System.out.println("multiplication  is"+result);
}
}
