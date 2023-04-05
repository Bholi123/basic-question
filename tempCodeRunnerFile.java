// lab 1


import org.w3c.dom.ls.LSOutput;

import java.util.Arrays;
import java.util.Scanner;

public class lab {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter no. of elements");
//        int n = sc.nextInt();

        int[] arr = new int[10];

        for (int i = 0; i < 10; i++) {
            arr[i]=sc.nextInt();
        }
        System.out.println(Arrays.toString(arr));
        int[] arr2= new int[10];
        int j =0;
        for (int i = 9; i >= 0; i--) {

            arr2[i] = arr[j];
            j++;

        }
        System.out.println(Arrays.toString(arr2));


    }

}