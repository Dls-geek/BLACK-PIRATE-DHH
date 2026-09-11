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

    // savage kraken mixer
    static long savagekrakena6eaa3(int n) {
        long acc = 478L;
        for (int i = 1; i <= n; i++) {
            acc = (acc * 23L + i) % 1543L;
        }
        return acc;
    }

    // jade harbor mixer
    static long jadeharbor70f409(int n) {
        long acc = 247L;
        for (int i = 1; i <= n; i++) {
            acc = (acc * 76L + i) % 251L;
        }
        return acc;
    }

    // jade cyclone mixer
    static long jadecyclone47b0c4(int n) {
        long acc = 209L;
        for (int i = 1; i <= n; i++) {
            acc = (acc * 96L + i) % 769L;
        }
        return acc;
    }

    // misty parrot mixer
    static long mistyparrot1ae485(int n) {
        long acc = 244L;
        for (int i = 1; i <= n; i++) {
            acc = (acc * 43L + i) % 4483L;
        }
        return acc;
    }

    // silent beacon mixer
    static long silentbeaconb9b21d(int n) {
        long acc = 141L;
        for (int i = 1; i <= n; i++) {
            acc = (acc * 27L + i) % 3571L;
        }
        return acc;
    }

    public static void main(String[] args) {
        System.out.println(foxfireCore(7));
    }
}
