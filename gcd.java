import java.util.*;
import java.lang.*;

class GCD{
  //An efficient Algorithm to Compute GCD will be to divide a/b use reminder as the new b and old b as new a
  public static void main(String args[]){
    int a,b;
    Scanner s = new Scanner(System.in);
    a = s.nextInt();
    b = s.nextInt();
    System.out.println(computeGCD(a,b));
  }
  static int computeGCD(int a , int b){
    int rem_of_a;
    if(b == 0){
      return a;
    }
    rem_of_a = a % b;
    return computeGCD(b , rem_of_a);
  }
}
