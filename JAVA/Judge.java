import java.util.*;
public class Judge
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.print("��������ĳɼ�->");
		try
		{
			int score = in.nextInt();
			if(score >= 90)
			{
				System.out.print("�����");
			}
		}
		catch(Exception e)
		{
			System.out.print("�׳��쳣");
		}
	}
}