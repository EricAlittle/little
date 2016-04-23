import java.util.*;

public class randomNumber
{
	public static void main(String[] args)
	{
		Random random = new Random();
		int[] list = new int[10];
		for(int i = 0;i <= 9;i++)
		{
			list[i] = random.nextInt(9);
		}
		for(int x:list)
		{
			System.out.println(x);
		}
	}
}