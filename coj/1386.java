import java.util.Scanner;

public class Main {


	static 	Scanner leer=new Scanner(System.in);
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a,b;
		a=leer.nextInt();
		b=leer.nextInt();
		sol(a,b);
	}
	public static void sol(int a,int b)
	{
		for(int i=1;i<=a;i++)
		{
			if(a%i==0)
			{
				for(int j=1;j<=b;j++)
				{
					if(b%j==0)
						System.out.println(i+" "+j);
				}
			}
		}
	}

}