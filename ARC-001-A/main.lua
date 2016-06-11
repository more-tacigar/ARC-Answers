os.execute("g++ main.cpp -o a.out")
for i = 1, 3 do
  local input = "input"..i..".txt"
  os.execute("./a.out input"..i..".txt > output"..i..".txt")
end
