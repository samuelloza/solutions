
public class Main 
{
   public static void main( String args[] ) throws Exception
   {
      // Almacena la respuesta actual
      String cad;           
      // Mensaje Error
      String error = "No Number\n";     
   
      // Buffer caracteres que se mostrara en la salida
      char[] salida = new char[ 90000  ];
       
      // Tamanio de la salida ( cantidad de caracteres )
      int tamanio = 0;
   
      int longitud;
      int x, y;
      int valXY, car;
      int cantPuntos = 0;
   
      // Leemos la cantidad de puntos que se ingresaran
      car = System.in.read();
   
      while( car != 10 )
      {
         cantPuntos = cantPuntos * 10 + ( car - 48 );
         car = System.in.read();
      }
   
      for( int i = 0; i < cantPuntos; i ++  )
      {
         x = 0;
         y = 0;
    
         // Obtenemos el valor de x
         car = System.in.read();
    
         while( car != 32 )
         {
            x = x * 10 + ( car - 48 );
            car = System.in.read();
         }
    
         // Obtenemos el valor de y
         car = System.in.read();
    
         while( car != 10 )
         {
            y = y * 10 + ( car - 48 );
            car = System.in.read();
         }
    
         // Si las coordenadas son correctas, hallamos el valor 
         // correspondiente a esas coordenadas
         if( x == y || x - y == 2 )
         {
            valXY = x << 1;
     
            if( ( x & 1 ) != 0 )
               valXY = valXY - 1;
     
            if( x == y )
               cad = valXY + "\n";
     
            else
               cad = ( valXY - 2 ) + "\n";
     
            // Copiamos la respuesta actual al buffer
            longitud = cad.length();
            cad.getChars( 0, longitud, salida, tamanio );
            tamanio = tamanio + longitud;
         }
    
         // Si las coordenadas son incorrectas mostramos el mensaje de error
         else
         {
            longitud = 10; 
            error.getChars( 0, longitud, salida, tamanio );
            tamanio = tamanio + longitud;
         }
      }
   
      // Mostramos el buffer donde se encuentran las respuestas
      System.out.print( new String( salida, 0, tamanio ) );
   }
}