import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String cade = sc.nextLine();
		
	    Set<String> set = new HashSet<String>();
	    
	    set.add(cade);
	    int end = cade.length();
	    for (int i = 0; i < cade.length(); i++) {
			String tmp = cade.substring(end-1,end);
				   tmp+= cade.substring(0,end-1);
				cade=tmp;
				set.add(cade);
		}
	    System.out.println(set.size());

	}

}