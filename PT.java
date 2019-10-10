import java.util.*;
public class PT
{
  public static void main (String[]args)
  {
    int i, n;
    Scanner in = new Scanner (System.in);
      System.out.println ("Enter n");
      n = in.nextInt ();
    int[] row1;
    int[] row2 = { 1 };
    for (i = 0; i < row2.length; i++)
      {
	int l = n;
	while (l > 0)
	  {
	    System.out.printf (" ");
	    l--;
	  }
	System.out.println (row2[i] + " ");
      }
    row1 = row2;
    for (i = 2; i <= n; i++)
      {
	for (int k = 0; k < n - i + 1; k++)
	  System.out.print (" ");
	row2 = new int[i];
	row2[0] = 1;
	row2[i - 1] = 1;
	for (int j = 0; j <= i - 3; j++)
	  {
	    row2[j + 1] = row1[j] + row1[j + 1];
	  }
	for (i = 0; i < row2.length; i++)
	  {
	    System.out.print (row2[i] + " ");
	  }
	System.out.println ();
	row1 = row2;
      }
  }
}
