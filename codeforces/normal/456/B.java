import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		BigInteger a;
		a=sc.nextBigInteger();
		int ans=1;
		if(a.compareTo(BigInteger.ZERO)!=0){
			a=a.subtract(new BigInteger("1"));
		}else{
			ans=0;
		}
		BigInteger x=a.mod(new BigInteger("4"));
		BigInteger z=a.mod(new BigInteger("2"));
		String q,w,e;
		q=x.toString();
		e=z.toString();
		
		int xx=q.charAt(q.length()-1)-'0';
		int yy=e.charAt(e.length()-1)-'0';
		if(xx==0){
			ans+=2;
		}
		if(xx==1){
			ans+=4;
		}
if(xx==2){
	ans+=8;
		}
if(xx==3){
	ans+=6;
}
//--
if(xx==0){
	ans+=3;
}
if(xx==1){
	ans+=9;
}
if(xx==2){
	ans+=7;
}
if(xx==3){
	ans+=1;
}
//--
if(yy==0){
	ans+=4;
}
if(yy==1){
	ans+=6;
}
System.out.println((ans % 5));
		
	}
}