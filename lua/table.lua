#!/usr/bin/lua

haoel = {name="ChenHao", age=37, handsome=True}
haoel.website="http://jb51.net/"
local age = haoel.age
haoel.handsome = false
haoel.name = nil
--print(haoel[age])

t={[1]=100, [2]="ChenHao",[3]="PI"}
for i=1, #t do
	print(t[i])
end

