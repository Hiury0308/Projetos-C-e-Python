from pathlib import Path

from core.plataforma import identificar_plataforma_por_extensao


class Jogo:

    def __init__(self, arquivo):

        self.arquivo = Path(arquivo)

        self.nome = self.arquivo.stem

        self.plataforma = identificar_plataforma_por_extensao(
            self.arquivo.suffix
        )

        self.identificador = None

        self.ano = None
        self.desenvolvedora = None
        self.generos = []

        self.capa = None
        self.hero = None
        self.logo = None
        self.icone = None

    def __str__(self):
        return self.nome