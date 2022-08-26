import paho.mqtt.publish as publish
import string
import time

command = input("insert command: (ON/OFF):")
print("your command is", command)

publish.single("ifn649", command, hostname="3.25.76.159")
print("Done")
