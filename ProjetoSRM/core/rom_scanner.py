from pathlib import Path


EXTENSOES_ROM = {
    ".iso",
    ".cso",
    ".chd",
    ".rvz",
    ".wbfs",
    ".nsp",
    ".xci",
    ".7z",
    ".zip",
    ".nes",
    ".sfc",
    ".smc",
    ".gba",
    ".gb",
    ".gbc",
    ".nds",
    ".3ds",
    ".cia",
    ".cue",
    ".bin",
}


def procurar_roms(pasta):

    pasta = Path(pasta)

    roms = []

    for arquivo in pasta.iterdir():

        if (
            arquivo.is_file()
            and arquivo.suffix.lower() in EXTENSOES_ROM
        ):
            roms.append(arquivo)

    return sorted(
        roms,
        key=lambda arquivo: arquivo.name.lower()
    )