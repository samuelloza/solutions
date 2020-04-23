import java.util.Scanner;

public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			String cad;
			cad = sc.next();
			char vec[] = new char[1001];
			for (int i = 0; i < cad.length(); i++) {
				vec[i]=cad.charAt(i);
			}
			for (int i = 0; i < cad.length(); i++) {
				for (int j = i+1; j < cad.length(); j++) {
					
					if (vec[i]>vec[j]) {
						char aux;
						aux=vec[i];
						vec[i]=vec[j];
						vec[j]=aux;
					} 
				}
			}
			for (int i = 0; i < cad.length(); i++) {
				System.out.print(vec[i]);
			}
			

		}
	}

}
