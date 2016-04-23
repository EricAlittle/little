import java.util.*;

public class diamondFlower
{
	public static void main(String[] args)
	{		
		try
		{
			System.out.print("请输入要创建的菱形花的行数->");
			Scanner in = new Scanner(System.in);
			int number = in.nextInt();
			
			for(int i = 0; i < number - 1; i++) 
			{ 
				for(int x = i + 1; x < number; x++) 
				{ 
					System.out.print(" "); 
				} 
				for(int y = 0;y < (i + 1) * 2 - 1; y++) 
				{ 
					System.out.print("*"); 
				} 
				System.out.println(); 
			} 
			for(int i = 0; i < number; i++) 
			{ 
				for(int x = 0; x < i; x++) 
				{ 
					System.out.print(" ");
				} 
				for(int y = i; y < 2 * number - i - 1; y++) 
				{ 
					System.out.print("*"); 
				} 
				System.out.println(); 
			} 
		}
		catch(Exception e)
		{
			System.out.print(e.getMessage() + "\n" + "输入格式出错！");
		}
	}
}