import java.util.*;
public class Main {
	
	public static void display1D(int[] arr) {
		for(int i=0 ; i<arr.length ; i++) {
			System.out.print(arr[i] +"\t");
		}
		System.out.println();
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[][] arr = {{2,54, 65, 12} , { 23 ,43, 54 , 42} , {43 ,5,23 ,64} , {75, 6 , 23 , 54}};
		Array2DUtils.accept(arr , sc);
		Array2DUtils.display(arr);
		
		int choice;
		
		do {
			
			System.out.println("1. add all numbers\n2. add rowwise\n3.columnwise addition");
			System.out.println("4. find max of all numbers\n 5. maximum rowwise\n6. find maximum columnwise");
			System.out.println("7. add 2 arrays\n8. multiply array\n9. find transpose of array");
			System.out.println("10. check identity matrix\n11. rotate matrix rows\n 12. rotate matrix columns");
			System.out.println("13. convert to 1D array\n 14. exit\nchoice : ");
			
			choice = sc.nextInt();
			
			switch(choice) {
			case 1 :
				int ans= Array2DUtils.getSum(arr);
				System.out.println("sum of all the elements in the array is :"+ ans);
				break;
			case 2:
				int[] addRows= Array2DUtils.getSumRowWise(arr);
				System.out.println("sum of all the elements in the array row wise is :");
				display1D(addRows);
				break;
			case 3:
				int[] addCols= Array2DUtils.getSumColoumnWise(arr);
				System.out.println("sum of all the elements in the array coloumn wise is :");
				display1D(addCols);
				break;
			case 4:
				int max= Array2DUtils.getMax(arr);
				System.out.println("Max element is :"+max);
				break;
			case 5:
				int maxRowWise[]= Array2DUtils.getMaxRowWise(arr);
				System.out.println("Max element row wise are :");
				display1D(maxRowWise);
				break;
				
			}
			
		}while();
	}
}
//System.out.println("1. add all numbers\n2. add rowwise\n3.columnwise addition");
//System.out.println("4. find max of all numbers\n 5. maximum rowwise\n6. find maximum columnwise");
//System.out.println("7. add 2 arrays\n8. multiply array\n9. find transpose of array");
//System.out.println("10. check identity matrix\n11. rotate matrix rows\n 12. rotate matrix columns");
//System.out.println("13. convert to 1D array\n 14. exit\nchoice : ")