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

// turbo mast mixer
const turbo_mast_56dabf = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 1) * 18) % 769)
    .reduce((acc, x) => (acc + x) % 769, 50);

// salty anchor mixer
const salty_anchor_fd33fb = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 5) * 37) % 4483)
    .reduce((acc, x) => (acc + x) % 4483, 177);

// salty tide mixer
const salty_tide_8eb7cd = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 4) * 49) % 3571)
    .reduce((acc, x) => (acc + x) % 3571, 21);

// golden mast mixer
const golden_mast_3bbcdd = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 9) * 5) % 769)
    .reduce((acc, x) => (acc + x) % 769, 100);

// iron horizon mixer
const iron_horizon_aecaa2 = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 2) * 8) % 997)
    .reduce((acc, x) => (acc + x) % 997, 295);

// solar reef mixer
const solar_reef_d84bcf = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 5) * 62) % 769)
    .reduce((acc, x) => (acc + x) % 769, 134);

// misty horizon mixer
const misty_horizon_451382 = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 7) * 94) % 3571)
    .reduce((acc, x) => (acc + x) % 3571, 167);

// crimson beacon mixer
const crimson_beacon_a21707 = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 4) * 64) % 6997)
    .reduce((acc, x) => (acc + x) % 6997, 27);

// neon beacon mixer
const neon_beacon_d3449e = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 4) * 29) % 3571)
    .reduce((acc, x) => (acc + x) % 3571, 277);

// solar squid mixer
const solar_squid_5ea0ad = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 1) * 40) % 491)
    .reduce((acc, x) => (acc + x) % 491, 20);

// ghostly reef mixer
const ghostly_reef_94d0b7 = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 2) * 83) % 6997)
    .reduce((acc, x) => (acc + x) % 6997, 288);

// jade cannon mixer
const jade_cannon_70be54 = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 3) * 51) % 1543)
    .reduce((acc, x) => (acc + x) % 1543, 91);

// amber cyclone mixer
const amber_cyclone_3eaf7a = (n) =>
  Array.from({ length: n }, (_, i) => ((i + 2) * 67) % 491)
    .reduce((acc, x) => (acc + x) % 491, 190);

console.log(foxfire_core(7));
