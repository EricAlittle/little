import java.util.*;

public class forTwoTime
{
	public static void main(String[] args)
	{
		try
		{
			Scanner in = new Scanner(System.in);
		
			System.out.print("������a->");
			double a = in.nextDouble();
			System.out.print("������b->");
			double b = in.nextDouble();
			System.out.print("������c->");
			double c = in.nextDouble();
		
			if((b*b-4*a*c) >= 0)
			{
				double result1 = (-b+Math.sqrt(b*b-4*a*c))/(2*a);
				double result2 = (-b-Math.sqrt(b*b-4*a*c))/(2*a);
				
				System.out.print("��õĸ�->" + "\n" + "x1=" + result1 + "\n" + "x2=" + result2);
			}
			else
			{
				System.out.print("DeltaС���㣬������ʵ����");
			}
		}
		catch(Exception e)
		{
			System.out.print(e.getMessage() + "��������");
		}
	}
}