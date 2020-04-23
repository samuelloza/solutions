mport java.util.Scanner;

public class A80 {
        public static int MAX=100;
        public static boolean cri[]=new boolean[MAX];
        public static void criba(){
                cri[0]=cri[1]=true;
                for(int i=4;i<MAX;i+=2){
                        cri[i]=true;
                }
                int sq=(int)Math.sqrt(MAX);
                for(int i=3;i<=sq;i+=2){
                        if(!cri[i]){
                                for(int j=i*i;j<MAX;j+=i+i)
                                        cri[j]=true;
                        }
                }
        }
        public static void main(String[] args) {
                criba();
                Scanner in=new Scanner(System.in);
                int m,n;
                int i;
                while(in.hasNextInt()){
                        m=in.nextInt();
                        n=in.nextInt();
                        i=m;
                        for(i=m+1;i<=n;i++ ){
                                if(!cri[i])
                                        break;
                        }
                        if(i==n)
                                System.out.println("YES" );
                        else System.out.println("NO" );
                }
        }