units = {
    1: ('км', 1000.0),
    2: ('мили', 1609.344),
    3: ('метры', 1.0),
    4: ('футы', 0.3048),
    5: ('дюймы', 0.0254),
}

print('Конвертер единиц длины:')
print('1 - км')
print('2 - мили')
print('3 - метры')
print('4 - футы')
print('5 - дюймы')

try:
    value = float(input('Введите значение: '))
    choice = int(input('Выберите исходную единицу измерения: '))
except ValueError:
    print('Ошибка: нужно вводить число.')
else:
    if choice not in units:
        print('Ошибка: неизвестная единица измерения.')
    else:
        unit_name, unit_factor = units[choice]
        meters = value * unit_factor

        print('\nРезультат:')
        for number, (name, factor) in units.items():
            if number != choice:
                print(f'{name}: {meters / factor:.6f}')