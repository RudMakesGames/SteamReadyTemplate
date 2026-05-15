Here's a full README:
markdown# SteamReady - UE5.7 Multiplayer Template

![SteamReady](SteamReady/Media/SteamReady_Preview.png)

Skip the boilerplate. SteamReady gives you Steam lobby invite & join functionality plus a full settings system (Audio, Video, Controls) so you can focus on building your game.

---

## Features

- 🎮 **Steam Lobby System** — Host and invite friends or join a random available session
- 🔊 **Audio Settings** — Master, Music, and SFX volume controls with persistent saving
- 🖥️ **Video Settings** — Resolution, window mode, and quality presets
- 🕹️ **Control Settings** — Rebindable controls with controller and keyboard support
- 💾 **Persistent Settings** — All settings are saved and loaded automatically via Save Game
- 🌐 **Multiplayer Ready** — Built with client-server architecture in mind from the ground up

---

## Requirements

- Unreal Engine **5.7** (no other versions are supported)
- Steam running in the background for lobby functionality
- [Advanced Sessions Plugin](https://forums.unrealengine.com/t/advanced-sessions-plugin/27457) installed in your engine

---

## Installation

1. Download or clone this repository
2. Copy the `SteamReady` folder into your Unreal Engine 5.7 Templates directory:
C:\Program Files\Epic Games\UE_5.7\Templates\
3. Restart the Unreal Engine launcher
4. Create a new project and select **Steam Ready** from the template browser

> ⚠️ This template is only compatible with **Unreal Engine 5.7**. It will not work with earlier or later versions.

---

## Getting Started

Once you create a project from the template:

1. Open the project in UE 5.7
2. Set your Steam App ID in `Config/DefaultEngine.ini` under `SteamDevAppId`
3. Play in editor with at least two instances to test lobby functionality

---

## Project Structure
SteamReady/
├── Content/
│   ├── Core/         # Game instance, player controller, game mode
│   ├── UI/           # All widget blueprints
│   └── Settings/     # Settings save game and related blueprints
├── Config/           # Engine and game configuration
└── Source/           # C++ module (minimal)

---

## Known Limitations

- Lobby functionality requires Steam to be running
- `SetPause` is disabled in multiplayer — the pause menu is a local UI overlay only
- Template is not tested on versions other than UE 5.7

---

## License

This template is free to use in personal and commercial projects. No attribution required but always appreciated.

---

## Credits

Built with the [Advanced Sessions Plugin](https://forums.unrealengine.com/t/advanced-sessions-plugin/27457) by Josh Hutchinson.
