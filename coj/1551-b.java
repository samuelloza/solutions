import java.util.Scanner;

public class Main{
	static int nroc = 0;

	public static void main(String[] args) {
		int conta = 0;
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			int x, y, z;
			x = sc.nextInt();
			y = sc.nextInt();
			z = sc.nextInt();
			boolean sum = false, res = false, mul = false, div = false;
			boolean va = true;
			if (x + y == z || y + z == x) {
				sum = true;
				conta++;
			}
			if (x - y == z || y - z == x) {
				res = true;
				conta++;
			}
			if (x * y == z || y * z == x) {
				mul = true;
				conta++;
			}
			if (y != 0 && z != 0 && (x / y == z || y / z == x)) {
				div = true;
				conta++;
			}
			if (sum && va) {
				if (x + y == z) {
					imprimir(x, y, z, 1, 1);
					va = false;

				} else if (y + z == x) {
					imprimir(x, y, z, 1, 2);
					va = false;
				}
			}
			if (res && va) {
				if (x - y == z) {
					imprimir(x, y, z, 2, 1);
					va = false;
				} else if (y - z == x) {
					imprimir(x, y, z, 2, 2);
					va = false;
				}
			}
			if (mul && va) {
				if (x * y == z) {
					imprimir(x, y, z, 3, 1);
					va = false;
				} else if (y * z == x) {
					imprimir(x, y, z, 3, 2);
					va = false;
				}
			}
			if (div && va) {
				if (x / y == z) {
					imprimir(x, y, z, 4, 1);
					va = false;
				} else if (y / z == x) {
					imprimir(x, y, z, 4, 2);
					va = false;
				}
			}
			nroc++;
		}
	}

	private static void imprimir(int x, int y, int z, int sum, int conta) {
		String op = null;
		switch (sum) {
		case 1:
			op = "+";
			break;
		case 2:
			op = "-";
			break;
		case 3:
			op = "*";
			break;
		case 4:
			op = "/";
			break;
		default:
			break;
		}
		switch (conta) {
		case 1:
			System.out.println("Case " + (nroc + 1) + ": " + x + op + y + "="
					+ z);

			break;
		case 2:
			System.out.println("Case " + (nroc + 1) + ": " + x + "=" + y + op
					+ z);
			break;
		default:
			break;
		}
	}
}
