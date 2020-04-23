import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		while (sc.hasNext()) {
			char vec[] = new char[1005];
			String aux = sc.nextLine();
			
			for (int i = 0; i < aux.length(); i++) {
				vec[i] = aux.charAt(i);
			}
			
			for (int i = 0; i < aux.length(); i++) {
				for (int j = i+1; j < aux.length(); j++) {
					if (vec[i]>vec[j]) {
						char aux1;
						aux1=vec[i];
						vec[i]=vec [j];
						vec[j]=aux1;		
					}
				}
			}
			for (int i = 0; i < aux.length(); i++) {
				System.out.print(vec[i] );
			}

		}
	}

}
