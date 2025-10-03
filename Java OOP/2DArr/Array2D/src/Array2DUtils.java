import java.util.Scanner;

public class Array2DUtils {
    // to display 2d array
	public static void display(int[][] arr) {
		for(int i=0 ; i<arr.length ; i++) {
			for(int j=0 ; j<arr[i].length ; j++) {
				System.out.print(arr[i][j]);
			}
			System.out.println();
		}
	}
    
	// Accept input for 2d array from user
	public static void accept(int[][] arr , Scanner sc) {
		for(int i=0 ; i<arr.length ; i++) {
			for(int j=0 ; j<arr[i].length ; j++) {
				arr[i][j]=sc.nextInt();
			}
		}
	}

	// sum of all the elements of the array.
	public static int getSum(int[][] arr) {
		// TODO Auto-generated method stub
		int sum=0;
		for(int i=0 ; i<arr.length ; i++) {
			for(int j=0 ; j<arr[i].length ; j++) {
				sum+=arr[i][j];
			}
		}
		return sum;
	}

	// to get of addition of all row of 2d array
	public static int[] getSumRowWise(int[][] arr) {
		int ans[]= new int [arr.length];
		for(int i=0 ; i<arr.length ; i++) {
			for(int j=0 ; j<arr[i].length ; j++) {
				ans[i]+=arr[i][j];
			}
		}
		return ans;
	}

	// to get of addition of all coloumn of 2d array	
	public static int[] getSumColoumnWise(int[][] arr) {
		int ans[]= new int [arr[0].length];
		for(int i=0 ; i<arr.length ; i++) {
			for(int j=0 ; j<arr[i].length ; j++) {
				ans[j]+=arr[i][j];
			}
		}
		return ans;
	}

	// to get maximum element in the array
	public static int getMax(int[][] arr) {
		int ans=Integer.MIN_VALUE;
		for(int i=0 ; i<arr.length ; i++) {
			for(int j=0 ; j<arr[i].length ; j++) {
				if(arr[i][j]>ans) {
					ans=arr[i][j];
				}
			}
		}
		return ans;
	}

	public static int[] getMaxRowWise(int[][] arr) {
		int ans[]= new int [arr.length];
		for(int i=0 ; i<arr.length ; i++) {
			for(int j=0 ; j<arr[i].length ; j++) {
				ans[i]+=arr[i][j];
			}
		}
		return ans;
	}
	
	//

}
