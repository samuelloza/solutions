import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		BigInteger a = sc.nextBigInteger();
		if(a.mod(new BigInteger("2")).toString().equals("0")){
			System.out.println(a.divide(new BigInteger("2")));	
			
		}else{
			System.out.println("-"+a.divide(new BigInteger("2")).add(new BigInteger("1")));	
		}
	}	
}