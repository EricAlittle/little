import java.util.*;

public class primeNumber
{
	public static void main(String[] args)
	{
		System.out.print("请输入一个数字->");
		Scanner in=new Scanner(System.in);
		try
		{
			long number=in.nextLong();
			if(number==2||number==3)//由于这两个数的存在增加了许多恩地逻辑，故而单独进行判断
			{
				System.out.print("素数");
			}
			else//判断大于3的数
			if(number<=1)
			{
				System.out.print("素数都是大于1的数");
			}
			else
			{
				if(number%2==0)
				{
					System.out.print("合数");
				}
				else
				{
					for(long i=3;i<number;i+=2)
					{
					//此处的I必须从3开始走。若从2开始则全部都是偶数，判断必然出错
						if(number%i==0)
						{
							System.out.print("合数");
							break;
						}
						else
						{
							System.out.print("素数");
							break;
						}
					}
				}
			}
		}
		
		catch(InputMismatchException ex){
			System.out.print("请输入一个整数");
		}
		/*
		catch(Exception ex)
		{
			ex.printStackTrace();
		}
		*/
	}
}