import tkinter as tk
from tkinter import filedialog, messagebox

from core.rom_scanner import procurar_roms
from core.jogo import Jogo


class MeuSRM:

    def __init__(self, janela):

        self.janela = janela

        self.janela.title("Meu SRM")
        self.janela.geometry("700x500")

        self.jogos = []

        self.criar_interface()

    def criar_interface(self):

        titulo = tk.Label(
            self.janela,
            text="Meu SRM",
            font=("Arial", 22, "bold")
        )

        titulo.pack(pady=20)

        botoes = tk.Frame(self.janela)
        botoes.pack()

        botao_jogo = tk.Button(
            botoes,
            text="Selecionar jogo",
            width=20,
            command=self.selecionar_jogo
        )

        botao_jogo.pack(
            side="left",
            padx=5
        )

        botao_pasta = tk.Button(
            botoes,
            text="Selecionar pasta",
            width=20,
            command=self.selecionar_pasta
        )

        botao_pasta.pack(
            side="left",
            padx=5
        )

        self.lista = tk.Listbox(
            self.janela,
            width=80,
            height=18,
            selectmode=tk.MULTIPLE
        )

        self.lista.pack(
            padx=20,
            pady=20
        )

        botao_continuar = tk.Button(
            self.janela,
            text="Continuar",
            width=20,
            command=self.continuar
        )

        botao_continuar.pack()

    def selecionar_jogo(self):

        arquivo = filedialog.askopenfilename(
            title="Selecione uma ROM"
        )

        if not arquivo:
            return

        if any(
            jogo.arquivo == arquivo
            for jogo in self.jogos
        ):
            return

        jogo = Jogo(arquivo)

        self.jogos.append(jogo)

        self.lista.insert(
            tk.END,
            jogo.nome
        )

    def selecionar_pasta(self):

        pasta = filedialog.askdirectory(
            title="Selecione a pasta das ROMs"
        )

        if not pasta:
            return

        roms = procurar_roms(pasta)

        if not roms:

            messagebox.showinfo(
                "Nenhuma ROM encontrada",
                "Não encontrei nenhuma ROM nessa pasta."
            )

            return

        for rom in roms:

            if any(
                jogo.arquivo == rom
                for jogo in self.jogos
            ):
                continue

            jogo = Jogo(rom)

            self.jogos.append(jogo)

            self.lista.insert(
                tk.END,
                jogo.nome
            )

    def continuar(self):

        indices = self.lista.curselection()

        if not indices:

            messagebox.showwarning(
                "Nenhum jogo selecionado",
                "Selecione pelo menos um jogo."
            )

            return

        print()
        print("Jogos selecionados:")
        print()

        for indice in indices:

            jogo = self.jogos[indice]

            print(
                f"Nome: {jogo.nome}"
            )

            print(
                f"Arquivo: {jogo.arquivo}"
            )

            print(
                f"Plataforma: {jogo.plataforma}"
            )

            print()


def main():

    janela = tk.Tk()

    MeuSRM(janela)

    janela.mainloop()


if __name__ == "__main__":
    main()