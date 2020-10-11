import sys

def f(ip3, op3):
	with open(ip3) as fun:
	    data = list(fun.read())
	fun.close()

	dlms = ["\t",",",".",";",":","|","\'","\"","{","}","\\","/","`"," ","-"]
	frequency = [data.count(c) for c in dlms]
	max_frequency = max(frequency)
	if frequency.count(max_frequency) > 1:
		print("CONFUSING")
		sys.exit(1)
	dlms_new = dlms[frequency.index(max_frequency)]

	out_data = [dlms_new if e in dlms else e for e in data]

	with open(op3,"w") as f:
	    f.write("".join(out_data))
	f.close()
	print("".join(out_data))


if __name__ == "__main__":
	if(len(sys.argv) != 3):
		print("Usage : python3 prog1.py <input> <output>")
		sys.exit(1)
	f(sys.argv[1],sys.argv[2])
