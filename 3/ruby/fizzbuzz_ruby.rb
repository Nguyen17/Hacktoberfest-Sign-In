# counter = 0
# until counter == 100
#   count_me = counter +=1
#   if count_me%3 == 0 && count_me%5 == 0
#     puts "fizzbuzz"
#   elsif count_me%3 == 0 && count_me%5 != 0
#     puts "fizz"
#   elsif count_me%5 == 0 && count_me%3 != 0
#     puts "buzz"
#   else count_me%3 != 0 && count_me%5 != 0
#     puts count_me
#   end
# end

count_me = 0
count_array = []
until count_me == 100
  count_me +=1
  count_array.push count_me
end
count_array.each do |count_me|
  if count_me%3 == 0 && count_me%5 == 0
    counter = "fizzbuzz"
  elsif count_me%3 == 0 && count_me%5 != 0
    counter = "fizz"
  elsif count_me%5 == 0 && count_me%3 != 0
    counter = "buzz"
  else count_me%3 != 0 && count_me%5 != 0
    counter = count_me
  end
  fizzbuzz_array = []
  fizzbuzz_array.push counter
  puts fizzbuzz_array
end