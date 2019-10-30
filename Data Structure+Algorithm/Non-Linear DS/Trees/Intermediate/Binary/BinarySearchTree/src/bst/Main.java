package bst;

import java.util.Arrays;
import java.util.Scanner;

class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int[] elements = getArrayInteiros(scan);
		int elem = Integer.parseInt(scan.nextLine());

		BSTSearch<Integer> bst = new BSTSearch<Integer>();

		for (int element : elements) {
			bst.insert(element);
		}

		System.out.println(Arrays.toString(bst.search(elem)));

		scan.close();
	}

	private static int[] getArrayInteiros(Scanner scan) {
		String[] entrada = scan.nextLine().split(" ");
		int[] array = new int[entrada.length];
		for (int i = 0; i < array.length; i++) {
			array[i] = Integer.parseInt(entrada[i]);
		}
		return array;
	}

}