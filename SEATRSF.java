import java.util.*;
import java.math.*;

class F {
	public static BigInteger powr(BigInteger base, BigInteger exponent, BigInteger md) {
		  BigInteger result = BigInteger.ONE;
		  while (exponent.signum() > 0) {
		    if (exponent.testBit(0)) result = result.multiply(base).mod(md);
		    base = base.multiply(base).mod(md);
		    exponent = exponent.shiftRight(1);
		  }
		  return result.mod(md);
		}
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for (int t = 0; t < T; t++) {
            BigInteger n = new BigInteger(in.next());
            BigInteger m = new BigInteger(in.next());
            BigInteger q = new BigInteger(in.next());
            BigInteger k = new BigInteger(in.next());
            
        if(n.compareTo(BigInteger.ONE)==0 || q.compareTo(m)==1)
	   {
			System.out.println("0");
			continue;
		}
		BigInteger md= new BigInteger("1000000007");
		
		BigInteger ans = m.subtract(q).mod(md);
		BigInteger p1 = powr(q.add(BigInteger.ONE),n,md).mod(md);
		BigInteger p2 = powr(q.subtract(BigInteger.ONE),n,md).mod(md);
		BigInteger p3 = powr(q,n,md).add(powr(q,n,md)).mod(md);
		ans= ans.multiply(p1.add(p2).subtract(p3)).mod(md);
		ans=ans.mod(md);
        System.out.println(ans + "");
        }
    }
}

