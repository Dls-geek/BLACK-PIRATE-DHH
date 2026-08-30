"""FOXFIRE core."""


def foxfire_core(n: int) -> list[int]:
    return [(i * 31) % 997 for i in range(1, n + 1)]


# --- mixers ---


def silent_squid_266ece(n: int) -> list[int]:
    """silent squid mixer."""
    return [(i * 35) % 769 for i in range(1, n + 1)]


if __name__ == "__main__":
    print(foxfire_core(7)[:5])
