import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.math.BigInteger;
public class p1399 {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		BigInteger one = new BigInteger("1");
        Map<Map<BigInteger, BigInteger>,BigInteger> map = new HashMap<Map<BigInteger, BigInteger>,BigInteger>() ;
		int n = sc.nextInt();
		for(int i = 0; i < n; i++ ){
			String nume  = sc.next();
			BigInteger f   = new BigInteger(nume);
			BigInteger d   = new BigInteger("2");
			while(true){
				Map<BigInteger, BigInteger> map2 = new HashMap<BigInteger, BigInteger>();
				map2.put(f, d);
				if(map.get(map2) == null) {
					map.put(map2, f.divide(d));
					System.out.println(f.divide(d));
				}
				f = map.get(map2);
				if(f.compareTo(one) == 0){
					System.out.println(d);
					break;
				}
				d = d.add(one);
			}
		}
	}

}
