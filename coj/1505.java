import java.util.Scanner; 
public class Main { 


static long amoutOfOddNumber(String n) 
{ 
long cant=0; 

for(int i=0; i<n.length();i++) 
{ 
int d=n.charAt(i)-'0'; 
if(n.length()-1-i==0) 
return cant+d/2+d%2; 
else 
{ 
long p=(d/2)*(long)Math.pow(5, n.length()-1-i); 

/*suma geometrica con base 5 5^1+ 5^2...+5^n donde n es la cantidad de digitos del numero */ 
if(i==0) 
p+= (long) (Math.pow(5, n.length())-1)/4-1; 

cant+=p; 
/*termino si encuentro algun numero par*/ 
if(d%2==0) 
return cant; 


} 
} 
return cant; 
} 
public static void main(String[] args) { 
Scanner in = new Scanner (System.in); 

int n= in.nextInt(); 
for(int i=0; i< n;i++) 
{ 
long a=in.nextLong(); 
long b=in.nextLong(); 

long aux=a; 

boolean aIsEndPoint=false; 
while(aux!=0)//verify if exist some even digit in the number
{ 
long r=aux%10; 
aux/=10; 
if(r%2==0) 
{ 
aIsEndPoint=true; 
break; 
} 

} 
if(!aIsEndPoint) a++; 

aux=b; 
boolean bIsEndPoint=false; 
while(aux!=0) // the same above 
{ 
long r=aux%10; 
aux/=10; 
if(r%2==0) 
{ 
bIsEndPoint=true; 
break; 
} 

} 

if(!bIsEndPoint) b--; 

a=a-amoutOfOddNumber(String.valueOf(a)); 
b=b-amoutOfOddNumber(String.valueOf(b)); 
System.out.println(b-a+1);	
} 


} 

}