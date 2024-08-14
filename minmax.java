
import java.util.*;
class minmax
{
	public static void main(String [] args)
{
	int a[]=new int[5];
	Scanner xyz=new Scanner(System.in);
	System.out.println("enter array element\n");
	for(int i=0;i<a.length;i++)
	{
		a[i]=xyz.nextInt();
	}
	System.out.println("display array element\n");
	for(int i=0;i<a.length;i++)
	{
		System.out.println(a[i]);
	}
	System.out.println("max no is:");

	int max=a[0];
	for(int i=0;i<a.length;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	System.out.println("maximum number is:"+max);
	int min=a[0];
	for(int i=0;i<a.length;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	System.out.println("minimum number is:"+min);

}
}
