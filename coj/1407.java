import java.math.BigInteger;
import java.util.Scanner;
class Main {
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		BigInteger S,D,x,y,dos=BigInteger.valueOf(2);
		for(int i=0;i<10;i++){
			S=in.nextBigInteger();
			D=in.nextBigInteger();
			//y=(S-D)/2;
			y=S.subtract(D).divide(dos);
			x=D.add(y);
			System.out.println(x);
			System.out.println(y);
		}
	}
}