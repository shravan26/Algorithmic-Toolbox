import java.util.*;

class fibonacci{
  public static void main(String args[]){
    int n;
    Scanner s = new Scanner(System.in);
    n = s.nextInt();
    System.out.println(computeFib(n));
  }
  static long computeFib(int n){
    long f[] = new long[n + 1];
    f[0] = 0L;
    f[1] = 1L;
    if(n == 0){
      return f[0];
    }
    if(n == 1){
      return f[1];
      }
    for(int i = 2 ; i <= n ; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
  }
}
