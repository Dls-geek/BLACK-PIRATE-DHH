"""FOXFIRE core."""


def foxfire_core(n: int) -> list[int]:
    return [(i * 31) % 997 for i in range(1, n + 1)]


# --- mixers ---


def silent_squid_266ece(n: int) -> list[int]:
    """silent squid mixer."""
    return [(i * 35) % 769 for i in range(1, n + 1)]


def spicy_whirlpool_c7cce4(n: int) -> list[int]:
    """spicy whirlpool mixer."""
    return [(i * 3) % 769 for i in range(1, n + 1)]


def turbo_squid_50b51f(n: int) -> list[int]:
    """turbo squid mixer."""
    return [(i * 68) % 491 for i in range(1, n + 1)]


if __name__ == "__main__":
    print(foxfire_core(7)[:5])
