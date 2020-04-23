import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// A
		int casa []=new int[200];
		int visita []=new int[200];
		Scanner sc=new Scanner(System.in);
		int n = sc.nextInt();
		for(int i = 0 ; i< n ; i++){
			casa[i] = sc.nextInt();
			visita[i] = sc.nextInt();
		}
		
		int ans=0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if(i!=j){
					if(casa[i] == visita[j]){
						ans++;
					}
				}
			}
		}
		System.out.println(ans);
	}

}