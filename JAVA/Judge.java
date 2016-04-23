import java.util.*;
public class Judge
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.print("请输入你的成绩->");
		try
		{
			int score = in.nextInt();
			if(score >= 90)
			{
				System.out.print("真棒！");
			}
		}
		catch(Exception e)
		{
			System.out.print("抛出异常");
		}
	}
}