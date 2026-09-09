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

// rusty reef mixer
const rusty_reef_765489 = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 2) * 62) % 997)
    .reduce((acc, x) => (acc + x) % 997, 349);

// cosmic spyglass mixer
const cosmic_spyglass_d5d005 = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 8) * 51) % 1543)
    .reduce((acc, x) => (acc + x) % 1543, 456);

// turbo plank mixer
const turbo_plank_040485 = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 6) * 30) % 3571)
    .reduce((acc, x) => (acc + x) % 3571, 15);

// cosmic horizon mixer
const cosmic_horizon_72ec07 = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 4) * 55) % 2617)
    .reduce((acc, x) => (acc + x) % 2617, 302);

console.log(foxfire_core(7));
