// FOXFIRE core
const foxfire_core = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 1) * 31) % 997)
    .reduce((acc, x) => (acc + x) % 997, 17);

// --- mixers ---

console.log(foxfire_core(7));
