import java.util.*;

public class Compare
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.print("�������һ������->");
		int num1 = in.nextInt();
		System.out.print("������ڶ�������->");
		int num2 = in.nextInt();
		System.out.print("���������������->");
		int num3 = in.nextInt();
		
		int sum = num1 + num2 + num3;
		System.out.println("���������ֵ��ܺ�->" + sum);
		
		if(num1 == num2)
		{
			if(num2 == num3)
			{
				System.out.println("�������������ȣ�");
			
				if(sum >= 1000)
				{
					System.out.println("\n�����������֮�ʹ���1000");
				}
				else
				{
					System.out.println("\n�����������֮��С��1000");
				}
			}
		}
		else
		{
			System.out.println("\n����������ֲ���ȣ�");
			
			if(sum >= 1000)
			{
				System.out.println("\n�����������֮�ʹ���1000");
			}
			else
			{
				System.out.println("\n�����������֮��С��1000");
			}
		}
	}
}