import java.util.*;

public class Compare
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.print("请输入第一个数字->");
		int num1 = in.nextInt();
		System.out.print("请输入第二个数字->");
		int num2 = in.nextInt();
		System.out.print("请输入第三个数字->");
		int num3 = in.nextInt();
		
		int sum = num1 + num2 + num3;
		System.out.println("你输入数字的总和->" + sum);
		
		if(num1 == num2)
		{
			if(num2 == num3)
			{
				System.out.println("你输入的数字相等！");
			
				if(sum >= 1000)
				{
					System.out.println("\n你输入的数字之和大于1000");
				}
				else
				{
					System.out.println("\n你输入的数字之和小于1000");
				}
			}
		}
		else
		{
			System.out.println("\n你输入的数字不相等！");
			
			if(sum >= 1000)
			{
				System.out.println("\n你输入的数字之和大于1000");
			}
			else
			{
				System.out.println("\n你输入的数字之和小于1000");
			}
		}
	}
}