import java.util.*;

public class leapYear
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.print("���������-->");
		int year = in.nextInt();
		
		if(year%4 == 0 && year%100 != 0 || year%400 == 0)
		{
			System.out.print("\n���������꣡");
		}
		else
		{
			System.out.print("\n������ƽ�꣡");
		}
	}
}