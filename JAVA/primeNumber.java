import java.util.*;

public class primeNumber
{
	public static void main(String[] args)
	{
		System.out.print("������һ������->");
		Scanner in=new Scanner(System.in);
		try
		{
			long number=in.nextLong();
			if(number==2||number==3)//�������������Ĵ����������������߼����ʶ����������ж�
			{
				System.out.print("����");
			}
			else//�жϴ���3����
			if(number<=1)
			{
				System.out.print("�������Ǵ���1����");
			}
			else
			{
				if(number%2==0)
				{
					System.out.print("����");
				}
				else
				{
					for(long i=3;i<number;i+=2)
					{
					//�˴���I�����3��ʼ�ߡ�����2��ʼ��ȫ������ż�����жϱ�Ȼ����
						if(number%i==0)
						{
							System.out.print("����");
							break;
						}
						else
						{
							System.out.print("����");
							break;
						}
					}
				}
			}
		}
		
		catch(InputMismatchException ex){
			System.out.print("������һ������");
		}
		/*
		catch(Exception ex)
		{
			ex.printStackTrace();
		}
		*/
	}
}