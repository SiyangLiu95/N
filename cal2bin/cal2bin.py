#NIO Automotives
#Siyang Liu (6796)

import sys
import getopt
import bincopy
import zlib
import struct

def doHelp():
	print("**********Help**********")
	print("cal2bin.py Ver 1.2")
	print("Please run with python 3")
	print("Please make sure the following libs are installed: getopt, bincopy, zlib, struct")
	print("Availabe options and usage:")
	print("-i <input file name>	Must be .s19 format.")
	print("-o <output file name>	Must be .bin format. Default to write to CAL.bin if not specified")
	print("-h/--help  		print version & help info")

opts, args = getopt.getopt(sys.argv[1:], "hi:o:", ["help"])
inputFile = ""
outputFile = ""
errorFlag = False 
for op, value in opts:
	if op == "-i":
		#print("Doing -i option")
		inputFile = value
		if not inputFile.endswith(".s19"):
			print("Error: input file must be in .s19 format")
			errorFlag = True
	elif op == "-o":
		#print("Doing -o option")
		outputFile = value
		if not outputFile.endswith(".bin"):
			print("Error: output file must be in .bin format")
			errorFlag = True
	elif op == "-h":
		doHelp()
		errorFlag = True
	elif op ==  "--help":
		doHelp()
		errorFlag = True


if inputFile == "":
	doHelp()
	errorFlag = True

if errorFlag : 
	sys.exit()

if outputFile == "":
	outputFile = "CAL.bin"

# Start of logic handling
cal_s19_file = inputFile
cal_bin_file = outputFile
#cal_name = 'CAL.bin'
app_config_path = '/nio/feature'

# bin file format
# Byte 0..3 cal length
# Byte 4..7 cal crc32
# cal contents

# read s19 cal file and get length crc32
s19_fd = bincopy.BinFile()
s19_fd.add_srec_file(cal_s19_file)
cal_length = len(s19_fd.as_binary())
cal_crc32 = zlib.crc32((s19_fd.as_binary())) % (1<<32)
print('CAL length is 0x{0:x}, CRC32 is 0x{1:x}'.format(cal_length, cal_crc32))

#pack cal to bin_file
with open(cal_bin_file, 'wb') as bin_fd:
    bin_fd.write(struct.pack('<I', cal_length))
    bin_fd.write(struct.pack('<I', cal_crc32))
    bin_fd.write(s19_fd.as_binary())
