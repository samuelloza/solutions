import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String cad, cad2, aux, aux2[];
		while (sc.hasNext()) {
			aux = sc.nextLine();
			aux2 = aux.split(" ");
			cad = aux2[0];
			cad2 = aux2[1];
			String g = "";
			do {
				g="";
				String d[] = cad.split(cad2);
				for (int i = 0; i < d.length; i++) {
					g += d[i];
				}
				cad=g;
			} while (g.contains(cad2));
				System.out.println(g);
		}
	}
}
