import java.util.Scanner;


public class Main{
    public static void main(String []args)
    {
        Scanner sc = new Scanner (System.in);
        int nro= sc.nextInt();
        for(int j=0;j<nro;j++)
        {
        
        
        int n = sc.nextInt();
        int i ;
        int v []= new int [1000];
        int q[]=new int [1000];
        int x ;
        Double c =0.0;
        int h =0;
        for(i=0;i<n;i++)
        {
            v[i]=sc.nextInt();
            
        }
        for(i=0;i<n;i++)
        {
            q[i]=sc.nextInt()+v[i];
           
            c=c+q[i];
        }
       
        c=c/(n);
      
        for(i=0;i<n;i++)
        {
            if(Double.parseDouble(Integer.toString(q[i]))<c)
                h++;
        }
         System.out.println(h);
        }
    }
    
}
