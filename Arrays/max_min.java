
import java.util.*;

class max_min {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the input array size");

        int size = sc.nextInt();
        int[] arr = new int[size];
        System.out.println("Enter the array elements");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        int min = arr[0];
        int max = min;
        for (int i = 0; i < size; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }

            if (arr[i] > max) {
                max = arr[i];
            }
        }

        System.out.println("maximum value is: " + max);
        System.out.println("Minimum value is: " + min);

    }
}
