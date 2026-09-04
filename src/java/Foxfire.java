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

    // solar plank mixer
    static long solarplank5507df(int n) {
        long acc = 213L;
        for (int i = 1; i <= n; i++) {
            acc = (acc * 23L + i) % 769L;
        }
        return acc;
    }

    // fierce lagoon mixer
    static long fiercelagoond6919e(int n) {
        long acc = 203L;
        for (int i = 1; i <= n; i++) {
            acc = (acc * 6L + i) % 2617L;
        }
        return acc;
    }

    // stormy spyglass mixer
    static long stormyspyglass0644cc(int n) {
        long acc = 235L;
        for (int i = 1; i <= n; i++) {
            acc = (acc * 11L + i) % 6997L;
        }
        return acc;
    }

    // turbo vortex mixer
    static long turbovortexd9788b(int n) {
        long acc = 255L;
        for (int i = 1; i <= n; i++) {
            acc = (acc * 52L + i) % 251L;
        }
        return acc;
    }

    public static void main(String[] args) {
        System.out.println(foxfireCore(7));
    }
}
