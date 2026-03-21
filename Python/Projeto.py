import os
import platform
import matplotlib.pyplot as plt

nome = ''
turma = ''
n1 = 0.0
n2 = 0.0
usuarios = []

def limpa_tela():
    sistema = platform.system()
    if sistema == 'Windows':
        os.system('cls')
    else:
        os.system('clear')

def login_professor():
    senha_correta = 'admin'
    tentativas = 3

    while tentativas > 0:
        senha = input('Digite a senha para ter acesso: ').strip().lower()
        if senha == senha_correta:
            print('Acesso concedido!')
            return True
        else:
            tentativas -= 1
            print(f'Senha incorreta! Tentativas restantes: {tentativas}')

    print('Acesso Bloqueado.')
    return False

def validar_nota(nota):
    while nota < 0 or nota > 10:
        print('Nota inválida! Digite um valor entre 0 e 10.')
        nota = float(input('Digite novamente: '))
    return nota

def cadastro():
    limpa_tela()
    nome = input('Digite o nome do aluno: ').strip().lower()

    if any(usuario['nome'].lower() == nome for usuario in usuarios):
        print('Usuário já cadastrado! Tente novamente.')
        input('Pressione ENTER para voltar ao menu principal.')
        return

    turma = input('Digite a turma do aluno: ')
    n1 = validar_nota(float(input('Digite a nota da N1: ')))
    n2 = validar_nota(float(input('Digite a nota da N2: ')))
    
    usuario = {'nome': nome, 'turma': turma, 'n1': n1, 'n2': n2}
    usuarios.append(usuario)
    
    print('Aluno e notas cadastrados com sucesso! Agora consulte a média e aprovação ou cadastre um novo usuário.')
    input('Pressione ENTER para voltar ao menu principal.')
    limpa_tela()

def consulta():
    limpa_tela()
    if not usuarios:
        print('Nenhum aluno cadastrado!')
    else:
        nome_busca = input('Digite o nome do aluno: ').strip().lower()
        encontrados = [usuario for usuario in usuarios if usuario['nome'].strip().lower() == nome_busca]

        if encontrados:
            for usuario in encontrados:
                media = (usuario['n1'] + usuario['n2']) / 2
                print('O aluno se chama:', usuario['nome'], 'da turma:', usuario['turma'])
                print('Sua nota da N1 foi', usuario['n1'], 'e da N2 foi', usuario['n2'])
                print('Sua média foi:', media)
                print('O aluno foi aprovado!' if media >= 6 else 'O aluno foi reprovado!')
        else:
            print('Usuário não encontrado!')

    input('Aperte ENTER para voltar ao menu principal.')
    limpa_tela()

def excluir_usuario():
    limpa_tela()
    nome_excluir = input('Digite o nome do aluno que deseja excluir: ').strip().lower()
    for usuario in usuarios:
        if usuario['nome'].lower() == nome_excluir.lower():
            confirmar = input(f'Tem certeza que deseja excluir o aluno {usuario['nome']}? (s/n): ')
            if confirmar == 's':
                usuarios.remove(usuario)
            print('Aluno excluído com sucesso!')
        else:
            print('Exclusão cancelada.')
            break
    else:
        print('Usuário não encontrado!')

    input('Aperte ENTER para voltar ao menu principal.')
    limpa_tela()

def editar_usuario():
    limpa_tela()
    nome_editar = input('Digite o nome do aluno que deseja editar: ')
    for usuario in usuarios:
        if usuario['nome'].lower() == nome_editar.lower():
            usuario['turma'] = input('Digite a nova turma: ')
            usuario['n1'] = validar_nota(float(input('Digite a nova nota da N1: ')))
            usuario['n2'] = validar_nota(float(input('Digite a nova nota da N2: ')))
            print('Cadastro atualizado com sucesso!')
            break
        else:
            print('Usuário não encontrado!')

    input('Aperte ENTER para voltar ao menu principal.')
    limpa_tela()

def gerar_relatorio():
    limpa_tela()
    if not usuarios:
        print('Nenhum aluno cadastrado!')
        print('Aperte ENTER para voltar ao menu principal.')
        limpa_tela()
        return
    
    filtro = input('Deseja ver (A)provados, (R)eprovados ou (T)odos? ').strip().lower()
    ordem = input('Deseja ordernar por média (C)rescente ou (D)ecrescente? ').strip().lower()
    reverso = ordem == 'd'
    
    alunos_filtrados = []
    for usuario in usuarios:
        media = (usuario['n1'] + usuario['n2']) / 2
        status = 'Aprovado' if media >= 6 else 'Reprovado'

        if (filtro == 'a' and status == 'Aprovado') or \
        (filtro == 'r' and status == 'Reprovado') or \
        (filtro == 't'):
            alunos_filtrados.append(usuario)
    alunos_ordenados = sorted(alunos_filtrados, key=lambda u: (u['n1'] + u['n2']) / 2, reverse=reverso)

    print('======== RELATÓRIO DE ALUNOS ========')
    for usuario in alunos_ordenados:
        media = (usuario['n1'] + usuario['n2']) / 2
        status = 'Aprovado' if media >= 6 else 'Reprovado'
        print(f'Nome: {usuario['nome']} | Turma: {usuario['turma']} | Média: {media:.2f} | {status}')

    input('Aperte ENTER para voltar ao menu principal.')
    limpa_tela()

def exibir_grafico():
    aprovados = sum(1 for u in usuarios if (u['n1'] + u['n2']) / 2 >= 6)
    reprovados = len(usuarios) - aprovados

    categorias = ['Aprovados', 'Reprovados']
    valores = [aprovados, reprovados]

    plt.bar(categorias, valores, color=['green', 'red'])
    plt.title('Desempenho dos Alunos')
    plt.ylabel('Número de Alunos')
    plt.show()

def menu_aluno():
    while True:
        limpa_tela()
        print('======== MENU DO ALUNO ========')
        print('1- Consultar Nota e Situação')
        print('2- Sair')

        escolha = input('Escolha uma opção: ')

        if escolha == '1':
            consulta()
        elif escolha == '2':
            print('Retornando...')
            break
        else:
            print('Opção inválida! Tente novamente.')
            input('Aperte ENTER para continuar.')

def menu_professor():
    if not login_professor():
        return
    
    while True:
        limpa_tela()
        print('======== MENU DO PROFESSOR =========')
        print('1- Cadastrar')
        print('2- Consultar')
        print('3- Excluir')
        print('4- Editar')
        print('5- Gerar Relatório')
        print('6- Exibir Gráfico de Desempenho')
        print('7- Sair')

        escolha = input('Escolha uma opção: ')

        if escolha == '1':
            cadastro()
        elif escolha == '2':
            consulta()
        elif escolha == '3':
            excluir_usuario()
        elif escolha == '4':
            editar_usuario()
        elif escolha == '5':
            gerar_relatorio()
        elif escolha == '6':
            exibir_grafico()
        elif escolha == '7':
            print('Retornando...')
            break
        else:
            print('Opção inválida! Tente novamente.')
            input('Aperte ENTER para continuar.')

def menu_principal():
    while True:
        limpa_tela()
        print('======== SISTEMA ESCOLAR ========')
        print('1- Aluno')
        print('2- Professor')
        print('3- Sair')

        escolha = input('Escolha uma opção: ')

        if escolha == '1':
            menu_aluno()
        elif escolha == '2':
            menu_professor()
        elif escolha == '3':
            print('Saindo...')
            break
        else:
            print('Opção inválida! Tente novamente.')
            input('Aperte ENTER para continuar.')

menu_principal()
