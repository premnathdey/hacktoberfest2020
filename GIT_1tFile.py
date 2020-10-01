a = {}  # dictionary of main 10 questions
a['''
What is the capital of India
A. Delhi
B. Chandigarh
C. Bombay
D. Jammu
'''
] = 'A'

a['''
What is the capital of Germany
A. Paris
B. Berlin
C. Athens
D. Budapest
'''] = 'B'

a['''
What is the capital of Malaysia
A. Singapore
B. Maldives
C. Kuala Lampur
D. Luxemborg
'''] = 'C'

a['''
What is the capital of Mexico
A. Nairobi
B. Astana
C. South Tarawa
D. Mexico City
'''] = 'D'

a['''
What is the capital of Nepal
A. Abuja
B. Kathmandu
C. Managua
D. Oslo
'''] = 'B'

a['''
What is the capital of Netherlands
A. Muskat
B. Dublin
C. Amsterdam
D. Muscat
'''] = 'C'

a['''
What is the capital of Poland
A. Lisbon
B. Lima
C. Wellington
D. Warsaw
'''] = 'D'

a['''
What is the capital of Spain
A. Rome
B. Madrid
C. Caracus
D. Rabat
'''] = 'B'

a['''
What is the capital of Maldives
A. Maldives 
B. Bamako
C. Male
D. Majuro
'''] = 'C'

a['''
What is the capital of Pakistan
A. Lahore
B. Karachi
C. Peshawar
D. Islamabad
'''] = 'D'

b = {}  # dictionary of 4 flip questions out of which one will be displayed randomly
b['''
Who was the first president of India
A. Rajendra Prasad
B. Jawaharlal Nehru
C. B.R.Ambedkar
D. Ram Nath Kovind
'''] = 'A'

b['''
Who was the first Prime Minsiter of India
A. Motilal Nehru
B. Jawaharlal Nehru
C. Subhas Chandra Bose
D. Mahatma Gandhi
'''] = 'B'

b['''
In which year did the 1st World War start
A. 1919
B. 1924
C. 1914
D. 1918
'''] = 'C'

b['''
In which year did the 2nd World War start
A. 1930
B. 1922
C. 1945
D. 1939
'''] = 'D'

c = {}  # dictionary of options(will be used later to shuffle options for 50-50)
c['A'] = 'A'
c['B'] = 'B'
c['C'] = 'C'
c['D'] = 'D'

import random

question = list(a.keys())  # we shuffled the main questions(Keys of dictionary a)

random.shuffle(question)

questionExtra = list(b.keys())  # we shuffled the flip questions(Keys of dictionary b)

random.shuffle(questionExtra)

i = 0  # for iteration
count = 0  # to count the score
count1 = 0  # used as a flag .. so that the lifeline can be used only once
count2 = 0  # flag no #2
print('************** Welcome to KBC ***************')
print('Enter your answer in Capital')
print('Press 0 to access your lifelines')
print('You can only use one lifeline per question')
print('LOADING...')

while i < len(question):  # Start of loop...
    print(question[i])
    k = input('Enter your choice ')

    if k == a[question[i]]:  # increasing the score if answer is correct....
        count = count + 1

    elif (k != a[question[i]] and k != '0'):  # ending the game if answer is wrong.........
        print('Wrong answer')
        break

    elif (k == '0'):  # LifeLines(when k==0)

        print('LifeLine:')
        print('1. press 1 for 50-50')
        print('2. press 2 for question flip')
        life = input('enter your choice ')

        if (life == '1' and count1 != 1):  # If statement for 50-50 option...
            count1 = 1
            del c[a[question[i]]]  # removing the correct option from dictionary c
            print('50 - 50 option has been initiated......')
            print('Answer is one of the following ...')
            print(a[question[i]])
            print(random.choice(list(c)))  # randomly printing an incorrect option from dictionary c
            k1 = input('Enter your Choice')

            if k1 == a[question[i]]:
                count = count + 1
            else:
                print('Wrong Answer')
                break

        elif (life == '2' and count2 != 1):  # elif statement for flip the question
            print('Flip the question lifeline has been initiated.....')
            count2 = 1
            print(questionExtra[0])  # printing a question from the flip question bank(questionExtra list)
            k1 = input('Enter your choice ')

            if (k1 == b[questionExtra[0]]):
                count = count + 1
            else:
                print('Wrong Answer')
                break
        elif (life == '1' and count1 == 1):
            print('You have already used the 50-50 option ')
            continue

        elif (life == '2' and count2 == 1):
            print('you have already used FLip the question lifeline')
            continue

        else:
            print('you have used both your lifelines')

    if (count == 10):  # stopping the game once the person answers 10 questions correctly
        break
    i = i + 1

print('Your Score is ' + str(count))  # displaying the score at the end of the game
print('Game over ')
	
