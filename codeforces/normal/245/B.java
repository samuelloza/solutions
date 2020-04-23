import java.util.Scanner;

public class Main {

	/**
	 * @author sam 2012 :D app.java
	 */
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		//while (sc.hasNext()) {
			String cade = sc.nextLine();
			String URL = "";
			int conta = 0;
			if (cade.substring(0, 3).equals("ftp")) {
				System.out.print("ftp://");
				conta = 3;
			} else if (cade.substring(0, 4).equals("http")) {
				System.out.print("http://");
				conta = 4;
			}
            int aux=conta;
			for (; conta < cade.length()
		&& !(cade.charAt(conta) == 'r' && cade.charAt(conta+1) == 'u'&&aux!=conta); conta++){
			}
			System.out.print(cade.substring(aux,conta)+".ru");
			conta+=2;
			if(conta<cade.length())System.out.println("/"+cade.substring(conta,cade.length()));
			else System.out.println();
		//}

	}
}