color = 'red'
if color == 'blue':
	print('')
elif color == 'green':
	print('G')
elif color == 'red':
	print("It's a red!")
else:
	print('а хз че такое')

count = 1
while count <= 5:
	print(count)
	count += 1

count = 0
while count < 5:
	print(count)
	count += 1

while True:
	staff = input('Введи любую хуйню: ')
	if staff == 'q':
		break
	print(staff.capitalize())

while True:
	value = input('Ввести целое число: ')
	if value == 'q':
		break
	number = int(value)
	if number % 2 == 0:
		continue
	print(number, "в квадрате, ровняется", number*number)

    
    
