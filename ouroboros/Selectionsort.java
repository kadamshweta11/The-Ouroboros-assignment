package ouroboros;

public class Selectionsort {

	public static void main(String[] args) {
		int arr[]=new int[] {4,5,7,90,4};
		int temp;
		for(int i=0;i<arr.length;i++)
		{
			for(int j=i+1;j<arr.length;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		for(int i=0;i<5;i++)
		{
			System.out.println(arr[i]);
		}
	}

}
