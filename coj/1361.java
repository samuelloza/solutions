import java.util.Scanner;


public class Main {

	/**
	 * @param args
	 */
	static Scanner leer=new Scanner(System.in);
	static int[] v={1,64,729,4096,15625,46656,117649,262144,531441,1000000,1771561,2985984,4826809,7529536,11390625,16777216,24137569,34012224,47045881,64000000,85766121};
	public static void main(String[] args) {
		int a,b;
		while(leer.hasNext())
		{
			a=leer.nextInt();
			b=leer.nextInt();
			System.out.println(cu(a,b));
		}

	}
	public static int  cu(int min,int may)
	{
		int cont =0;
		for(int i=0;i<v.length;i++)
		{
			if(v[i]>=min && v[i]<=may)
				cont++;
		}
		return cont;
	}
}