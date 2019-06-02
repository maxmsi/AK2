.text
.global funkcjaF
.type funkcjaF, @function

funkcjaF:
push %ebp
mov %esp,%ebp
	
	flds 8(%ebp)
	flds 8(%ebp)

	fmulp
	fld1
	faddp
	fsqrt
	fld1
	fsubrp

mov %ebp,%esp
pop %ebp
ret

.global funkcjaG
.type funkcjaG, @function

funkcjaG:
push %ebp
mov %esp,%ebp

	flds 8(%ebp)
	flds 8(%ebp)
	#flds liczbaX
	#flds liczbaX
	fmulp
	
	flds 8(%ebp)
	flds 8(%ebp)
	fmulp
	fld1
	faddp
	fsqrt
	fld1
	faddp
	
	fdivrp

mov %ebp,%esp
pop %ebp
ret


.text
.global funkcjaFdouble
.type funkcjaFdouble, @function

funkcjaFdouble:
push %ebp
mov %esp,%ebp
	
	fldl 8(%ebp)
	fldl 8(%ebp)

	fmulp
	fld1
	faddp
	fsqrt
	fld1
	fsubrp

mov %ebp,%esp
pop %ebp
ret

.global funkcjaGdouble
.type funkcjaGdouble, @function

funkcjaGdouble:
push %ebp
mov %esp,%ebp

	fldl 8(%ebp)
	fldl 8(%ebp)
	#flds liczbaX
	#flds liczbaX
	fmulp
	
	fldl 8(%ebp)
	fldl 8(%ebp)
	fmulp
	fld1
	faddp
	fsqrt
	fld1
	faddp
	
	fdivrp

mov %ebp,%esp
pop %ebp
ret

