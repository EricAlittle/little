import java.util.*;

public class year
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.print("请输入起始年份->");
		int start = in.nextInt();
		System.out.print("请输入终止年份->");
		int end = in.nextInt();
		int sum = 0;
		
		while(start <= end)
		{
			if(start%4 == 0 && start%100 != 0 || start%400 == 0)
			{
				sum += 366;
			}
			else
			{
				sum += 365;
			}
			start++;
		}
		
		System.out.print(start + "年到" + end + "年之间共有" + sum + "天");
	}
}