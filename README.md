﻿# Часть I

## Предисловие
В этом документе описаны стандарты (Нормы) школы 42. Стандарт программирования определяет свод правил, которым нужно следовать во время написания кода. Вы должны всегда следовать правилам Норм во всех C-проектах в школе, если конкретно не указано иного.

### I.1 Почему принят стандарт?
Две главных цели, которые преследуют Нормы: 

1. Стандартизировать и правильно форматировать ваш код, чтобы все (ученики, администрация и даже вы сами) могли легко читать и понимать его. 
2. Помочь вам в написании короткого и простого кода.

### I.2 Нормы для подачи
Все ваши C-файлы должны следовать Норме. Если вы совершите любую ошибку по Нормам, то получите 0 за все задание или даже весь проект.

### I.3 Предложения
Достаточно быстро вы поймете, что Нормы не такие пугающие, как кажутся. Напротив, они помогают вам больше чем вы думаете. Они позволяют читать вам код ваших одноклассников гораздо проще и наоборот. Наказание за исходный файл с одной ошибкой по Нормам такое же, как и за файл с десятью ошибками. Мы настойчиво рекомендуем вам держать Нормы в голове во время написания кода - даже если вам сначала покажется, что они вас замедляют. Со временем, это превратится в рефлекс.

# Часть II
## Нормы
### II.1 Наименования
**Обязательная часть**

 - Имена структур должны начинаться с префикса s_.
 - Имена создания типов typedef должны начинаться с префикса t_.
 - Имена объединения union должны начинаться с префикса u_.
 - Имена перечисления enum должны начинаться с префикса e_.
 - Имена глобальных переменных должны начинаться с префикса g_.
 - Названия переменных и функций должны содержать только маленькие буквы, цифры и ‘_’.
 - Названия файлов и директорий должны содержать только маленькие буквы, цифры и ‘_’.
 - Файлы должны компилироваться.
 - Запрещены символы, которых нет в стандартной ASCII таблице.

**Советы**

 - Названия объектов (переменных, функций, макросов, типов, файлов и директории) должны быть понятны и иметь смысл. Только счетчики могут быть названы так, как вам хочется.
 - Допускается использование аббревиатур только в том случае, если названия все равно остаются понятными и осмысленными. Если название содержит в себе более чем одно слово, то слова должны разделяться символом ‘_’.
 - Все идентификаторы (функции, макросы, типы, переменные и т. д.) должны быть на английском языке.
 - Любое использование глобальных переменных должно быть осмысленно.

### II.2 Форматирование
**Обязательная часть**

 - Вы должны использовать табуляцию длиной 4 пробела. Это не тоже самое, что 4 пробела, мы говорим о настоящей табуляции (кнопка TAB).
 - Каждая функция может состоять максимум из 25 строк, не считая строки с фигурными скобками этой функции.
 - Максимальная длина строки вместе с комментариями - 80 знаков. Внимание: табы считаются не как знаки, а как количество пробелов, которые они заменяют.
 - Одна инструкция на строку
 - Пустая строка должна быть пустой; никаких табов или пробелов
 - Строка никогда не может заканчиваться пробелом или табом
 - Вам нужно начинать новую строку после каждой фигурной скобки или структуры
 - Все запятые и точки с запятой должны иметь после себя пробел, только если это не конец строки
 - Каждый оператор (бинарный или тернарный) или операнда должны быть разделены одним и только одним пробелом
 - За каждым ключевым слово С должен идти пробел кроме как слов типов (таких как int, char, float, и т.д.), а также sizeof

### II.3 Параметры, передаваемые в функцию
**Обязательная часть**

 - Должно быть не больше 4х передаваемых параметров
 - Функция, которая ничего не возвращает, должна в объявлении ее начинаться с void

### II.4 Функции
**Обязательная часть**

 - Параметры в прототипе функции должны быть названы.
 - Каждая функция должна быть отделена от следующей пустой линией.
 - Ты не можешь объявлять больше 5 переменных в одном блоке.

**Советы**

 - Идентификаторы функций должны находиться на одном уровне. Тоже самое в заголовочном файле.

### II.5 Typedef, struct, enum и union (определение имени, структура, перечисление, объединение)
**Обязательная часть**

- Ставь табуляцию при объявлении  struct, enum или union.
- Когда объявляешь переменный тип структуры, перечисления или объединения, добавь один пробел в типе.
 - Добавь табуляцию между двумя параметрами определителя имени (typedef).
 - При объявлении структуры, объединения или перечисления с определением имени, применяются все правила. Новое имя типа должно соотноситься с именем структуры/объединения/перечисления.
 - Нельзя объявлять структуру в файле .с.

### II.6 Заголовки
**Обязательная часть**

 - В файлах заголовков разрешено следующее :  включения (#include) (системные или нет), объявления, определения, прототипы и макросы.
 - Все включения ( .c или .h)  должны быть в начале файла.
 - Мы будем защищать заголовки от двойных включений. 
 - Если имя файла ft_foo.h, его визуальный макрос это FT_FOO_H.
 - Прототипы функций должны быть только в файлах формата .h
 - Неиспользованные включения заголовков ( .h) недопустимы.

**Советы**
 - Все включения заголовков должны быть обоснованы, как в .c  файлах, так и в .h

### II.7 Макрос и препроцессор
**Обязательная часть**

 - "defines", которая описывает или объясняет код запрещена.
 - Многострочные макросы запрещены.
 - В верхнем регистре должны содержаться только имена макросов.
 - You must indent characters following #if , #ifdef or #ifndef.

### II.8 Запрещено для использования
**Обязательная часть**

- Не разрешается пользоваться
 - циклом do...while
 - оператором switch
 - оператором case
 - оператором goto
- Пользоваться динамическими массивами


### II.9 Комментарии
**Обязательная часть**

- Разрешено комментировать код в ваших файлах исходного кода
- Комментарии не должны быть в теле функции
- Комментарии должны начинаться и заканчиваться одиночной линией. Все промежуточные строки должны быть выравнены и начинаться с ‘**’.
- Комментарии не должны содержать //
Советы
- Комментарии должны быть на английском
- A comment cannot justify a "bastard" function

### II.10 Файлы
**Обязательная часть**

- Вы не можете include'ить .c файлы
- Вы не можете опеределять больше пяти функций в одном .c файле
