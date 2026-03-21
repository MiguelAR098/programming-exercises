import random
import os
import platform

tentativas_maximas = 10
numeros = 100

def limpa_tela():
    sistema = platform.system()
    if sistema == 'Windows':
        os.system('cls')
    else:
        os.system('clear')

def jogo_dificuldade():
    global tentativas_maximas, numeros
    dificuldade = input('Escolha a dificuldade (F)ácil, (M)édio ou (D)ifícil: ').strip().lower()

    if dificuldade == 'f':
        tentativas_maximas = 15
        numeros = 50
        print('Dificuldade definida como fácil.')
    elif dificuldade == 'm':
        tentativas_maximas = 10
        numeros = 100
        print('Dificuldade definida como médio.')
    elif dificuldade == 'd':
        tentativas_maximas = 5
        numeros = 200
        print('Dificuldade definida como difícil.')
    else:
        print('Opção inválida! Dificuldade definida como médio.')
        tentativas_maximas = 10
        numeros = 100

    input('Aperte ENTER para continuar.')
    limpa_tela()

def jogo():
    print('===== JOGO DE ADIVINHAÇÃO =====')

    numero_secreto = random.randint(1, numeros)
    tentativas = 0

    print(f'Adivinhe o número entre 1 e {numeros}!')

    while tentativas < tentativas_maximas:
        tent = tentativas_maximas - tentativas
        try:
            palpite = int(input('Tente um número: '))
            tentativas += 1

            if palpite < numero_secreto:
                print(f'Tente um número maior! Você tem {tent} tentativas restantes.')
            elif palpite > numero_secreto:
                print(f'Tente um número menor! Você tem {tent} tentativas restantes.')
            else:
                print(f'Parabéns! Você acertou o número {numero_secreto}.')
                break
        except ValueError:
            print('Digite um número válido!')

        if tentativas == tentativas_maximas:
            print(f'Você perdeu! O número era {numero_secreto}.')

    input('Aperte ENTER para continuar.')
    limpa_tela()

def menu_jogo():
    while True:
        print('===== BEM-VINDO AO JOGO DE ADIVINHAÇÃO! =====')
        print('1- Iniciar jogo')
        print('2- Alterar Dificuldade')
        print('3- Sair')

        escolha = input('Selecione uma opção: ').strip()

        if escolha == '1':
            jogo()
        elif escolha == '2':
            jogo_dificuldade()
        elif escolha == '3':
            print('Saindo...')
            break
        else:
            print('Opção inválida! Tente novamente.')

menu_jogo()
