// FOXFIRE core
public class Foxfire {
    static long foxfireCore(int n) {
        long acc = 17L;
        for (int i = 1; i <= n; i++) {
            acc = (acc * 31L + i) % 997L;
        }
        return acc;
    }

    // --- mixers ---

    public static void main(String[] args) {
        System.out.println(foxfireCore(7));
    }
}
