import java.util.Arrays;
import java.util.Scanner;


public class Main {

	/**
	 * @param args
	 */
	static Scanner leer=new Scanner(System.in);
	public static void main(String[] args) {
		while(leer.hasNext())
		{
			int n=Integer.valueOf(leer.next());
			double[] a=new double[n];
			for(int i=0;i<n;i++)
				a[i]=Double.valueOf(leer.next());
			Arrays.sort(a);
			double p=a[0]+1;
			int cont=1;
			for(int i=1;i<n;i++)
			{
				if(p<a[i])
				{
					cont++;
					p=a[i]+1;
				}
					
			}
			System.out.println(cont);
		}

	}

}