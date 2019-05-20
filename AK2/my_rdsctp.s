.text

.global mytime
.type mytime, @function

mytime:
		#Odłożenie rejestru bazowego na stos i skopiwanie obecnej
  		# wartości wskaźnika stosu do rejestru bazowego
push %ebp
mov %esp,%ebp

    		# Parametr wywołania funkcji umieszczony zostanie
    		# w rejestrze RDI 
 
cmp $1,%eax
jl rdtsc
jmp rdtscp

rdtsc:
xor %eax,%eax
cpuid
rdtsc
jmp wyjscie

rdtscp:
rdtscp
jmp wyjscie

wyjscie:
		# Przywrócenie poprzedniej wartości rejestru bazowego
   		# i wskaźnika stosu
mov %ebp, %esp
pop %ebp
ret 		# Powrót do miejsca wywołania funkcji



