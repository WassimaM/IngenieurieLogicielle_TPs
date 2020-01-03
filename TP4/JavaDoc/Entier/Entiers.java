package tp_ing;

public class Entiers {
	/**
	 * permutation des deux nombre a et b 
	 * @param a
	 * @param b
	 */
	public static void permutation(int a,int b)
	{
		int x ;
	    x=a;
	    a=b;
	    b=x;
	}
	/**
	 * methode pour calculer a a la puissance b 
	 * @param a
	 * @param b
	 * @param c
	 */
	public static void puissance(int a,int b) 
	{
		int i;
		int c=1;
		for(i=1;i<=b;i++)
		{
			c=c*a;
		}
		System.out.println(a+" a la puissance "+b+" = "+ c);
	}
	/**
	 * 
	 * @param a
	 * @param b
	 * @return
	 */
	public static int pgcd(int a, int b) {
	      while (a != b) {
	         if (a < b)
	            b = b - a;
	         else
	            a = a - b;
	      }
	      return a;
	   }
	/**
	 * 
	 * @param n
	 * @return
	 */
	 public static long fib(long n) {
	      if ((n == 0) || (n == 1))
	         return n;
	      else
	         return fib(n - 1) + fib(n - 2);
	   }
	 /**
	  * 
	  * @param a
	  * @param b
	  */
	 public static void Max(int a , int b )
	 {
		 System.out.println("Max ( "+a+" , " +b+ " ) = " +Math.max(a, b)); 
	 }
	 /**
	  * 
	  * @param a
	  * @param b
	  */
	 public static void Min(int a , int b )
	 {
		 System.out.println("Max ( "+a+" , " +b+ " ) = " +Math.min(a, b)); 
	 }
	 /**
	  * 
	  * @param n
	  * @return
	  */
	 public static int fact (int n) {
	        int f = 1;
	        for (int i=1; i<=n; i++)
	        f=f*i;
	        return(f);
	   }
	 /**
	  * 
	  * @param nbr
	  */
	 public static void Nbr_Premier(int nbr )
	 {
		  int reste;
		  boolean flag = true;
		        
		  for(int i=2; i <= nbr/2; i++)
		  {
		     //nombre est divisible par lui-meme
		     reste = nbr%i;
		            
		     //si le reste est 0, alors arrete la boucle. Sinon continuer la boucle
		     if(reste == 0)
		     {
		        flag = false;
		        break;
		     }
		  }
		  //si flag est true, alors nombre est premier, sinon non premier
		  if(flag)
		     System.out.println(nbr + " est un nombre premier");
		  else
		     System.out.println(nbr + " n'est pas un nombre premier");
	 }
	 /**
	  * 
	  * @param x
	  */
	 public static void Paire_Impaire(int x)
	 {
		 if (x % 2 == 0) {
		      System.out.println("Pair");
		    }
		    if (x % 2 != 0) {
		      System.out.println("Impair");
		    }
	 }
}
