class neuron:
    def autosave(command):
        saving=open("neuron.txt","a")
        saving.write("\n"+command)
        saving.close()
    def remember():
        remembering=open("neuron.txt","r")
        try:
            return remembering.read()
        except:
            remembering.close()
            return "No command history."
    def short_memory():
        memory=open("neuron.txt","r")
        try:
            return memory.readlines()[-1]
        except:
            return "No command history."
while True:
    print("\n\t________________________________\n\tHello, your last command was:")
    print("\t"+str(neuron.short_memory()))
    print("\tremember prints command history.")
    command=input("\tWhat's your command?\t")
    if "remember" in command:
        print("\t"+str(neuron.remember()))
    neuron.autosave(command)