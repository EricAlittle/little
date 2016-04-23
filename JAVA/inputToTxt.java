import java.io.File;
import java.io.PrintWriter;
import java.util.*;

public class inputToTxt
{
	public static void main(String[] args)
	{
		try
		{
			Scanner in = new Scanner(System.in);
			File file = new File("D:\\JAVA\\a.txt");
			System.out.println("ÇëÊäÈë×Ö·û´®->");
			String str = in.next();
			PrintWriter pfile = new PrintWriter(file);
			pfile.print(str);
			pfile.close();
		}
		catch(Exception e)
		{
			System.out.println("¶ÁÐ´³ö´í");
		}
	}
}