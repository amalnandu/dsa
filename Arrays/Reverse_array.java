
class Reverse_array {

    void reverse(int[] arr, int size) {
        int temp;
        int left = 0;
        int right = size - 1;
        while (left < right) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }

        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = new int[]{1, 2, 3, 4, 5, 6, 7};
        Reverse_array obj = new Reverse_array();

        int size = 7;

        obj.reverse(arr, size);

    }
}
