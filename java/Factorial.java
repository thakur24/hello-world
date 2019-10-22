class Factorial{  
 public static void main(String args[]){  
  int i,fact=1;  
  Scanner s  = new Scanner(System.in);
  int num = s.nextInt();
  for(i=1;i<=num;i++){    
      fact=fact*i;    
  }    
  System.out.println("Factorial of "+number+" is: "+fact);    
 }  
 
 /* Output
 5!=120
 */
