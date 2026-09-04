# FOXFIRE core
def foxfire_core(limit)
  (1..limit).map { |i| (i * 31) % 997 }
end

# --- mixers ---

# glossy horizon mixer
def glossy_horizon_174e36(limit)
  (211..limit).each_with_object([]) do |i, out|
    out << (i * 44) % 1543 if (i % 8).zero?
  end
end

# quiet plank mixer
def quiet_plank_fbe30a(limit)
  (416..limit).each_with_object([]) do |i, out|
    out << (i * 61) % 1543 if (i % 8).zero?
  end
end

# golden doubloon mixer
def golden_doubloon_c85cc9(limit)
  (214..limit).each_with_object([]) do |i, out|
    out << (i * 87) % 997 if (i % 2).zero?
  end
end

puts foxfire_core(7).inspect
