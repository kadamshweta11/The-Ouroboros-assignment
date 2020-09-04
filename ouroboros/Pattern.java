package ouroboros;

public class Pattern {

	public static void main(String[] args) {
		int n=10;
		int star=1,hash=n-1;
		for(int i=1;i<=n;i++)
		{
			if(i%2!=0)
			{
				for(int j=1;j<=star;j++)
				{
					System.out.print("* ");
				}
				for(int k=1;k<=hash;k++)
				{
					System.out.print("# ");
				}
			}
			else
			{
				for(int k=1;k<=hash;k++)
				{
					System.out.print("# ");
				}
				for(int j=1;j<=star;j++)
				{
					System.out.print("* ");
				}
			}
			if(i<=n/2)
			{
				star++;
				hash--;
			}
			else
			{
				hash++;
				star--;
			}
			System.out.println();
		}

	}

}
