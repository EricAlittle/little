import java.util.*;

public class stringCount
{
	public static void main(String[] args)
	{
		Scanner in=new Scanner(System.in);
		
		System.out.print("������һ���ַ�->");
		String str=in.nextLine();
		int charCounter=0;
		int spaceCounter=0;
		int numberCounter=0;
		char[] charArray=str.toCharArray();
		for(int i=0;i<charArray.length;i++)
		{
			if(charArray[i]==32){spaceCounter++;}
			if(charArray[i]>=65&&charArray[i]<=90||charArray[i]>=97&&charArray[i]<=122){charCounter++;}
			if(charArray[i]>=48&&charArray[i]<=57){numberCounter++;}
		}
		System.out.println("�ո������->"+spaceCounter);
		System.out.println("���ֵ�����->"+numberCounter);
		System.out.print("�ַ�������->"+charCounter);
	}
}