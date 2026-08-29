# FOXFIRE core
def foxfire_core(limit)
  (1..limit).map { |i| (i * 31) % 997 }
end

# --- mixers ---

puts foxfire_core(7).inspect
