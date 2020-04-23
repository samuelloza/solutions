import java.util.Scanner;

public class A {

	public static void main(String[] args) {
		int a,b,c;
		Scanner sc=new Scanner(System.in);
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		int ans=0;
		while(a>=0 && b>=0 && c>=0){
			a--;
			b-=2;
			c-=4;
			ans+=7;
		}
		ans-=7;
		if(ans < 0){
			System.out.println(0);	
		}else{
			System.out.println(ans);
		}
		

	}

}