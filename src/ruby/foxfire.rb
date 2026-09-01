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

puts foxfire_core(7).inspect
