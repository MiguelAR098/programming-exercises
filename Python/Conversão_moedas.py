import os
import platform

def limpa_tela():
    sistema = platform.system()
    if sistema == 'Windows':
        os.system('cls')
    else:
        os.system('clear')

def dolar_para_real():
    real = 5.71

    limpa_tela()

    try:
        dolar = float(input('Digite quantos US$ deseja converter para R$: '))

        resultado = dolar * real

        print(f'Convertendo US${dolar:.2f} para R$, será igual a: R${resultado:.2f}.')
        input('Pressione ENTER para retornar.')
    except ValueError:
        print('Entrada inválida! Digite um número.')
        input('Pressione ENTER para retornar.')
        return dolar_para_real()

def real_para_dolar():
    dolar = 0.18

    limpa_tela()

    try:
        real = float(input('Digite quantos R$ deseja converter para US$: '))

        resultado = real * dolar

        print(f'Convertendo R${real:.2f} para US$, será igual a: US${resultado:.2f}.')
        input('Pressione ENTER para retornar.')
    except ValueError:
        print('Entrada inválida! Digite um número.')
        input('Pressione ENTER para retornar.')
        return real_para_dolar()

def menu_conversao():
    while True:
        limpa_tela()
        print('======== CONVERTER DÓLAR / REAL ========')
        print('1- Dólar para Real')
        print('2- Real para Dólar')
        print('3- Sair')

        escolha = input('Escolha uma opção: ')

        if escolha == '1':
            dolar_para_real()
        elif escolha == '2':
            real_para_dolar()
        elif escolha == '3':
            print('Saindo...')
            break
        else:
            print('Opção inválida! Tente novamente.')
            input('Pressione ENTER para retornar.')
            limpa_tela()

menu_conversao()
