
class Max_subarray {

    int giveMaxSubArray(int[] arr, int size) {
        int max = Integer.MIN_VALUE;

        int current_sum = 0;

        for (int i = 0; i < size; i++) {
            current_sum = Integer.max(current_sum, current_sum + arr[i]);
            max = Integer.max(current_sum, max);

        }

        return max;
    }

    public static void main(String[] args) {
        int[] arr = new int[]{1, 2, 3, 4, -5, 6, 7, -8, 52};
        int size = arr.length;
        Max_subarray obj = new Max_subarray();
        int val = obj.giveMaxSubArray(arr, size);
        System.out.println(val);
    }
}
