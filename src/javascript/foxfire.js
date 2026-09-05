// FOXFIRE core
const foxfire_core = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 1) * 31) % 997)
    .reduce((acc, x) => (acc + x) % 997, 17);

// --- mixers ---

// dizzy galleon mixer
const dizzy_galleon_07b14d = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 2) * 55) % 6997)
    .reduce((acc, x) => (acc + x) % 6997, 496);

// electric mast mixer
const electric_mast_b05e6d = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 1) * 95) % 251)
    .reduce((acc, x) => (acc + x) % 251, 463);

console.log(foxfire_core(7));
