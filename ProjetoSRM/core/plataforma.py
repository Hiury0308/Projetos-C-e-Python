EXTENSOES_PLATAFORMA = {
    # Nintendo
    ".nes": "Nintendo Entertainment System",
    ".sfc": "Super Nintendo",
    ".smc": "Super Nintendo",
    ".gba": "Game Boy Advance",
    ".gb": "Game Boy",
    ".gbc": "Game Boy Color",
    ".nds": "Nintendo DS",
    ".3ds": "Nintendo 3DS",
    ".cia": "Nintendo 3DS",

    # Sony
    ".iso": "Desconhecida",
    ".cso": "Desconhecida",
    ".chd": "Desconhecida",

    # Nintendo Wii / GameCube
    ".rvz": "Desconhecida",
    ".wbfs": "Nintendo Wii",

    # Nintendo Switch
    ".nsp": "Nintendo Switch",
    ".xci": "Nintendo Switch",

    # Arcade / outros formatos
    ".cue": "Desconhecida",
    ".bin": "Desconhecida",
    ".7z": "Desconhecida",
    ".zip": "Desconhecida",
}


def identificar_plataforma_por_extensao(extensao):
    extensao = extensao.lower()

    return EXTENSOES_PLATAFORMA.get(
        extensao,
        "Desconhecida"
    )