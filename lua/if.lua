#!/usr/bin/lua

if age == 40 and sex == "male" then
	print("The man is a flower in fourty")
elseif age > 60 and sex ~= "Female" then
	print("old man without country!");
elseif age < 20 then
	io.write("too young, too naive")
else
	local age = io.read()
	print("Your age is "..age)
end
