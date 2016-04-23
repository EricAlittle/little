import java.util.*;

public class forTwoTime
{
	public static void main(String[] args)
	{
		try
		{
			Scanner in = new Scanner(System.in);
		
			System.out.print("请输入a->");
			double a = in.nextDouble();
			System.out.print("请输入b->");
			double b = in.nextDouble();
			System.out.print("请输入c->");
			double c = in.nextDouble();
		
			if((b*b-4*a*c) >= 0)
			{
				double result1 = (-b+Math.sqrt(b*b-4*a*c))/(2*a);
				double result2 = (-b-Math.sqrt(b*b-4*a*c))/(2*a);
				
				System.out.print("求得的根->" + "\n" + "x1=" + result1 + "\n" + "x2=" + result2);
			}
			else
			{
				System.out.print("Delta小于零，方程无实根！");
			}
		}
		catch(Exception e)
		{
			System.out.print(e.getMessage() + "输入有误！");
		}
	}
}