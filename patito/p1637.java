import java.util.Scanner;

public class p1637 {

	public static void main(String[] args) {
		Scanner sc =new Scanner(System.in); 
		int a,b,c,x,y,z;
		 a = sc.nextInt();
		 b = sc.nextInt();
		 c = sc.nextInt();
		 x = sc.nextInt();
		 y = sc.nextInt();
		 z = sc.nextInt();
		 
		 if(a+x == 5 && b+y == 5 && c+z == 5) {
			 System.out.println("Esta es la llave");
		 }else {
			 System.out.println("Intenta con otra");
		 }
	}

}
